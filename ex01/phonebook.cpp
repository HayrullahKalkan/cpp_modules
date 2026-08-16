#include "phonebook.hpp"

# include <iostream>
# include <iomanip>
# include <sstream>

static std::string truncateField(const std::string &value)
{
    if (value.length() <= 10)
        return value;
    return value.substr(0, 9) + ".";
}

PhoneBook::PhoneBook() : contact_count(0), next_index(0)
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact()
{
    std::string fields[5];
    const char *labels[5] = {
        "first name",
        "last name",
        "nickname",
        "phone number",
        "darkest secret"
    };

    for (int i = 0; i < 5; ++i)
    {
        std::cout << "Enter " << labels[i] << ": ";
        if (!std::getline(std::cin, fields[i]) || fields[i].empty())
        {
            std::cout << "Invalid input. Contact not saved." << std::endl;
            return ;
        }
    }

    Contact contact;
    contact.setFirstName(fields[0]);
    contact.setLastName(fields[1]);
    contact.setNickname(fields[2]);
    contact.setPhoneNumber(fields[3]);
    contact.setDarkestSecret(fields[4]);

    if (contact_count < 8)
    {
        contacts[contact_count] = contact;
        ++contact_count;
    }
    else
    {
        contacts[next_index] = contact;
    }
    next_index = (next_index + 1) % 8;
    std::cout << "Contact added successfully." << std::endl;
}

void PhoneBook::searchContact() const
{
    if (contact_count == 0)
    {
        std::cout << "Phonebook is empty." << std::endl;
        return ;
    }

    std::cout << std::setw(10) << "index" << '|'
              << std::setw(10) << "first name" << '|'
              << std::setw(10) << "last name" << '|'
              << std::setw(10) << "nickname" << std::endl;

    for (int i = 0; i < contact_count; ++i)
    {
        std::cout << std::setw(10) << i << '|'
                  << std::setw(10) << truncateField(contacts[i].getFirstName()) << '|'
                  << std::setw(10) << truncateField(contacts[i].getLastName()) << '|'
                  << std::setw(10) << truncateField(contacts[i].getNickname()) << std::endl;
    }

    std::cout << "Enter index: ";
    std::string input;
    std::getline(std::cin, input);

    std::stringstream stream(input);
    int index = -1;
    stream >> index;
    if (!stream || index < 0 || index >= contact_count)
    {
        std::cout << "Invalid index." << std::endl;
        return ;
    }

    std::cout << "First name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
    std::cout << "Phone number: " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << contacts[index].getDarkestSecret() << std::endl;
}

