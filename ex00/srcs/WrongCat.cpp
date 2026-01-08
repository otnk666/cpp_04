/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:29:49 by skomatsu          #+#    #+#             */
/*   Updated: 2026/01/08 15:29:50 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat : default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    std::cout << "WrongCat : Copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "WrongCat : Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        WrongAnimal::operator=(other);
    }
    return *this;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat : Destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "Wrong Cat sound" << std::endl;
}
