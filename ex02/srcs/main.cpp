/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:29:58 by skomatsu          #+#    #+#             */
/*   Updated: 2026/01/08 20:03:18 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// This should cause a compile error because Animal is abstract
	// Animal a;

	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;
		delete i;
	}
	std::cout << "=== 1. Array Test ===" << std::endl;
	const int count = 4;
	const Animal* animals[count];

	for (int i = 0; i < count; i++)
	{
		if (i < count / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int i = 0; i < count; i++)
		animals[i]->makeSound();

	for (int i = 0; i < count; i++)
		delete animals[i];

	std::cout << "\n=== 2. Deep Copy Test ===" << std::endl;

	Dog basic;
	basic.setIdea(0, "Original idea");
	{
		Dog tmp = basic;
		tmp.setIdea(0, "Tmp idea");
		std::cout << "basic idea[0]: " << basic.getIdea(0) << std::endl;
		std::cout << "tmp idea[0]: " << tmp.getIdea(0) << std::endl;
		std::cout << "basic Brain address: " << basic.getBrain() << std::endl;
		std::cout << "tmp Brain address: " << tmp.getBrain() << std::endl;
	} 

	std::cout << "End of main (basic will be destroyed here)" << std::endl;

	return 0;
}
