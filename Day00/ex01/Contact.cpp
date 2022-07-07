/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkhat <mbenkhat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 13:58:41 by mbenkhat          #+#    #+#             */
/*   Updated: 2022/06/30 14:14:05 by mbenkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(std::string* data)
{
    first_name = data[0];
    last_name = data[1];
    nickname = data[2];
    phone_number = data[3];
    darkest_secret = data[4];
}

std::string    Contact::get_first_name(){
    return first_name;
}

std::string    Contact::get_last_name(){
    return last_name;
}

std::string    Contact::get_nickname(){
    return nickname;
}

std::string    Contact::get_phone_number(){
    return phone_number;
}

std::string    Contact::get_darkest_secret(){
    return darkest_secret;
}