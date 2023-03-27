/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 02:13:26 by eryilmaz          #+#    #+#             */
/*   Updated: 2023/03/28 02:13:27 by eryilmaz         ###   ########.tr	      */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"

class DiamondTrap : public ClapTrap , public ScavTrap , public FragTrap
{
private:
	std::string _name;

public:
	DiamondTrap(std::string name);
	~DiamondTrap(void);
	void whoAmI(void);
};

#endif
