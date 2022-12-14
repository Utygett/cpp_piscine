/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utygett <utygett@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:13:04 by utygett           #+#    #+#             */
/*   Updated: 2022/01/29 16:20:08 by utygett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
private:
	std :: string ideas[100];
public:
	Brain( void );
	virtual ~Brain( void );
	Brain( const Brain & for_copy );
	Brain & operator = ( const Brain & for_assign);
};

#endif