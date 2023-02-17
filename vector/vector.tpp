
#include	<memory>
#include	<string>

#include	"vector.hpp"


/* constructor */

template <class T, class Allocator>
vector<T, Allocator>::vector()
{
	Allocator	alloc;
	this->size = 0;
	this->capacity = 0; // capacity
	this->container = alloc.allocate(this->capacity);

}

template <class T, class Allocator>
vector<T, Allocator>::vector(const Allocator& alloc) //explicit
{
	this->size = 0;
	this->capacity = 0;
	this->container = alloc.allocate(this->capacity);
}

template <class T, class Allocator>
vector<T, Allocator>::vector(std::string::size_type count, const T& value, Allocator& alloc)
{
	this->size = count;
	this->capacity = count * 2; // capacity
	this->container = alloc.allocate(this->capacity);
	
//	for (int i = 0; i < ; i++)
//	{
//		;
//	}

}

template <class T, class Allocator>
template< class InputIt > // ?
vector<T, Allocator>::vector(InputIt first, InputIt last, const Allocator& alloc)
{
	;
}

template <class T, class Allocator>
vector<T, Allocator>::vector(const vector& other)
{
	;
}


/* destructor */
