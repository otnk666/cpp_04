/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:49:58 by skomatsu          #+#    #+#             */
/*   Updated: 2026/01/08 16:55:09 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
    private:
        std::string ideas[100];

    public:
        Brain();
        Brain(const std::string& name);
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        ~Brain();

        std::string getIdea(int index) const;
        void setIdea(int index, const std::string& idea);
};

#endif
