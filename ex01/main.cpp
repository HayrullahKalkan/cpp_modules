#include "phonebook.hpp"

# include <iostream>
# include <cctype>

static std::string toUpper(std::string value)
{
    for (std::string::size_type i = 0; i < value.size(); ++i)
        value[i] = static_cast<char>(std::toupper(static_cast<unsigned char>(value[i])));
    return value;
}

int main()
{
    std::string command;
    PhoneBook phonebook;

    while (true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, command))
            break ;
        command = toUpper(command);

        if (command == "ADD")
            phonebook.addContact();
        else if (command == "SEARCH")
            phonebook.searchContact();
        else if (command == "EXIT")
            break ;
        else
            std::cout << "Invalid command." << std::endl;
    }
    return (0);
}
