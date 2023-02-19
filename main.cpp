//#include	"./vector/vector.hpp"


#include	<vector>
#include	<iostream>
using namespace std;


int	main(void)
{
	vector<int> *vect;

	vect = new vector<int>();

	vect->max_size();
//	std::cout << vect->size() << " " << vect->capacity() << std::endl;

	//vector<int>::iterator;

/*
	vect->push_back(1);
	vect->push_back(2);
	vect->push_back(3);
	vect->push_back(1);
	vect->push_back(2);
	vect->push_back(3);
	vect->push_back(1);
	vect->push_back(2);
	vect->push_back(3);
	vect->push_back(3);

	std::cout << vect->size() << " " << vect->capacity() << std::endl;

	vector<int> *cpy = new vector<int>;
	cpy->push_back(1);
	cpy->push_back(2);
	cpy->push_back(3);
	cpy->push_back(1);
	cpy->push_back(2);
	cpy->push_back(3);
	cpy->push_back(1);
	cpy->push_back(2);
	cpy->push_back(3);
	cpy->push_back(1);
	cpy->push_back(2);
	cpy->push_back(3);
	cpy->push_back(3);

	std::cout << "a" << cpy->size() << " " << cpy->capacity() << std::endl;

	cpy->assign(vect->begin(), vect->end());

//	*cpy = *vect;
	std::cout << "a" << cpy->size() << " " << cpy->capacity() << std::endl;
*/



	return (0);
}