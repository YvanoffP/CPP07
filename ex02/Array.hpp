#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>

template<typename T>
class Array
{
public:
    Array<T>( void ): _size(0), _array(NULL)
    {
        std::cout << "Empty constructor called" << std::endl;
    }
    Array<T>( const unsigned int size ): _size(size), _array(new T[size])
    {
        std::cout << "Size constructor called" << std::endl;
    }
    Array<T>( const Array<T> &src ): _array(NULL)
    {
        *this = src;
        std::cout << "Copy constructor called" << std::endl;
    }
    ~Array<T>( void )
    {
        std::cout << "Destructor called" << std::endl;
        if (this->_size > 0)
            delete [] this->_array;
    }
    // OP
    Array<T> &operator=( const Array<T> &rhs )
    {
        std::cout << "Assignation operator called" << std::endl;
        if (this == &rhs)
            return *this;
        if (this->_size > 0)
            delete [] this->_array;
        this->_size = rhs.getSize();
        this->_array = new T[this->_size];
        for (int i = 0; i < this->_size; i++)
            this->_array[i] = rhs[i];
        return *this;
    }
    T &operator[]( const int index ) const
    {
        if (index >= this->_size)
            throw std::overflow_error("Index out of bounds");
        return (this->_array[index]);
    }
    // GETTER
    int getSize( void ) const
    {
        return this->_size;
    }

private:

    int _size;
    T   *_array;
};

#endif
