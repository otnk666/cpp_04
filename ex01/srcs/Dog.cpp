/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 23:05:45 by skomatsu          #+#    #+#             */
/*   Updated: 2026/01/08 17:01:03 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog : default constructor called" << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog : Copy constructor called" << std::endl;
    this->_brain = new Brain(*other._brain);
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog : Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        delete this->_brain;
        this->_brain = new Brain(*other._brain);
    }
    return *this;
}

Dog::~Dog(void)
{
    std::cout << "Dog : Destructor called" << std::endl;
    delete this->_brain;
}

void Dog::makeSound(void) const
{
    std::cout << "Wanwan!" << std::endl;
}

Brain* Dog::getBrain() const
{
    return this->_brain;
}

void Dog::setIdea(int index, const std::string& idea)
{
    if (this->_brain)
        this->_brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
    if (this->_brain)
        return this->_brain->getIdea(index);
    return "";
}
