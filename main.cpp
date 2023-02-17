//#include	"./vector/vector.hpp"

#include	<vector>
#include	<iostream>

int	main(void)
{
	std::vector<int> *vect;

	vect = new std::vector<int>();

	std::cout << vect->size() << " " << vect->capacity() << std::endl;


	vect->push_back(1);
	vect->push_back(2);
	vect->push_back(3);
	vect->push_back(1);
	vect->push_back(2);
	vect->push_back(3);
	vect->push_back(1);
	vect->push_back(2);
	vect->push_back(3);

	std::cout << vect->size() << " " << vect->capacity() << std::endl;

	return (0);
}