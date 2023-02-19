
#ifndef FT_VECTOR_HPP
# define FT_VECTOR_HPP
# include	<memory>

# include	<iterator>

template <
	class T,
	class Allocator = std::allocator<T>
> class vector {
public:
	typedef	T										value_type;
	typedef	Allocator								allocator_type;
	typedef	std::size_t								size_type;
//protected:
	typedef	std::ptrdiff_t							difference_type;
	typedef value_type&								reference;
	typedef	const value_type&						const_reference;
	typedef typename allocator_type::pointer		pointer;
	typedef	typename allocator_type::const_pointer	const_pointer;
	typedef std::__wrap_iter<value_type>			iterator; // ft::iterator..?
	typedef std::__wrap_iter<const value_type>		const_iterator;
//iterator	LegacyRandomAccessIterator and LegacyContiguousIterator to value_type(until C++20)
//const_iterator	LegacyRandomAccessIterator and LegacyContiguousIterator to const value_type(until C++20)
	typedef	std::reverse_iterator<iterator>			reverse_iterator;
	typedef std::reverse_iterator<const_iterator>	const_reverse_iterator;


protected:
	T		*container; // x
	size_t	size;
	size_t	capacity;

	pointer										__begin;
	pointer										__end;
// iterator ?
//	pointer       								  __begin_;
//     pointer                                         __end_;
//     __compressed_pair<pointer, allocator_type> __end_cap_;

public:
// ======= basic things
	vector();
	explicit vector(const Allocator& alloc);
	explicit vector(size_type count, const T& value = T(), Allocator& alloc = Allocator());
	template< class InputIt >
	vector(InputIt first, InputIt last, const Allocator& alloc = Allocator());
	vector(const vector& other);
	~vector();

	vector&		operator=(const vector& other);
	void		assign(size_type count, const T& value);
	template< class InputIt >
	void		assign(InputIt first, InputIt last);

// ======= element access
	T&				at(size_type pos);
	const T&		at(size_type pos) const;
	T&				operator[](size_type pos);
	const T&		operator[](size_type pos) const;
	T&				front();
	const T&		front() const;
	T&				back();
	const T&		back() const;
	T*				data();
	const T*		data() const;

// ======= iterators
	iterator				begin();
	const_iterator			begin() const;
	iterator				end();
	const_iterator			end() const;
	reverse_iterator		rbegin();
	const_reverse_iterator	rbegin() const;
	reverse_iterator		rend();
	const_reverse_iterator	rend() const;

// ======= capacity
	bool		empty() const;
	size_type	size() const;
	size_type	max_size() const;
	void		reserve(size_type new_cap);
	size_type	capacity() const;

// ======= modifiers
	void		clear();
	iterator	insert(const_iterator pos, const T& value);
	iterator	insert(const_iterator pos, size_type count, const T& value);
	template<class InputIt>
	iterator	insert(const_iterator pos, InputIt first, InputIt last);
	iterator	erase(iterator pos);
	iterator	erase(iterator first, iterator last);
	void		push_back(const T& value);
	void		pop_back();
	void		resize(size_type count, T value = T());
	void		swap(vector& other);
};

// ======= non-member functions
template<class T, class Alloc>
bool	operator==(const std::vector<T, Alloc>& lhs, const std::vector<T, Alloc>& rhs);
template<class T, class Alloc>
bool	operator!=(const std::vector<T, Alloc>& lhs, const std::vector<T, Alloc>& rhs);
template<class T, class Alloc>
bool	operator<(const std::vector<T, Alloc>& lhs, const std::vector<T, Alloc>& rhs);
template<class T, class Alloc>
bool	operator<=(const std::vector<T, Alloc>& lhs, const std::vector<T, Alloc>& rhs);
template<class T, class Alloc>
bool	operator>(const std::vector<T, Alloc>& lhs, const std::vector<T, Alloc>& rhs);
template<class T, class Alloc>
bool	operator>=(const std::vector<T, Alloc>& lhs, const std::vector<T, Alloc>& rhs);
template<class T, class Alloc>
void	swap(std::vector<T, Alloc>& lhs, std::vector<T, Alloc>& rhs);


# include "vector.tpp"

#endif
