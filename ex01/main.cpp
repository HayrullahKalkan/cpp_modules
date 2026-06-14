/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakalkan <hakalkan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 04:00:18 by hakalkan          #+#    #+#             */
/*   Updated: 2026/06/14 04:08:51 by hakalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


int main()
{
    std::string input;
    std::string command;
    
    Phonebook phonebook;
    
    command = "***************************************\n"
              "*          search, add or exit        *\n"
              "***************************************\n\n";
    while (1)
    {
        input = "";

        if(input == "exit")
        {
            //çıkış yapılacak
        }
        if(input == "add")
        {
            // kişi ekleme işlemi yapılacak
        }
        else if(input == "search")
        {
            // kişi arama işlemi yapılacak
        }
        else
        {
            // geçersiz komut uyarısı verilecek
        }
    }    
    
    return 0;
}
