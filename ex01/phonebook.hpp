/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakalkan <hakalkan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 02:58:23 by hakalkan          #+#    #+#             */
/*   Updated: 2026/06/14 04:10:23 by hakalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "contact.hpp"

class Phonebook
{
    private:
        Contact people[8];
        
    public:
        Phonebook();
        ~PhoneBook();
        void add_contact();
        void search_contact();
};

#endif