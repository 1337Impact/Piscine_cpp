/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkhat <mbenkhat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:38:00 by mbenkhat          #+#    #+#             */
/*   Updated: 2022/06/30 14:22:25 by mbenkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook
{
private:
    Contact c[9];
public:
    PhoneBook();
    void    ADD(void);
    void    SEARCH(void);
    void    EXIT(void);
    ~PhoneBook();
};

#endif