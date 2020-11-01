#include "stack.h"
#include <vector>

template <typename T>
cs273::stack<T>::stack()
{ //empty constructor
}

template <typename T>
cs273::stack<T>::~stack()
{ //destructor
    container.clear();
}

template <typename T>
void cs273::stack<T>::push(const T &element)
{ //add element to container
    container.push_back(element);
}

template <typename T>
T &cs273::stack<T>::top()
{ //return value of top element
    return container.back();
}

template <typename T>
void cs273::stack<T>::pop()
{ //remove top element from container
    container.pop_back();
}

template <typename T>
int cs273::stack<T>::size()
{ //return the number of elements in the container
    return container.size();
}

template <typename T>
bool cs273::stack<T>::empty()
{ //return true if container is empty
    return (container.size() == 0);
}

template <typename T>
cs273::stack<T> &cs273::stack<T>::operator=(const stack<T> &v)
{ //overload the = operator
    if (this != &v)
    {
        container.clear();

        for (int i = 0; i < v.size(); i++)
        {
            container[i] = v.container[i];
        }
    }
    return *this;
}