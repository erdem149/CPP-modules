#ifndef SPAN_HPP
# define SPAN_HPP
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
# include <list>

class Span
{
	private:
		unsigned int _n;
		std::list<int> _list;
	public:
	Span( void );
	Span( unsigned int N );
	Span( const Span &ref );
	~Span( void );

	Span	&operator=( const Span &ref );

	void	addNumber( unsigned int N );
	void	addNumber( std::list<int>::const_iterator begin, std::list<int>::const_iterator end );
	int		shortestSpan( void );
	int		longestSpan( void );

	const std::list<int>*	getList( void ) const;
	int						getSize( void );
	int						getMax( void );
	int						getMin( void );

	class OutOfBoundsException : public std::exception{
		public:
			virtual const char *what() const throw();
	};

	class ArrayIsFull : public std::exception{
		public:
			virtual const char *what() const throw();
	};
};

std::ostream &operator<<( std::ostream &os, const Span &obj );

#endif
