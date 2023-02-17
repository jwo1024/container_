
#ifndef FT_VECTOR_HPP
# define FT_VECTOR_HPP
# include	<memory>
#include	<string>

template <
	class T,
	class Allocator = std::allocator<T>
> class vector{
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
