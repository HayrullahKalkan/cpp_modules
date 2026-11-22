#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: ./sed <filename> <s1> <s2>" << std::endl;
        return (1);
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be empty" << std::endl;
        return (1);
    }

    std::ifstream file(filename.c_str());

    if (!file.is_open())
    {
        std::cerr << "Error: Cannot open file" << std::endl;
        return (1);
    }

    std::string content;
    char c;

    while (file.get(c))
        content += c;

    if (file.bad() || !file.eof())
    {
        std::cerr << "Error: Cannot read file" << std::endl;
        return (1);
    }

    file.close();

    std::string result;
    size_t start = 0;
    size_t pos;

    while ((pos = content.find(s1, start)) != std::string::npos)
    {
        result += content.substr(start, pos - start);
        result += s2;
        start = pos + s1.length();
    }

    result += content.substr(start);

    std::string outputName = filename + ".replace";
    std::ofstream output(outputName.c_str());

    if (!output.is_open())
    {
        std::cerr << "Error: Cannot create output file" << std::endl;
        return (1);
    }

    output << result;
    output.close();

    if (output.fail())
    {
        std::cerr << "Error: Cannot write file" << std::endl;
        return (1);
    }

    return (0);
}