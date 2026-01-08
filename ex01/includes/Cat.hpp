/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 23:18:57 by skomatsu          #+#    #+#             */
/*   Updated: 2026/01/08 16:24:00 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain* _brain;
    public:
        Cat();
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        virtual ~Cat();

        virtual void makeSound(void) const;
        Brain* getBrain() const;
        void setIdea(int index, const std::string& idea);
        std::string getIdea(int index) const;
};

#endif
