/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkhat <mbenkhat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:38:00 by mbenkhat          #+#    #+#             */
/*   Updated: 2022/07/07 19:08:25 by mbenkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class PhoneBook
{
private:
    int     index;
    Contact c[9];
    int     ft_atoi(std::string str);
    void     displayColumn(std::string str);
public:
    PhoneBook();
    void    ADD(void);
    void    SEARCH(void);
    void    EXIT(void);
    ~PhoneBook();
};

#endif