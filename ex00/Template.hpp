#ifndef TEMPLATE_H
# define TEMPLATE_H

template <class T>
void swap(T &a, T &b)
{
    T temp = a;

    a = b;
    b = temp;
}

template <class T>
T min(T a, T b)
{
    if (b <= a)
        return (b);
    return (a);
}

template <class T>
T max(T a, T b)
{
    if (b >= a)
        return (b);
    return (a);
}

#endif
