/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakalkan <hakalkan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 03:24:56 by hakalkan          #+#    #+#             */
/*   Updated: 2026/06/14 04:13:32 by hakalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::setname(const std::string& newname)
{
    this->name = newname; 
}

void Contact::setsurname(const std::string& newsurname)
{
    this->surname = newsurname; 
}

void Contact::setnickname(const std::string& newnickname)
{
    this->nickname = newnickname; 
}

void Contact::setphone_number(const std::string&  newphone_number)
{
    this->phone_number = newphone_number; 
}

void Contact::setdarkest_secret(const std::string& newdarkest_secret)
{
    this->darkest_secret = newdarkest_secret; 
}

std::string Contact::getname() const
{
    return this->name;
}

std::string Contact::getsurname() const
{
    return this->surname;
}

std::string Contact::getnickname() const
{
    return this->nickname;
}

std::string Contact::getphone_number() const
{
    return this->phone_number;
}

std::string Contact::getdarkest_secret() const
{
    return this->darkest_secret;
}
