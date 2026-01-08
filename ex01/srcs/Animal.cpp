/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:29:22 by skomatsu          #+#    #+#             */
/*   Updated: 2026/01/08 15:29:25 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "Animal : default constructor called" << std::endl;
}

Animal::Animal(const std::string &type) : _type(type)
{
    std::cout << "Animal : " << _type << " default constructor called" << std::endl;
}

Animal::Animal(const Animal &other) : _type(other._type)
{
    std::cout << "Animal : Copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &other)
{
    std::cout << "Animal : Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _type = other._type;
    }
    return *this;
}

Animal::~Animal(void)
{
    std::cout << "Animal : " << _type << ": Destructor called" << std::endl;
}

void Animal::makeSound(void) const
{
    std::cout << "Some generic animal sound" << std::endl;
}

std::string Animal::getType(void) const
{
    return _type;
}
