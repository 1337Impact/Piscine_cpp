/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkhat <mbenkhat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:23:54 by mbenkhat          #+#    #+#             */
/*   Updated: 2022/07/03 14:29:10 by mbenkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

void    PhoneBook::ADD(){
    std::string data[4];
    std::cin >> data[0];
    std::cin >> data[1];
    std::cin >> data[2];
    std::cin >> data[3];
    std::cin >> data[4];
    Contact new_c(data);
}

void    PhoneBook::EXIT(void){
    exit(0);
}