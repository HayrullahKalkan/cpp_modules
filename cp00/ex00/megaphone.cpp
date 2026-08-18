/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakalkan <hakalkan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 01:36:11 by hakalkan          #+#    #+#             */
/*   Updated: 2026/06/14 02:03:55 by hakalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main(int ac, char **av)
{
    int i = 1;
    int j;
    
    if (av == NULL)
        return 1;
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (i < ac)
    {
        j = 0;
        while (av[i][j])
        {
            if(av[i][j] >= 97 && av[i][j] <= 122)
            {
                std::cout << (char)toupper(av[i][j]);
            }
            else
                std::cout << av[i][j];
            
            j++;
        }
        i++;
    }
    std::cout << std::endl;
    return 0;
}
