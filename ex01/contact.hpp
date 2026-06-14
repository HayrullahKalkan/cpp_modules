/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakalkan <hakalkan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 03:25:14 by hakalkan          #+#    #+#             */
/*   Updated: 2026/06/14 04:13:22 by hakalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
    private:
        std::string name;
        std::string surname;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        //setter fonksiyonlarım 
        void setname(const std::string& name);
        void setsurname(const std::string& surname);
        void setnickname(const std::string& nickname);
        void setphone_number(const std::string& phone_number);
        void setdarkest_secret(const std::string& darkest_secret);
        

        // getter fonksiyonlarım
        std::string getname() const;
        std::string getsurname() const;
        std::string getnickname() const;
        std::string getphone_number() const;
        std::string getdarkest_secret() const;
};



#endif