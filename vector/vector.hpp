
#ifndef FT_VECTOR_HPP
# define FT_VECTOR_HPP
# include	<memory>
#include	<string>

template <
	class T,
	class Allocator = std::allocator<T>
> class vector{

typedef	T value_type;
typedef	Allocator allocator_type;
typedef	std::size_t size_type;
typedef	std::ptrdiff_t difference_type;
typedef	const value_type& const_reference;
typedef Allocator::pointer pointer;
typedef	Allocator::const_pointer const_pointer;
//iterator	LegacyRandomAccessIterator and LegacyContiguousIterator to value_type(until C++20)
//const_iterator	LegacyRandomAccessIterator and LegacyContiguousIterator to const value_type(until C++20)
typedef	std::reverse_iterator<iterator> reverse_iterator;
typedef std::reverse_iterator<const_iterator> const_reverse_iterator;

private:	
	T		*container;
	size_t	size;
	size_t	capacity;
// iterator ?

public:
/* constructor */
	vector();
	explicit vector(const Allocator& alloc);
	explicit vector(std::string::size_type count, const T& value = T(), Allocator& alloc = Allocator());
	template< class InputIt >
	vector(InputIt first, InputIt last, const Allocator& alloc = Allocator());
	vector(const vector& other);
/* destructor */


};

# include "vector.tpp"

#endif
