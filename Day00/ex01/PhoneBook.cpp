#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <stdlib.h>

PhoneBook ph;

Contact *PhoneBook::add_contact(Contact *contacts, Contact tobeadded){
    int s = 0;
    while (contacts[s] != NULL)
        s++;
    if (s < 8){
        contacts[s - 1] = tobeadded;
        contacts[s] = NULL;
    }
    else{
        for (int i = 0; i < 7; i++){
            contacts[i] = contacts[i+1];
        }
        contacts[7] = tobeadded;
    }
    return contacts;
}

void PhoneBook::ADD(void){
    Contact c1;
    
    std::cin >> c1.first_name;
    std::cin >> c1.last_name;
    std::cin >> c1.nickname;
    std::cin >> c1.nickname;
    std::cin >> c1.darkest_secret;

    c = add_contact(c, c1);
}



void    PhoneBook::SEARCH(void){
    for (int i = 0; c[i] != NULL; i++){
        std::cout << c[i].first_name;
    }
}

void    PhoneBook::EXIT(void){
    exit(0);
}

int main(void){
    PhoneBook phone;

    phone.ADD();
    phone.ADD();
    phone.ADD();
    phone.SEARCH();
}