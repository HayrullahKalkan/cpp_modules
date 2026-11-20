#include "Sed.hpp"

bool readFile(const std::string &filename,
              std::string &content)
{
    std::ifstream file(filename.c_str(), std::ios::binary);
    char ch;

    if (!file.is_open())
    {
        std::cerr << "Error: Cannot open input file" << std::endl;
        return (false);
    }

    while (file.get(ch))
        content += ch;

    if (file.bad() || !file.eof())
    {
        std::cerr << "Error: Cannot read file" << std::endl;
        return (false);
    }

    file.close();

    return (true);
}

bool writeFile(const std::string &filename,
               const std::string &content)
{
    std::ofstream file(filename.c_str(), std::ios::binary);

    if (!file.is_open())
    {
        std::cerr << "Error: Cannot create output file" << std::endl;
        return (false);
    }

    file << content;
    file.close();

    if (file.fail())
    {
        std::cerr << "Error: Cannot write file" << std::endl;
        return (false);
    }

    return (true);
}

std::string replaceAll(const std::string &content,
                       const std::string &s1,
                       const std::string &s2)
{
    std::string result;
    std::string::size_type start = 0;
    std::string::size_type pos;

    if (s1.empty())
        return (content);

    while ((pos = content.find(s1, start)) != std::string::npos)
    {
        result += content.substr(start, pos - start);
        result += s2;
        start = pos + s1.length();
    }

    result += content.substr(start);

    return (result);
}