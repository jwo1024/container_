
#include	<memory>
#include	<string>

#include	"vector.hpp"


/* ------ basic things ------ */

template <class T, class Allocator>
vector<T, Allocator>::vector()
{
	Allocator	alloc;
	this->size = 0;
	this->capacity = 0; // capacity
	this->container = alloc.allocate(this->capacity); // pointer allocate( size_type n, const void * hint = 0 );

}

template <class T, class Allocator>
vector<T, Allocator>::vector(const Allocator& alloc) //explicit
{
	this->size = 0;
	this->capacity = 0;
	this->container = alloc.allocate(this->capacity);
}

template <class T, class Allocator>
vector<T, Allocator>::vector(size_type count, const T& value, Allocator& alloc)
{
	this->size = count;
	this->capacity = count * 2; // capacity
	this->container = alloc.allocate(this->capacity);
	for (int i = 0; i < count; i++)
		this->container[i] = value[i];
}

template <class T, class Allocator>
template< class InputIt > // ?
vector<T, Allocator>::vector(InputIt first, InputIt last, const Allocator& alloc)
{
	this->size = (last - first) / sizeof(InputIt); // 맞나
	this->capacity = this->size;
	this->container = alloc.allocate(this->capacity);
	for (int i = 0; i < this->size; i++)
		this->container[i] = first[i]; // ?
}
// if integer type.
//vector(static_cast<size_type>(first), static_cast<value_type>(last), a)

template <class T, class Allocator>
vector<T, Allocator>::vector(const vector& other)
{
//	*this = other;
}


template <class T, class Allocator>
vector<T, Allocator>::~vector()
{
	Allocator	alloc;

	// std::for_each();
	//

//	for (auto p = this->container[size]; p != this->container;)
	for (int i = 0; i < this->size; i++)
		alloc.destroy(this->container[i]);
//	alloc::destroy(this->container);
	alloc.deallocate(this->container, this->capacity);
}


template <class T, class Allocator>
vector<T, Allocator>&	vector<T, Allocator>::operator=(const vector& other)
{
	if (this->capacity < other.capacity)
	{
		// 재할당
	}
	
	// 기존 저장목록 destroy

	this->size = other->size;
	for(int i = 0; i < this->size; i++)
		this->container[i] = other->container[i];

	// 할당하고 저장시 끝에 처리는 어떻게 해야하나요 초기화? 접근금지? 
}

template <class T, class Allocator>
void	vector<T, Allocator>::assign(size_type count, const T& value)
{
	// 기존 저장 목록 destroy
	// 옮겨 저장 
}

template <class T, class Allocator>
template< class InputIt >
void vector<T, Allocator>::assign(InputIt first, InputIt last)
{
	;
}




/* ------ element access ------ */

template <class T, class Allocator>
T&	vector<T, Allocator>::at(size_type pos)
{
	//if (pos < this->size())
	if (pos < this->size)
		throw (std::out_of_range());
	return (this->container[pos]); // this->__begin[pos];
}

template <class T, class Allocator>
const T&	vector<T, Allocator>::at(size_type pos) const
{
	//if (pos < this->size())
	if (pos < this->size)
		throw (std::out_of_range());
	return (this->container[pos]); // ?
}

template <class T, class Allocator>
T&	vector<T, Allocator>::operator[](size_type pos)
{
	return (this->at(pos));
}

template <class T, class Allocator>
const T&	vector<T, Allocator>::operator[](size_type pos) const
{
	return (this->at(pos));
}

template <class T, class Allocator>
T&	vector<T, Allocator>::front()
{
	return (this->at(0));
}

template <class T, class Allocator>
const T&	vector<T, Allocator>::front() const
{
	return (this->at(0));
}

template <class T, class Allocator>
T&	vector<T, Allocator>::back()
{
	return (this->at(this->size - 1));
}

template <class T, class Allocator>
const T&	vector<T, Allocator>::back() const
{
	return (this->at(this->size - 1));
}


template <class T, class Allocator>
T&	vector<T, Allocator>::back()
{
	return (this->at(this->size - 1));
}

template <class T, class Allocator>
const T&	vector<T, Allocator>::back() const
{
	return (this->at(this->size - 1));
}

// data If size() is ​0​, data() may or may not return a null pointer.
template <class T, class Allocator>
T*	vector<T, Allocator>::data()
{
	return (&this->at(0));
}

template <class T, class Allocator>
const T*	vector<T, Allocator>::data() const
{
	return (&this->at(0));
}


/* ------ iterators ------ */
template <class T, class Allocator>
vector<T, Allocator>::iterator	vector<T, Allocator>::begin()
{
	;
}

template <class T, class Allocator>
vector<T, Allocator>::const_iterator	vector<T, Allocator>::begin() const
{
	;
}

template <class T, class Allocator>
vector<T, Allocator>::iterator	vector<T, Allocator>::end()
{
	;
}

template <class T, class Allocator>
vector<T, Allocator>::const_iterator	vector<T, Allocator>::end() const
{
	;
}

template <class T, class Allocator>
vector<T, Allocator>::reverse_iterator	vector<T, Allocator>::rbegin()
{
	;
}

template <class T, class Allocator>
vector<T, Allocator>::const_reverse_iterator	vector<T, Allocator>::rbegin() const
{
	;
}

template <class T, class Allocator>
vector<T, Allocator>::reverse_iterator	vector<T, Allocator>::rend()
{
	;
}

template <class T, class Allocator>
vector<T, Allocator>::const_reverse_iterator	vector<T, Allocator>::rend() const
{
	;
}






/* ------ capacity ------ */
template <class T, class Allocator>
bool	vector<T, Allocator>::empty() const
{
	if (this->begin() == this->end())
		return true;
	else
		return false;
}

template <class T, class Allocator>
vector<T, Allocator>::size_type	vector<T, Allocator>::size() const
{
	;

}

template <class T, class Allocator>
vector<T, Allocator>::size_type	vector<T, Allocator>::max_size() const
{
	;
}

template <class T, class Allocator>
void	vector<T, Allocator>::reserve(vector<T, Allocator>::size_type new_cap)
{
	;
}

template <class T, class Allocator>
vector<T, Allocator>::size_type	vector<T, Allocator>::capacity() const
{
	;
}





/* ------ modifiers ------ */






