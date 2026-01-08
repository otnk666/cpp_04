/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:29:58 by skomatsu          #+#    #+#             */
/*   Updated: 2026/01/08 15:34:52 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{   
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* w_cat = new WrongCat();
    std::cout << wrong->getType() << " " << std::endl;
    std::cout << w_cat->getType() << " " << std::endl;
    wrong->makeSound();
    w_cat->makeSound();
    // w_cat->makeSound(); should print "Some generic WrongAnimal sound" (wrong!)

    delete wrong;
    delete w_cat;
    //should not print "WrongCat: Destructor called" because not using virtual of destructor
    return 0;
}
