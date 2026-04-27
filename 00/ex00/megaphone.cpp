#include <iostream>

static int	_handle_params( int argc ) ;
static void	_print_str_uppercase( char *str ) ;

int	main( int argc, char **argv )
{
	int	i;

	if ( _handle_params( argc ) == 1 )
		return ( 0 );
	i = 1;
	while ( i < argc ) {
		_print_str_uppercase( argv[ i ] );
		i++;
	}
	std::cout << std::endl;
	return (0);
}

static int	_handle_params( int argc ) {
	if ( argc == 1 ) { 
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return ( 1 );
	}
	return ( 0 );
}

static void	_print_char_uppercase( char c ) {
	if ( c >= 'a' && c <= 'z' )
		c = c - 32;
	std::cout << c;
}

static void	_print_str_uppercase( char *str ) {
	int	i = 0;
	
	while ( str[ i ] ) {
		_print_char_uppercase( str[ i ] );
		i++;
	}
}
