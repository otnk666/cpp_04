/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:51:23 by skomatsu          #+#    #+#             */
/*   Updated: 2026/01/08 16:51:34 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain : default constructor called" << std::endl;
}

Brain::Brain(const std::string& name)
{
    std::cout << "Brain : " << name << " constructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain : Copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = other.ideas[i];
    }
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Brain : Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
        {
            this->ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain : Destructor called" << std::endl;
}

std::string Brain::getIdea(int index) const
{
    if (index < 0 || index >= 100)
        return "";
    return this->ideas[index];
}

void Brain::setIdea(int index, const std::string& idea)
{
    if (index < 0 || index >= 100)
        return;
    this->ideas[index] = idea;
}
