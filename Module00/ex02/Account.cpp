/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkhat <mbenkhat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:51:46 by mbenkhat          #+#    #+#             */
/*   Updated: 2022/07/15 19:33:57 by mbenkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip> 

void Account::_displayTimestamp(void)
{
    std::time_t t = std::time(NULL);
    std::tm *now = std::localtime(&t);
    std::cout << "[" << (now->tm_year + 1900);
    std::cout << std::setw(2) << std::setfill('0') << (now->tm_mon + 1);
    std::cout << std::setw(2) << std::setfill('0') << now->tm_mday;
    std::cout << "_";
    std::cout << std::setw(2) << std::setfill('0') << now->tm_hour;
    std::cout << std::setw(2) << std::setfill('0') << now->tm_min;
    std::cout << std::setw(2) << std::setfill('0') << now->tm_sec << "] ";
}

Account::Account( int initial_deposit ){
    
}