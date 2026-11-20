#include "Sed.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: ./sed <filename> <s1> <s2>"
                  << std::endl;
        return (1);
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string content;

    if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be empty" << std::endl;
        return (1);
    }

    if (!readFile(filename, content))
        return (1);

    std::string result = replaceAll(content, s1, s2);

    if (!writeFile(filename + ".replace", result))
        return (1);

    return (0);
}