#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
/*-----------color------------------*/
# define BLACK		"\033[0;30m"
# define RED		"\033[0;31m"
# define GREEN		"\033[0;32m"
# define YELLOW		"\033[0;33m"
# define BLUE		"\033[0;34m"
# define PURPLE		"\033[0;35m"
# define CYAN		"\033[0;36m"
# define WHITE		"\033[0;37m"
# define END		"\033[m"
# define RESET		"\033[0m"
/*----------------------------------*/
# include <iostream>
# include <stack>

template < typename T >
class MutantStack : public std::stack<T>
{

public:

	MutantStack( void );
	MutantStack( const MutantStack &ref );
	~MutantStack( void );
	MutantStack &operator=( const MutantStack &ref );

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

	iterator begin( void );
	iterator end( void );

	reverse_iterator rbegin( void );
	reverse_iterator rend( void );

};
#include "../src/MutantStack.tpp"
#endif
