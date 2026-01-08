/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:30:04 by skomatsu          #+#    #+#             */
/*   Updated: 2026/01/08 16:59:54 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "Cat : default constructor called" << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat : Copy constructor called" << std::endl;
    this->_brain = new Brain(*other._brain);
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat : Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        delete this->_brain;
        this->_brain = new Brain(*other._brain);
    }
    return *this;
}

Cat::~Cat(void)
{
    std::cout << "Cat : Destructor called" << std::endl;
    delete this->_brain;
}

void Cat::makeSound(void) const
{
    std::cout << "Nyaan!" << std::endl;
}

Brain* Cat::getBrain() const
{
    return this->_brain;
}

void Cat::setIdea(int index, const std::string& idea)
{
    if (this->_brain)
        this->_brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
    if (this->_brain)
        return this->_brain->getIdea(index);
    return "";
}
