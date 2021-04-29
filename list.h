#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <exception>
#include <stdexcept>
#include <string>
#include "nosuchobject.h"
#include "node.h"
#include "iterator.h"
using namespace std;

template <typename T>
class List;

template <typename T>
ostream &operator<<( ostream &, const List<T> & );

template <typename T>
class List
{
    friend ostream &operator<< <>( ostream&, const List<T>& );
    
    private:
        Node<T>* frontPtr;
        Node<T>* backPtr;
        unsigned sz;

        void add( Node<T>*, const T& ) throw ( bad_alloc );
        void initialize();
        Node<T>* getIthNode( unsigned ) const throw ( out_of_range );
        T remove( Node<T>* );
        
        
    public:
        List();
        List( const List<T>& ) throw ( bad_alloc );
        ~List();
        void add( unsigned, const T& ) throw ( bad_alloc, out_of_range );
        void addAll( const List<T>& ) throw ( bad_alloc );
        void addAll( unsigned, const List<T>& ) throw ( bad_alloc, out_of_range );
        void addFirst( const T& ) throw ( bad_alloc );
        void addLast( const T& ) throw ( bad_alloc );
        void clear();
        bool contains( const T& ) const;
        bool empty() const;
        int indexOf( const T& ) const;
        T& get( unsigned ) const throw ( out_of_range );
        T& getFirst() const throw ( NoSuchObject );
        T& getLast() const throw ( NoSuchObject );
        ListIterator<T> listIterator();
        ListIterator<T> listIterator( unsigned ) throw ( out_of_range );
        T remove( unsigned ) throw ( out_of_range );
        T removeFirst() throw ( NoSuchObject );
        T removeFirstOccurrence( const T& ) throw ( NoSuchObject );
        T removeLast() throw ( NoSuchObject );
        T removeLastOccurrence( const T& ) throw ( NoSuchObject );
        T set( unsigned, const T& ) throw ( out_of_range );
        unsigned size() const;
        T* toArray() const throw ( bad_alloc );
        const List<T>& operator=( const List<T>& ) throw ( bad_alloc );
        void printInternal( ostream& = cout ) const;
}; // END List class declaration


//BEGIN MEMBER IMPLEMENTATION

/****************************************************************************
 **************************************************************************** 
 *                            FRIEND FUNCTIONS                              *
 ****************************************************************************
 ****************************************************************************/


/****************************************************************************
 *                 overloaded stream insertion operator                     *
 ****************************************************************************/
template <typename T>
ostream &operator<<( ostream& out , const List<T>& list )
{
    //out << "inside << operator" << endl;
    //int i = 1;
    Node<T>* current = list.frontPtr->getNextPtr();
    //while loop prints all objects except last object, with comma at the end
    out << "[";
    while( current->getNextPtr() != list.backPtr )
    {
        //out << "inside while loop" << endl;
        //out << i << "\t";
        out << current->getObject() << ",";
        //out << endl;
        current = current->getNextPtr();
        //i++;
    }
    //print the last object, without a comma at the end
    //out << i << "\t";
    out << current->getObject();
    out << "]";
    
    return out;
}

/****************************************************************************
 ****************************************************************************
 *                           PRIVATE FUNCTIONS                              *
 ****************************************************************************
 ****************************************************************************/

/****************************************************************************
 *                              add Function                                *
 ****************************************************************************/
template <typename T>
void List<T>:: add( Node<T>* current, const T& object ) throw ( bad_alloc )
{
    Node<T>* addMe = new Node<T>(object);
    Node<T>* v = current->getPrevPtr();
    Node<T>* w = current;
    addMe->setPrevPtr(v);
    addMe->setNextPtr(w);
    w->setPrevPtr(addMe);
    v->setNextPtr(addMe);
    
    this->sz++;
}


/****************************************************************************
 *                           initialize Function                            *
 ****************************************************************************/
template <typename T>
void List<T>:: initialize()
{
    
    //create sentinel nodes 
    frontPtr = new Node<T>;
    backPtr = new Node<T>;
    
    //set sentinel node relationship
    this->frontPtr->setNextPtr(backPtr);
    this->frontPtr->setPrevPtr(frontPtr);
    this->backPtr->setNextPtr(backPtr);
    this->backPtr->setPrevPtr(frontPtr);
    
    this->sz = 0;
}


/****************************************************************************
 *                           getIthNode Function                            *
 ****************************************************************************/
template <typename T>
Node<T>* List<T>:: getIthNode( unsigned index ) const throw ( out_of_range )
{
    Node<T>* IthNode = NULL;
    if( index < 0 || index > sz )
    {
        throw out_of_range ("Index is out of range. getIthNode cannot continue.");
    }
    
    if(index == sz)
    {
        IthNode = backPtr;
    }
    else
    {
        IthNode = frontPtr->getNextPtr();
    
        //traverse the list until current points to the the element at index "index"
        for(unsigned i = 0; i < index; i++)
        {
            IthNode = IthNode->getNextPtr();
        }
    }
    
    return IthNode;
}

/****************************************************************************
 *                            remove Function                               *
 ****************************************************************************/
template <typename T>
T List<T>:: remove( Node<T>* current )
{
    T object = current->getObject();
    Node<T>* garbage = current;
    Node<T>* v = current->getPrevPtr();
    Node<T>* w = current->getNextPtr();
    v->setNextPtr(w);
    w->setPrevPtr(v);
    delete garbage;
    
    this->sz--;
    return object;
}



/****************************************************************************
 ****************************************************************************
 *                            PUBLIC FUNCTIONS                              *
 ****************************************************************************
 ****************************************************************************/



/****************************************************************************
 *                           default constructor                            *
 ****************************************************************************/
template <typename T>
List<T>:: List()
{
    /*//create sentinel nodes
    frontPtr = new Node<T>;
    backPtr = new Node<T>;*/
    
    //create and set the sentinel node relationship and sz to 0
    this->initialize();
}

/****************************************************************************
 *                           copy constructor                               *
 ****************************************************************************/
template <typename T>
List<T>:: List( const List<T>& otherList ) throw ( bad_alloc )
{
    cout << "inside copy constructor" << endl;
    /*//create sentinel nodes 
    frontPtr = new Node<T>;
    backPtr = new Node<T>;*/
    
    //set sentinel relationship and sz to 0
    this->initialize();     
    
    //call overloaded assignment operator
    *this = otherList;
}

/****************************************************************************
 *                             destructor                                   *
 ****************************************************************************/
template <typename T>
List<T>:: ~List()
{
    this->clear();
}

/****************************************************************************
 *                             add Function                                 *
 ****************************************************************************/
template <typename T>
void List<T>:: add( unsigned index, const T& object ) throw ( bad_alloc, out_of_range )
{
    
    if(index < 0 || index > sz )
    {
        throw out_of_range("Can't add object. Index is out of range");
    }
    else
    {
        //traverse the list until current points to the the element at index "index"
        Node<T>* current = getIthNode( index );

        //call private add function to add the object to the list at index "index"
        this->add(current, object);
    }
}
/****************************************************************************
 *                             addAll Function                              *
 ****************************************************************************/
template <typename T>
void List<T>:: addAll( const List<T>& list) throw ( bad_alloc )
{
    Node<T>* current = list.frontPtr->getNextPtr();
    //if list being copied to is empty, just add the list
    if(empty())
    {
        this->addAll(0,list);
    }
    
    //if list being copied to is not empty, add to end of the list
    else
    {        
        //while list being added from is not empty
        while( current != list.backPtr )
        {
            addLast( current->getObject() );
            current = current->getNextPtr();
        }
    }
}

/****************************************************************************
 *                            addAll Function                               *
 ****************************************************************************/
template <typename T>
void List<T>:: addAll( unsigned index, const List<T>& list ) throw ( bad_alloc, out_of_range )
{
    if( index < 0 || index > sz )
    {
        throw out_of_range("Index is out of range. addAll function can't continue.");
    }
    else
    {
        Node<T>* addMe = list.frontPtr->getNextPtr();
        //traverse to the desired index of the list being added to
        Node<T>* current = getIthNode( index );
        
        //traverse the list being added from
        while( addMe != list.backPtr )
        {
            add(current, addMe->getObject());
            addMe = addMe->getNextPtr();
        }
    }
}

/****************************************************************************
 *                           addFirst Function                              *
 ****************************************************************************/
template <typename T>
void List<T>:: addFirst( const T& object ) throw ( bad_alloc )
{
    add(frontPtr->getNextPtr(), object);
}


/****************************************************************************
 *                           addLast Function                               *
 ****************************************************************************/
template <typename T>
void List<T>:: addLast( const T& object ) throw ( bad_alloc )
{
    add(backPtr, object);
}

/****************************************************************************
 *                             clear Function                               *
 ****************************************************************************/
template <typename T>
void List<T>:: clear()
{
    int i = 0;
    //while list trying to be cleared is not empty
    while( !( empty() ) )
    {
        this->removeFirst();
        //cout << "i: " << i << endl;
        i++;
    }
    cout << "Objects removed: " << i << endl;

    this->initialize(); //set frontPtr and backPtr to sentinel node relationship and sz to 0;
}


/****************************************************************************
 *                             contains Function                            *
 ****************************************************************************/
template <typename T>
bool List<T>:: contains( const T& object ) const
{
    bool contains = false;
    Node<T>* current = frontPtr->getNextPtr();
    while( current != backPtr && !contains )
    {
        if(current->getObject() == object)
        {
            contains = true;
        }
        current = current->getNextPtr();
    }
    
    return contains;
}

/****************************************************************************
 *                             empty Function                               *
 ****************************************************************************/
template <typename T>
bool List<T>:: empty() const
{
    bool isEmpty = false;
    
    if(frontPtr->getNextPtr() == backPtr && backPtr->getPrevPtr() == frontPtr && sz == 0)
    {
        isEmpty = true;
    }

    return isEmpty;
}

/****************************************************************************
 *                            indexOf Function                              *
 ****************************************************************************/
template <typename T>
int List<T>:: indexOf( const T& object ) const
{
    int index = -1;
    bool found = false;
    if(empty())
    {
        //do nothing: index stays -1
    }
    else
    {
        //start at index 0
        int i = 0;
        Node<T>* current = frontPtr->getNextPtr();
        while( current != backPtr && !found )
        {
            if(current->getObject() == object)
            {
                index = i;
                found = true;
            }
            i++;
            current = current->getNextPtr();
        }
    }
    
    return index;
}


/****************************************************************************
 *                               get Function                               *
 ****************************************************************************/
template <typename T>
T& List<T>:: get( unsigned index ) const throw ( out_of_range )
{
    //cout << "inside get(unsigned index) function..." << endl;
    if( index < 0 || index >= sz )
    {
        throw out_of_range("No object to get. Index is out of range.");
    }
    
    Node<T>* current = getIthNode( index );
    //cout << "exiting get(unsigned index) function" << endl;
    
    return current->getObject();
}


/****************************************************************************
 *                            getFirst Function                             *
 ****************************************************************************/
template <typename T>
T& List<T>:: getFirst() const throw ( NoSuchObject )
{
    if(empty())
    {
        throw NoSuchObject("No such object.");
    }

    return frontPtr->getNextPtr()->getObject();
}


/****************************************************************************
 *                             getLast Function                             *
 ****************************************************************************/
template <typename T>
T& List<T>:: getLast() const throw ( NoSuchObject )
{
    if(empty())
    {
        throw NoSuchObject("No such object.");
    }
    
    return backPtr->getPrevPtr()->getObject();
}

/****************************************************************************
 *                          listIterator Function                           *
 ****************************************************************************/
template <typename T>
ListIterator<T> List<T>:: listIterator()
{
    ListIterator<T> ltr;
    ltr.current = frontPtr->getNextPtr();
    ltr.movingForward = false;
    ltr.movingBackward = true;
    
    return ltr;
}

/****************************************************************************
 *                          listIterator Function                           *
 ****************************************************************************/
template <typename T>
ListIterator<T> List<T>:: listIterator( unsigned index ) throw ( out_of_range )
{
    ListIterator<T> ltr;
    
    if( index < 0 || index > sz)
    {
        throw out_of_range("Index is out of range");
    }
    
    //current is set to the address of the object at the index
    ltr.current = getIthNode( index );
    ltr.movingForward = false;
    ltr.movingBackward = true;
    
    return ltr;
}

/****************************************************************************
 *                             remove Function                              *
 ****************************************************************************/
template <typename T>
T List<T>:: remove( unsigned index ) throw ( out_of_range )
{
    T object;
    if(empty())
    {
        throw out_of_range("Nothing to remove. List is empty");
    }
    else if( index < 0 || index >= sz )
    {
        throw out_of_range("Cannot remove object. Index is out of range.");
    }
    else
    {
        Node<T>* current = getIthNode( index );
        object = remove(current);
    }
    
    return object;
}

/****************************************************************************
 *                          removeFirst Function                            *
 ****************************************************************************/
template <typename T>
T List<T>:: removeFirst() throw ( NoSuchObject )
{
    if(empty())
    {
        throw NoSuchObject("No such object. Nothing to remove. List is empty");
    }
    
    //T object = remove(frontPtr->getNextPtr());
    return remove(frontPtr->getNextPtr());
}

/****************************************************************************
 *                      removeFirstOccurrence Function                      *
 ****************************************************************************/
template <typename T>
T List<T>:: removeFirstOccurrence( const T& object ) throw ( NoSuchObject )
{
    T objectRemoved;
    Node<T>* current = frontPtr->getNextPtr();
    if(empty())
    {
        throw NoSuchObject("No such object. Cannot remove first occurrence.");
    }
    else
    {
        //unsigned index = 0;
        bool firstOccurrence = false;
        while(current != backPtr && !firstOccurrence)
        {
            
            if(current->getObject() == object)
            {
                firstOccurrence = true;
            }
            //if(!firstOccurrence)
            else
            {
                //index++;
                current = current->getNextPtr();
            }
        }
        if(!firstOccurrence)
        {
            throw NoSuchObject("No such object exists in the list");
        }
    }
    
    objectRemoved = remove(current);
    return objectRemoved;
}

/****************************************************************************
 *                           removeLast Function                            *
 ****************************************************************************/
template <typename T>
T List<T>:: removeLast() throw ( NoSuchObject )
{
    if(empty())
    {
        throw NoSuchObject("No such object. Nothing to remove. List is empty");
    }
    //call private remove function
    return remove(backPtr->getPrevPtr());
    
}

/****************************************************************************
 *                      removeLastOccurrence Function                       *
 ****************************************************************************/
template <typename T>
T List<T>:: removeLastOccurrence( const T& otherObj ) throw ( NoSuchObject )
{
    //cout << "inside removeLastOccurrence...." << endl;
    //T object;
    bool lastOccurrence = false;
    Node<T>* current = frontPtr->getNextPtr();
    unsigned targetIndex = 0;
    if(empty())
    {
        throw NoSuchObject("No such object. Cannot remove first occurrence.");
    }
    else
    {
        unsigned index = 0;
        while( current != backPtr )
        {
            if(current->getObject() == otherObj)
            {
                lastOccurrence = true;
                targetIndex = index;
            }
            
            index++;
            current = current->getNextPtr();
        }
        
        if(!lastOccurrence)
        {
            throw NoSuchObject("No such object exists in the list");
        }
    }
    
    return remove(targetIndex);
}


/****************************************************************************
 *                               set Function                               *
 ****************************************************************************/
template <typename T>
T List<T>:: set( unsigned index, const T& object ) throw ( out_of_range )
{
    T replacedObj;
    //cout << "inside set function" << endl;
    if( index < 0 || index > sz )
    {
        throw out_of_range("Index is out of range. Cannot set.");
    }
    if(empty() && index == 0)
    {
        this->add(frontPtr->getNextPtr(),object);
    }
    else if (empty() && index != 0)
    {
        throw out_of_range("Index is out of range. Cannot set.");
    }
    else
    {
        replacedObj = this->remove(index);
        this->add(index, object);
    }
    return replacedObj;
}

/****************************************************************************
 *                               size Function                              *
 ****************************************************************************/
template <typename T>
unsigned List<T>:: size() const
{
    return sz;
}

/****************************************************************************
 *                             toArray Function                             *
 ****************************************************************************/
template <typename T>
T* List<T>:: toArray() const throw ( bad_alloc )
{
    T* arrayPtr = NULL;
    if(sz == 0)
    {
        arrayPtr = new T[0]; 
    }
    else
    {
        arrayPtr = new T[sz];
        Node<T>* current = frontPtr->getNextPtr();
        for(unsigned i = 0; i < sz && current != backPtr; i++)
        {
            arrayPtr[i] = current->getObject();
            current = current->getNextPtr();
        }
    }
    
    return arrayPtr;
}

/****************************************************************************
 *                     overloaded assignment operator                       *
 ****************************************************************************/
template <typename T>
const List<T>& List<T>:: operator=( const List<T>& otherList ) throw ( bad_alloc )
{
    //cout << "inside overloaded assignment operator" << endl;
    //check for self-assignment
    if(this != &otherList)
    {
        //make sure any existing contents of the left hand side list are deallocated
        cout << "calling clear" << endl;
        cout << "current size: " << sz << endl;
        this->clear();
        cout << "new size: " << sz << endl;
        this->initialize();
        //this->printInternal();
        // pointer to current Node of list being copied from
        
        this->addAll(otherList);
        
        /*Node<T>* current = otherList.frontPtr->getNextPtr();
        
        //while list being copied from is not empty
        while( current != otherList.backPtr  )
        {
            addLast(current->getObject());
            cout << "object added: " << current->getObject();
            current = current->getNextPtr();
            cout << "\t\t updated size: " << sz << endl;
        }*/
        
        //cout << *this << endl;
    }
    
    return *this;
}

/****************************************************************************
 *                         printInternal Function                           *
 ****************************************************************************/
template <typename T>
void List<T>:: printInternal( ostream& out ) const
{
    cout << "size: " << sz << endl;
    Node<T>* current = this->frontPtr->getNextPtr();
    int i = 0;
    //cout << "Top: " << frontPtr << endl;
    //cout << "PRINTING" << endl;
    while ( current != backPtr ) 
    {
        out << "Node " << i << endl;
        //cout << "Address: " << current << endl;
        out << "Object: " << current->getObject() << endl;
        //cout << "Previous: " << current->getPrevPtr() << endl;
        //cout << "Next: " << current->getNextPtr() << endl;
        current = current->getNextPtr();
        i++;
    } // while
    //cout << "PRINTING DONE." << endl;
}
#endif /* LIST_H */