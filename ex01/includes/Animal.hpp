/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:30:22 by skomatsu          #+#    #+#             */
/*   Updated: 2026/01/08 15:30:58 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string _type;
    
    public:
        Animal();
        Animal(const std::string& type);
        Animal(const Animal& other);
        Animal &operator=(const Animal& other);
        virtual ~Animal();

        std::string getType(void) const;
        virtual void makeSound(void) const;
};

#endif
