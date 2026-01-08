/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:30:04 by skomatsu          #+#    #+#             */
/*   Updated: 2026/01/08 15:30:05 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "Cat : default constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat : Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat : Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
    }
    return *this;
}

Cat::~Cat(void)
{
    std::cout << "Cat : Destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Nyaan!" << std::endl;
}
