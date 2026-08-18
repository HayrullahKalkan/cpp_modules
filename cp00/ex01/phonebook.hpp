#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include "contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int contact_count;
        int next_index;

    public:
        PhoneBook();
        ~PhoneBook();

        void addContact();
        void searchContact() const;
};

#endif