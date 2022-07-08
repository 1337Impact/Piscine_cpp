/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkhat <mbenkhat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:05:04 by mbenkhat          #+#    #+#             */
/*   Updated: 2022/07/07 17:51:30 by mbenkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"
#include <iostream>
#include "PhoneBook.hpp"

int main(){
    PhoneBook phone;
    std::string cmd;
    while (1){
        std::cin >> cmd;
        if (!cmd.compare("ADD")){
            phone.ADD();
        }
        else if (!cmd.compare("SEARCH")){
            phone.SEARCH();
        }
        else if (!cmd.compare("EXIT")){
            phone.EXIT();
        }
    }
}