#include "Iter.hpp"


int main( void )
{
    const int tab[10] = {1, 2, 3, 5, 6, 7, 8, 9, 10, 11};

    iter<int>(tab, 10, print);
    iter<int>(tab, 15, print);
    return (0);
}
