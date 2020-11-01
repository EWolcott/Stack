//Project by Ethan Wolcott
//6/16/2020
//This class recreates the std stack class, allowing for memory allocation
//of chosen variable and object containers. The class then allows access to
//that container from the last item placed within, last in first out.

#ifndef STACK_H
#define STACK_H
#include <vector>
#include <list>

namespace cs273
{

    //template class allows for broader use
    template <typename T>
    class stack
    {

    private:
        //create a container.
        //This is where you can add and amend code to allow for varying types of containers
        std::vector<T> container;

        //simply comment out the vector and un-comment the list to switch containers
        // std::list<T> container;

    public:
        stack();                                //simple consrtuctor
        ~stack();                               //destructor
        stack<T> &operator=(const stack<T> &v); //overloaded = operator for comparing stacks
        int size();                             //return the size of elements in the container
        void push(const T &element);            //add an element to the container
        void pop();                             //remove top element from the container
        T &top();                               //return the top element of the container
        bool empty();                           //return true if container is empty
    };
} // namespace cs273

#include "stack.cpp"

#endif