/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkhat <mbenkhat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:23:54 by mbenkhat          #+#    #+#             */
/*   Updated: 2022/07/07 21:55:41 by mbenkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "PhoneBook.hpp"
# include <iostream>

PhoneBook::PhoneBook()
{
    index = 0;
}

void     PhoneBook::displayColumn(std::string str){
    for (int i = 0; i < 10 - (int)str.length(); i++)
        std::cout << ' ';
    for (int i = 0; i < (int)str.length() && i < 9; i++){
        std::cout << str[i];
    }
    if (str.length() == 10)
        std::cout << str[9];
    else if (str.length() > 10)
        std::cout << '.';
}

int     PhoneBook::ft_atoi(std::string str){
    int out = 0;
    int a =  1;
    unsigned long i = 0;
    if (str[0] == '0')
        return 0;
    if (str[0] == '-'){
        a = -1;
	}
	while (i < str.length())
	{
        if (str[i] >= 48 && str[i] <= 57){
		    out = out * 10 + (str[i] - 48);
		    i++;
        }
        else
            return -1;
	}
    if (out == 0)
        return(-1);
    return(out * a);
}

void    PhoneBook::ADD()
{
    std::string data[5];
    std::cout << "add a contact:" << std::endl;
    std::cin >> data[0];
    std::cin >> data[1];
    std::cin >> data[2];
    std::cin >> data[3];
    std::cin >> data[4];
    Contact new_c(data);
    if (index <= 7)
        c[index++] = new_c;
    else{
        for (int i = 0; i < 7; i++){
            c[i] = c[i+1];
        }
        c[7] = new_c;
    }
    std::cout << "Accont has been added!" << std::endl;
}

void    PhoneBook::SEARCH(){
    for (int i = 0; i < index; i++){
        displayColumn(std::to_string(i));
        std::cout << '|';
        displayColumn(c[i].get_first_name());
        std::cout << '|';
        displayColumn(c[i].get_last_name());
        std::cout << '|';
        displayColumn(c[i].get_nickname());
        std::cout << std::endl;
    }
    std::cout << "Search for contact:" << std::endl;
    std::string input;
    std::cin >> input;
    int in = ft_atoi(input);
    if (in >= index || in < 0){
        std::cout << "OUT OF RANGE" << std::endl;
    }
    else{
        std::cout << c[in].get_first_name() << std::endl;
        std::cout << c[in].get_last_name() << std::endl;
        std::cout << c[in].get_phone_number() << std::endl;
        std::cout << c[in].get_nickname() << std::endl;
        std::cout << c[in].get_darkest_secret() << std::endl;
    }
}

void    PhoneBook::EXIT(void){
    exit(0);
}

PhoneBook::~PhoneBook(){}