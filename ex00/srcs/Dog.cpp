/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 23:05:45 by skomatsu          #+#    #+#             */
/*   Updated: 2026/01/08 15:32:09 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog : default constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog : Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog : Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
    }
    return *this;
}

Dog::~Dog(void)
{
    std::cout << "Dog : Destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "Wanwan!" << std::endl;
}
