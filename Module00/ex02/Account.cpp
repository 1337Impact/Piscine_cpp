/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkhat <mbenkhat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:51:46 by mbenkhat          #+#    #+#             */
/*   Updated: 2022/07/16 11:06:53 by mbenkhat         ###   ########.fr       */
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

Account::Account( int initial_deposit ):
    _accountIndex(_nbAccounts), _amount(initial_deposit),
    _nbDeposits(0), _nbWithdrawals(0)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex 
            << ";amount:" << _amount 
            << ";created" << std::endl;
    _totalAmount += _amount;
    _nbAccounts ++;
}

Account::Account( void ){
}

Account::~Account( void ){
    _displayTimestamp();
    std::cout << "index:" << _accountIndex 
        << ";amount:" << _amount 
        << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit ){
    _amount += deposit;
    _nbDeposits ++;
    _totalNbDeposits ++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex 
            << ";p_amount:" << _amount - deposit
            << ";deposit:" << deposit
            << ";amount:" << _amount
            << ";nb_deposits:" << _nbDeposits
            << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
    _displayTimestamp();
    std::cout << "index:" << _accountIndex 
            << ";p_amount:" << _amount;
    if (_amount >= withdrawal){
        _amount -= withdrawal;
        _nbWithdrawals ++;
        _totalNbWithdrawals ++;
        std::cout << ";withdrawal:" << withdrawal
                << ";amount:" << _amount
                << ";nb_withdrawals:" << _totalNbWithdrawals
                << std::endl;
        return true;
    }
    else {
        std::cout << ";withdrawal:refused"
                << std::endl;
    }
    return false;
}

int		Account::checkAmount( void ) const{
    return _amount;
}

void	Account::displayStatus( void ) const{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
            << ";amount:" << _amount
            << ";deposits:" << _nbDeposits
            << ";withdrawals:" << _nbWithdrawals
            << std::endl;
}

void	Account::displayAccountsInfos( void ){
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts
            << ";total:" << _totalAmount
            << ";deposits:" << _totalNbDeposits
            << ";withdrawals:" << _totalNbWithdrawals
            << std::endl;
}

int	Account::getNbAccounts( void ){
    return _nbAccounts;
}
int	Account::getTotalAmount( void ){
    return _totalAmount;
    
}
int	Account::getNbDeposits( void ){
    return _totalNbDeposits;
    
}
int	Account::getNbWithdrawals( void ){
    return _totalNbWithdrawals;
}

int Account::_nbAccounts = 0;

int Account::_totalAmount = 0;

int Account::_totalNbDeposits = 0;

int Account::_totalNbWithdrawals = 0;