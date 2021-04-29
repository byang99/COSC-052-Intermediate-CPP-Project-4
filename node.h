#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <exception>
#include <stdexcept>
#include <string>
using namespace std;

template <typename T>
class Node 
{
    private:
        T object;
        Node<T>* nextPtr;
        Node<T>* prevPtr;;
        
    public:
        Node (T = T(), Node<T>* nextPtr = NULL, Node<T>* prevPtr = NULL);
        void setObject(const T& object);
        T& getObject();
        void setNextPtr(Node<T>* nextPtr);
        Node<T>* getNextPtr() const;
        void setPrevPtr(Node<T>* prevPtr);
        Node<T>* getPrevPtr() const;
}; // END DLNode<T> class declaration


template <typename T>
Node<T>:: Node (T object, Node<T>* nextPtr, Node<T>* prevPtr)
{
    this->object = object;
    this->nextPtr = nextPtr;
    this->prevPtr = prevPtr;
} // Node<T>::Node

template <typename T>
void Node<T>::setObject( const T& object )
{
    this->object = object;
} // Node<T>::setObject

template <typename T>
T& Node<T>::getObject()
{
    return object;
} // Node<T>::getObject

template <typename T>
void Node<T>::setNextPtr( Node<T>* nextPtr )
{
    this->nextPtr = nextPtr;
} // Node<T>::setNextPtr

template <typename T>
Node<T>* Node<T>::getNextPtr() const
{
    return nextPtr;
} // Node<T>::getNextPtr

template <typename T>
void Node<T>::setPrevPtr(Node<T>* prevPtr)
{
    this->prevPtr = prevPtr;
}

template <typename T>
Node<T>* Node<T>::getPrevPtr() const
{
    return prevPtr;
}
#endif /* NODE_H */