


int main(int ac, char **av)
{
    std::ifstream file(av[1]);

    if (ac != 4)
    {
        std::cout << "Usage: ./convert <value>" << std::endl;
        return 1;
    }
    if(!file.is_open())
    {
        std::cout << "Error: could not open file" << std::endl;
        return 1;
    }
    std::string line;
    while (std::getline(file, line))
    {
        std::cout << line << std::endl;
    }
    file.close();
    return 0;
}