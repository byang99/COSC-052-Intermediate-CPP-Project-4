#ifndef ITERATOR_H
#define ITERATOR_H

#include <iostream>
#include <exception>
#include <stdexcept>
#include <string>
#include "nosuchobject.h"
#include "node.h"
using namespace std;

template <typename> class List; // required forward declaration

template <typename T>
class ListIterator
{
    friend class List<T>;

    private:
        Node<T>* current;
        bool movingForward;
        bool movingBackward;
        
    public:
        ListIterator();
        bool hasNext() const;
        bool hasPrevious() const;
        T& next() throw ( NoSuchObject );
        T& previous() throw ( NoSuchObject );
        void set( const T& ) const throw ( NoSuchObject );
        void printInternal() const;

    

}; // ListIterator class

//BEGIN MEMBER IMPLEMENTATION

/****************************************************************************
 *                           default constructor                            *
 ****************************************************************************/
template <typename T>
ListIterator<T>:: ListIterator()
{
    current = NULL;
    movingForward = true;
    movingBackward = true;
}

/****************************************************************************
 *                            hasNext Function                              *
 ****************************************************************************/ 
template <typename T>
bool ListIterator<T>:: hasNext() const
{
    
    bool hasNext = true;
    //if list is empty
    if((current == current->getNextPtr() && 
        current->getPrevPtr() == current->getPrevPtr()->getPrevPtr()) || 
       (current == current->getPrevPtr() && 
        current->getNextPtr() == current->getNextPtr()->getNextPtr()))
    {
        hasNext = false;
    }
    //if current points to back sentinel node, hasNext is false
    else if(current->getNextPtr() == current )
    {
        hasNext = false;
    }
    
    //if current is at last element of the list and movingForward is true, hasNext is false
    else if(current->getNextPtr() == current->getNextPtr()->getNextPtr() && movingForward )
    {
        hasNext = false;
    }
    
    //if current is at last element of the list and movingFoward is false (moving backward),
    //hasNext is true
    else if(current->getNextPtr() == current->getNextPtr()->getNextPtr() && !movingForward )
    {
        hasNext = true;
    }
    
    //if current is not at end of the list, hasNext is true
    else if(current->getNextPtr() != current->getNextPtr()->getNextPtr())
    {
        hasNext = true;
    }
    else if(current->getNextPtr() == current->getNextPtr()->getNextPtr() && movingBackward )
    {
        hasNext = true;
    }
    else if(current->getNextPtr() == current->getNextPtr()->getNextPtr() && !movingBackward )
    {
        hasNext = false;
    }
    

    
    return hasNext;
}

/****************************************************************************
 *                          hasPrevious Function                            *
 ****************************************************************************/
template <typename T>
bool ListIterator<T>:: hasPrevious() const
{
    bool hasPrevious = true;
    
    //if list is empty
    if((current == current->getNextPtr() && 
        current->getPrevPtr() == current->getPrevPtr()->getPrevPtr()) || 
       (current == current->getPrevPtr() && 
        current->getNextPtr() == current->getNextPtr()->getNextPtr()))
    {
        hasPrevious = false;
    }
    
    //if current is at the front sentinel node
    else if(current->getPrevPtr() == current )
    {
        hasPrevious = false;
    }
    
    //if current is at front of the list and movingBackward is true, then hasPrevious is false
    else if(current->getPrevPtr() == current->getPrevPtr()->getPrevPtr() && movingBackward)
    {
        hasPrevious = false;
    }
    
    //if current is at the front of the list and movingBackward is false (movingForward is true),
    //hasPrevious is true
    else if(current->getPrevPtr() == current->getPrevPtr()->getPrevPtr() && !movingBackward)
    {
        hasPrevious = true;
    }
    
    //if current is not at the front of the list
    else if(current->getPrevPtr() != current->getPrevPtr()->getPrevPtr())
    {
        hasPrevious = true;
    }
    else if(current->getPrevPtr() == current->getPrevPtr()->getPrevPtr() && !movingForward)
    {
        hasPrevious = false;
    }
    
    //if current is at the front of the list and movingBackward is false (movingForward is true),
    //hasPrevious is true
    else if(current->getPrevPtr() == current->getPrevPtr()->getPrevPtr() && movingForward)
    {
        hasPrevious = true;
    }
    
    return hasPrevious;
}

/****************************************************************************
 *                              next Function                               *
 ****************************************************************************/
template <typename T>
T& ListIterator<T>:: next() throw ( NoSuchObject )
{
    if(!hasNext())
    {
        throw NoSuchObject("No such object. No next object");
    }
    
    if(movingForward)
    {
        current = current->getNextPtr();
    }
    else if (movingBackward)
    {
        movingBackward = false;
        movingForward = true;
    }
    
    return current->getObject();
}

/****************************************************************************
 *                            previous Function                             *
 ****************************************************************************/
template <typename T>
T& ListIterator<T>:: previous() throw ( NoSuchObject )
{
    if(!(hasPrevious()))
    {
        throw NoSuchObject("No such object. No previous object");
    }
    if(movingBackward)
    {
        current = current->getPrevPtr();
    }
    else if(movingForward)
    {
        movingForward = false;
        movingBackward = true;
    }
    
    return current->getObject();
}

/****************************************************************************
 *                             set Function                                 *
 ****************************************************************************/

template <typename T>
void ListIterator<T>:: set( const T& object ) const throw ( NoSuchObject )
{
    if(current = current->getNextPtr() || current = current->getPrevPtr())
    {
        throw NoSuchObject("No such object. Cannot set.");
    }
    
    this->current->setObject(object); 
}

/****************************************************************************
 *                         printInternal Function                           *
 ****************************************************************************/
template <typename T>
void ListIterator<T>:: printInternal() const
{
    int i = 0;
    //cout << "Top: " << topPtr << endl;
    //cout << "PRINTING" << endl;
    while ( current != NULL ) 
    {
        cout << "Node: " << i << endl;
        //cout << "Address: " << current << endl;
        cout << "Object: " << current->getObject() << endl;
        //cout << "Previous: ";
        //(hasPrevious)? cout << previous() << endl : cout << "Does not exist." << endl;
        //cout << "Next: ";
        //(hasNext)? cout << next() << endl : cout << "Does not exist." << endl;   
        current = current->getNextPtr();
        i++;
    } // END while loop    
}

#endif /* ITERATOR_H */