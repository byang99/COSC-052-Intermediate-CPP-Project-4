#include "main.h"

int main() 
{    
    /*cout << "/***********************************************************************" << endl;
    cout << " ***********************************************************************" << endl;
    cout << " *                               TEST CASE 1-1                         *" << endl;
    cout << " ***********************************************************************" << endl;
    cout << " ***********************************************************************///" << endl;
    
        /*
        cout << endl << endl;
        ListIterator <string> itr1;
        cout << "Test Case 1-1" << endl;
        List<string> myList;
        myList.addFirst("s");
        myList.addFirst("e");
        myList.addFirst("m");
        myList.addFirst("a");
        myList.addFirst("g");
        
        cout << "printing out contents of myList" << endl;
        cout << myList << endl;
        cout << "instantiating an iterator object (itr1), passing 0 as argument..." << endl;
        itr1 = myList.listIterator(0);
        
        try
        {
            cout << "\nupdating iter1: itr1 = myList.listIterator(0);" << endl;
            itr1 = myList.listIterator(0);
            
            try
            {
                cout << "using itr1 in one call to previous, should throw exception:" << endl;
                cout << itr1.previous();
                cout << endl;
            }
            catch (out_of_range &e)
            {
                cout << "ERROR: Caught exception in nested try, ";
                cout << "argument passed is out of bounds" << endl;
            }
            catch(exception &e)
            {
                cout << "ERROR: Caught exception in nested try" << endl;
            }
            catch(...)
            {
                cout << "ERROR: Caught unknown exception in nested try" << endl;
            }
            try
            {
                cout << "\nusing itr1 in another call to previous, ";
                cout << "should throw exception:" << endl;
                cout << itr1.previous();
                cout << endl;
            }
            catch (out_of_range &e)
            {
                cout << "ERROR: Caught exception in nested try, ";
                cout << "argument passed is out of bounds" << endl;
            }
            catch(exception &e)
            {
                cout << "ERROR: Caught exception in nested try" << endl;
            }
            catch(...)
            {
                cout << "ERROR: Caught unknown exception in nested try" << endl;
            }
            
            cout << "\nupdating iter1: itr1 = myList.listIterator(0);" << endl;
            itr1 = myList.listIterator(0);
            
            try
            {
                cout << "\nusing itr1 in one call to next, should return \'g\':" << endl;
                cout << itr1.next() << endl;
                cout << endl;
            }
            catch (out_of_range  &e)
            {
                cout << "ERROR: Caught out_of_range, argument passed is out of bounds" << endl;
            }
            catch(exception &e)
            {
                cout << "ERROR: Caught exception in nested try" << endl;
            }
            catch(...)
            {
                cout << "ERROR: Caught unknown exception in nested try" << endl;
            }

            try
            {
                cout << "\nusing itr1 in another call to next, should return \'a\':" << endl;
                cout << itr1.next() << endl;
                cout << endl;
            }
            catch (out_of_range &e)
            {
                cout << "ERROR: Caught exception in nested try, ";
                cout << "argument passed is out of bounds" << endl;
            }            
            catch(exception &e)
            { 
                cout << "ERROR: Caught exception in nested try" << endl;
            }
            catch(...)
            {
                cout << "ERROR: Caught unknown exception in nested try" << endl;
            }
            
            
        } // outer try block
        catch(exception &e)
        { 
            cout << "ERROR: Caught exception in function main, outer try block" << endl;
        }
       
        catch(...)
        {
            cout << "ERROR: Caught unknown exception in function main, outer try block" << endl;
        }
       
        
        
        cout << "end Test Case 1-1" << endl;
        
        cout << endl << endl;
        
        */
      
    /*cout << "/***********************************************************************" << endl;
    cout << " ***********************************************************************" << endl;
    cout << " *                               TEST CASE 1-2                         *" << endl;
    cout << " ***********************************************************************" << endl;
    cout << " ***********************************************************************///" << endl;
    
        /*
        cout << endl << endl;
        ListIterator <string> itr1;
        cout << "Test Case 1-2" << endl;
        List<string> myList;
        myList.addFirst("s");
        myList.addFirst("e");
        myList.addFirst("m");
        myList.addFirst("a");
        myList.addFirst("g");
        
        cout << "instantiating an iterator object (itr1), passing 2 as argument..." << endl;
        itr1 = myList.listIterator(2);
        
        try
        {
            cout << "\nupdating iter1: itr1 = myList.listIterator(2);" << endl;
            itr1 = myList.listIterator(2);
            
            try
            {
                cout << "using itr1 in one call to previous, ";
                cout << "should \"reverse direction\" and return \'a\':" << endl;
                cout << itr1.previous();
                cout << endl;
            }
            catch (out_of_range &e)
            {
                cout << "ERROR: Caught exception in nested try, ";
                cout << "argument passed is out of bounds" << endl;
            }
            catch(exception &e)
            {
                cout << "ERROR: Caught exception in nested try" << endl;
            }
            catch(...)
            {
                cout << "ERROR: Caught unknown exception in nested try" << endl;
            }
            try
            {
                cout << "\nusing itr1 in another call to previous, should return \'g\':" << endl;
                cout << itr1.previous();
                cout << endl;
            }
            catch (out_of_range &e)
            {
                cout << "ERROR: Caught exception in nested try, ";
                cout << "argument passed is out of bounds" << endl;
            }
            catch(exception &e)
            {
                cout << "ERROR: Caught exception in nested try" << endl;
            }
            catch(...)
            {
                cout << "ERROR: Caught unknown exception in nested try" << endl;
            }
            try
            {
                cout << "\nusing itr1 in another call to previous, ";
                cout << "should throw exception:" << endl;
                cout << itr1.previous();
                cout << endl;
            }
            catch (out_of_range &e)
            {
                cout << "ERROR: Caught exception in nested try, ";
                cout << "argument passed is out of bounds" << endl;
            }
            catch(exception &e)
            {
                cout << "ERROR: Caught exception in nested try" << endl;
            }
            catch(...)
            {
                cout << "ERROR: Caught unknown exception in nested try" << endl;
            }
            try
            {
                cout << "\nusing itr1 in another call to previous, ";
                cout << "should throw exception:" << endl;
                cout << itr1.previous();
                cout << endl;
            }
            catch (out_of_range &e)
            {
                cout << "ERROR: Caught exception in nested try, ";
                cout << "argument passed is out of bounds" << endl;
            }
            catch(exception &e)
            {
                cout << "ERROR: Caught exception in nested try" << endl;
            }
            catch(...)
            {
                cout << "ERROR: Caught unknown exception in nested try" << endl;
            }
            
            
            
            try
            {
                cout << "\nusing itr1 in one call to next, should return \'g\':" << endl;
                cout << itr1.next() << endl;
                cout << endl;
            }
            catch (out_of_range  &e)
            {
                cout << "ERROR: Caught out_of_range, argument passed is out of bounds" << endl;
            }
            catch(exception &e)
            {
                cout << "ERROR: Caught exception in nested try" << endl;
            }
            catch(...)
            {
                cout << "ERROR: Caught unknown exception in nested try" << endl;
            }
            
            try
            {
                cout << "\nusing itr1 in another call to next, should return \'a\':" << endl;
                cout << itr1.next() << endl;
                cout << endl;
            }
            catch (out_of_range &e)
            {
                cout << "ERROR: Caught exception in nested try, ";
                cout << "argument passed is out of bounds" << endl;
            }
            catch(exception &e)
            {
                cout << "ERROR: Caught exception in nested try" << endl;
            }
            catch(...)
            {
                cout << "ERROR: Caught unknown exception in nested try" << endl;
            }
            
            
        } // outer try block
        catch(exception &e)
        {
            cout << "ERROR: Caught exception in function main, outer try block" << endl;
        }
        
        catch(...)
        {
            cout << "ERROR: Caught unknown exception in function main, outer try block" << endl;
        }
        
        
        
        cout << "end Test Case 1-2" << endl;
        
        cout << endl << endl;
        
        
        */
        
    /*cout << "/***********************************************************************" << endl;
    cout << " ***********************************************************************" << endl;
    cout << " *                               TEST CASE 2-1                         *" << endl;
    cout << " ***********************************************************************" << endl;
    cout << " ***********************************************************************///" << endl;
        
        /*
        cout << endl << endl;
        ListIterator <string> itr2;
        cout << "Test Case 2-1" << endl;
        List<string> myList;
        myList.addFirst("s");
        myList.addFirst("e");
        myList.addFirst("m");
        myList.addFirst("a");
        myList.addFirst("g");
        
        cout << "instantiating an iterator object (itr2), passing 5 as argument..." << endl;
        itr2 = myList.listIterator(5);
        
        try
        {
            cout << "\nupdating iter2: itr2 = myList.listIterator(5);" << endl;
            itr2 = myList.listIterator(5);
            
            try
            {
                cout << "\nusing itr2 in one call to next, should throw exception:" << endl;
                cout << itr2.next();
                cout << endl;
            }
            catch (out_of_range &e)
            {
                cout << "ERROR: Caught exception in nested try, ";
                cout << "argument passed is out of bounds" << endl;
            }
            catch(exception &e)
            {
                cout << "ERROR: Caught exception in nested try" << endl;
            }
            catch(...)
            {
                cout << "ERROR: Caught unknown exception in nested try" << endl;
            }
            try
            {
                cout << "\nusing itr2 in another call to next, should throw exception:" << endl;
                cout << itr2.next();
                cout << endl;
            }
            catch (out_of_range &e)
            {
                cout << "ERROR: Caught exception in nested try, ";
                cout << "argument passed is out of bounds" << endl;
            }
            catch(exception &e)
            {
                cout << "ERROR: Caught exception in nested try" << endl;
            }
            catch(...)
            {
                cout << "ERROR: Caught unknown exception in nested try" << endl;
            }
            
            cout << "\nupdating iter2: itr2 = myList.listIterator(5);" << endl;
            itr2 = myList.listIterator(5);
            
            try
            {
                cout << "\nusing itr2 in one call to previous, should return \'s\':" << endl;
                cout << itr2.previous() << endl;
                cout << endl;
            }
            catch (out_of_range  &e)
            {
                cout << "ERROR: Caught out_of_range, argument passed is out of bounds" << endl;
            }
            catch(exception &e)
            {
                cout << "ERROR: Caught exception in nested try" << endl;
            }
            catch(...)
            {
                cout << "ERROR: Caught unknown exception in nested try" << endl;
            }
            
            try
            {
                cout << "\nusing itr2 in another call to previous, should return \'e\':" << endl;
                cout << itr2.previous() << endl;
                cout << endl;
            }
            catch (out_of_range &e)
            {
                cout << "ERROR: Caught exception in nested try, ";
                cout << "argument passed is out of bounds" << endl;
            }
            catch(exception &e)
            {
                cout << "ERROR: Caught exception in nested try" << endl;
            }
            catch(...)
            {
                cout << "ERROR: Caught unknown exception in nested try" << endl;
            }
            
            
        } // outer try block
        catch(exception &e)
        {
            cout << "ERROR: Caught exception in function main, outer try block" << endl;
        }
        
        catch(...)
        {
            cout << "ERROR: Caught unknown exception in function main, outer try block" << endl;
        }
        
        
        
        cout << "end Test Case 2-1" << endl;
        
        cout << endl << endl;
        
        */
        
    /*cout << "/***********************************************************************" << endl;
    cout << " ***********************************************************************" << endl;
    cout << " *                               TEST CASE 2-2                         *" << endl;
    cout << " ***********************************************************************" << endl;
    cout << " ***********************************************************************///" << endl;
 
        /*

        cout << endl << endl;
        ListIterator <string> itr2;
        cout << "Test Case 2-2" << endl;
        List<string> myList;
        myList.addFirst("s");
        myList.addFirst("e");
        myList.addFirst("m");
        myList.addFirst("a");
        myList.addFirst("g");
        
        cout << "instantiating an iterator object (itr2), passing 3 as argument..." << endl;
        itr2 = myList.listIterator(3);
        
        try
        {
            cout << "\nupdating iter2: itr2 = myList.listIterator(3);" << endl;
            itr2 = myList.listIterator(3);
            
            try
            {
                cout << "using itr2 in one call to next, should and return \'e\':" << endl;
                cout << itr2.next();
                cout << endl;
            }
            catch (out_of_range &e)
            {
                cout << "ERROR: Caught exception in nested try, ";
                cout << "argument passed is out of bounds" << endl;
            }
            catch(exception &e)
            {
                cout << "ERROR: Caught exception in nested try" << endl;
            }
            catch(...)
            {
                cout << "ERROR: Caught unknown exception in nested try" << endl;
            }
            try
            {
                cout << "\nusing itr2 in another call to next, should return \'s\':" << endl;
                cout << itr2.next();
                cout << endl;
            }
            catch (out_of_range &e)
            {
                cout << "ERROR: Caught exception in nested try, ";
                cout << "argument passed is out of bounds" << endl;
            }
            catch(exception &e)
            {
                cout << "ERROR: Caught exception in nested try" << endl;
            }
            catch(...)
            {
                cout << "ERROR: Caught unknown exception in nested try" << endl;
            }
            try
            {
                cout << "\nusing itr2 in another call to next, should throw exception:" << endl;
                cout << itr2.next();
                cout << endl;
            }
            catch (out_of_range &e)
            {
                cout << "ERROR: Caught exception in nested try, ";
                cout << "argument passed is out of bounds" << endl;
            }
            catch(exception &e)
            {
                cout << "ERROR: Caught exception in nested try" << endl;
            }
            catch(...)
            {
                cout << "ERROR: Caught unknown exception in nested try" << endl;
            }
            try
            {
                cout << "\nusing itr2 in another call to next, should throw exception:" << endl;
                cout << itr2.next();
                cout << endl;
            }
            catch (out_of_range &e)
            {
                cout << "ERROR: Caught exception in nested try, ";
                cout << "argument passed is out of bounds" << endl;
            }
            catch(exception &e)
            {
                cout << "ERROR: Caught exception in nested try" << endl;
            }
            catch(...)
            {
                cout << "ERROR: Caught unknown exception in nested try" << endl;
            }
            
            
            
            try
            {
                cout << "\nusing itr2 in one call to previous, should return \'s\':" << endl;
                cout << itr2.previous() << endl;
                cout << endl;
            }
            catch (out_of_range  &e)
            {
                cout << "ERROR: Caught out_of_range, argument passed is out of bounds" << endl;
            }
            catch(exception &e)
            {
                cout << "ERROR: Caught exception in nested try" << endl;
            }
            catch(...)
            {
                cout << "ERROR: Caught unknown exception in nested try" << endl;
            }
            
            try
            {
                cout << "\nusing itr2 in another call to previous, should return \'e\':" << endl;
                cout << itr2.previous() << endl;
                cout << endl;
            }
            catch (out_of_range &e)
            {
                cout << "ERROR: Caught exception in nested try, ";
                cout << "argument passed is out of bounds" << endl;
            }
            catch(exception &e)
            {
                cout << "ERROR: Caught exception in nested try" << endl;
            }
            catch(...)
            {
                cout << "ERROR: Caught unknown exception in nested try" << endl;
            }
            
            
        } // outer try block
        catch(exception &e)
        {
            cout << "ERROR: Caught exception in function main, outer try block" << endl;
        }
        
        catch(...)
        {
            cout << "ERROR: Caught unknown exception in function main, outer try block" << endl;
        }
        
        
        
        cout << "end Test Case 2-2" << endl;
        
        cout << endl << endl;
        
        */
        
    /*cout << "/***********************************************************************" << endl;
    cout << " ***********************************************************************" << endl;
    cout << " *                               TEST CASE 5-1                         *" << endl;
    cout << " ***********************************************************************" << endl;
    cout << " ***********************************************************************///" << endl;

        /*
        cout << endl << endl;
        cout << "Test Case 5-1" << endl;
        List<string> myList;
        myList.addFirst("s");
        myList.addFirst("e");
        myList.addFirst("m");
        myList.addFirst("a");
        myList.addFirst("g");
        
        cout << "instantiating an iterator object (itr5), passing 3 as argument..." << endl;
        ListIterator<string> itr5 = myList.listIterator(3);
        
        try
        {
            cout << "\nupdating iter5: itr5 = myList.listIterator(3);" << endl;
            itr5 = myList.listIterator(3);
            
            try
            {
                cout << "\nwhile(hasNext()) call next, should print \"es\"" << endl;
                while (itr5.hasNext())
                {
                    cout << itr5.next();
                }
                cout << endl;
            }
            catch (out_of_range &e)
            {
                cout << "ERROR: Caught exception in nested try, ";
                cout << "argument passed is out of bounds" << endl;
            }
            catch(exception &e)
            {
                cout << "ERROR: Caught exception in nested try" << endl;
            }
            catch(...)
            {
                cout << "ERROR: Caught unknown exception in nested try" << endl;
            }
            
        } // outer try block
        catch(exception &e)
        {
            cout << "ERROR: Caught exception in function main, outer try block" << endl;
        }
        
        catch(...)
        {
            cout << "ERROR: Caught unknown exception in function main, outer try block" << endl;
        }
        
        
        
        cout << "end Test Case 5-1" << endl;
        
        cout << endl << endl;
        
        */

    /*cout << "/***********************************************************************" << endl;
    cout << " ***********************************************************************" << endl;
    cout << " *                               TEST CASE 2-2                         *" << endl;
    cout << " ***********************************************************************" << endl;
    cout << " ***********************************************************************///" << endl;
        
        /*
        cout << endl << endl;
        
        cout << "Test Case 5-2" << endl;
        List<string> myList;
        myList.addFirst("s");
        myList.addFirst("e");
        myList.addFirst("m");
        myList.addFirst("a");
        myList.addFirst("g");
        
        cout << "instantiating an iterator object (itr5), passing 3 as argument..." << endl;
        ListIterator<string> itr5 = myList.listIterator(3);
        
        try
        {
            cout << "\nupdating iter5: itr5 = myList.listIterator(3);" << endl;
            itr5 = myList.listIterator(3);
            
            try
            {
                cout << "\nwhile(hasPrevious()) call previous, should print \"mag\"" << endl;
                while (itr5.hasPrevious())
                {
                    cout << itr5.previous();
                }
                cout << endl;
            }
            catch (out_of_range &e)
            {
                cout << "ERROR: Caught exception in nested try, ";
                cout << "argument passed is out of bounds" << endl;
            }
            catch(exception &e)
            {
                cout << "ERROR: Caught exception in nested try" << endl;
            }
            catch(...)
            {
                cout << "ERROR: Caught unknown exception in nested try" << endl;
            }
            
        } // outer try block
        catch(exception &e)
        {
            cout << "ERROR: Caught exception in function main, outer try block" << endl;
        }
        
        catch(...)
        {
            cout << "ERROR: Caught unknown exception in function main, outer try block" << endl;
        }
        
        
        
        cout << "end Test Case 5-2" << endl;
        
        cout << endl << endl;
        
        */

    
    /*cout << "/***********************************************************************" << endl;
    cout << " ***********************************************************************" << endl;
    cout << " *                               TEST                                  *" << endl;
    cout << " ***********************************************************************" << endl;
    cout << " ***********************************************************************///" << endl;

    /*try
    {
        unsigned long index0 = 0;
        
        
        List<string> myList1;
        
        myList1.add(index0, "e");
        myList1.add(index0, "r");
        myList1.add(index0, "g");
        
        cout << "entering printInternal" << endl;
        myList1.printInternal();
        cout << "exiting printInternal" << endl;
        cout << endl;
       
        myList1.remove(1);
        myList1.add(myList1.size(), "a");
        myList1.add(myList1.size(), "t");
        try 
        { 
            cout << "adding to index size+1... should throw out_of_range exception" << endl;
            myList1.add(myList1.size()+1, "!");
        }
        catch (out_of_range &e) 
        {
            cout << "in nested try: " << e.what() << endl;
        }
        catch (...) 
        {
            cout << "caught unknown exception in nested try" << endl; 
        }
        cout << "printing internal contents second time" << endl;
        myList1.printInternal();
        cout << endl;
        
        myList1.add(1, "r");
        
        myList1.printInternal();
        cout << endl;
        
        cout << "removing first object on the list..." << endl;
        myList1.remove(index0);
        myList1.printInternal();
        cout << endl;
        cout << "removing last object on the list..." << endl;
        myList1.remove(myList1.size()-1);
        myList1.printInternal();
        try 
        {
            myList1.remove(myList1.size());
        }
        catch (out_of_range &e) 
        {
            cout << "in nested try: " << e.what() << endl;
        }
        catch (...) 
        {
            cout << "caught unknown exception in nested try" << endl; 
        }
        
        
        cout << endl;
    
    }
    catch( out_of_range &e )
    {
        cout << "caught out_of_range exception in function main:\n" << endl;
        cout << e.what() << endl;
    }
    catch (...)
    {
        cout << "caught unknown exception in function main" << endl;
    }
    */

    /*cout << "/***********************************************************************" << endl;
    cout << " ***********************************************************************" << endl;
    cout << " *                               GABE TEST                             *" << endl;
    cout << " ***********************************************************************" << endl;
    cout << " ***********************************************************************///" << endl;
    
    /*List<int> myList;
 
    cout << "adding five objects to the list using addFirst..." << endl;
    myList.addFirst(20);
    myList.addFirst(80);
    myList.addFirst(5);
    myList.addFirst(3);
    myList.addFirst(1976);

    cout << "instantiating an iterator object (itr1), passing 0 as argument..." << endl;
    ListIterator<int> itr1 = myList.listIterator(0);

    cout << "using itr1 to traverse list and output value of all nodes:" << endl;
    while (itr1.hasNext())
    {
    cout << itr1.next() << " ";
    }
    cout << endl;

    cout << "instantiating an iterator object (itr2), passing no argument..." << endl;
    ListIterator<int> itr2 = myList.listIterator();

    cout << "using itr2 to output value of first node:" << endl;
    cout << itr2.next() << endl;
    cout << "using itr2 to output value of second node:" << endl;
    cout << itr2.next() << endl;
    cout << "using itr2 to output value of third node, then ";
    cout << "alternating calls to previous/next:" << endl;
    cout << itr2.next() << endl;
    cout << itr2.previous() << endl;
    cout << itr2.next() << endl;
    cout << itr2.previous() << endl;
    cout << itr2.next() << endl;
    cout << itr2.previous() << endl;

    cout << "using itr2 to output value of third-fifth nodes:" << endl;
    cout << itr2.next() << endl;
    cout << itr2.next() << endl;
    cout << itr2.next() << endl;

    //cout << "using itr2 to call next when already at list end, ";
    //cout << "should throw an exception:" << endl;
    //cout << itr2.next() << endl;

    cout << "using itr2 to call previous when at list end, requires ";
    cout << "change of direction, should output value of last node:" << endl;
    cout << itr2.previous() << endl;

    cout << "instantiating an iterator object (itr3), passing 5 (size()) ";
    cout << "as argument..." << endl;
    ListIterator<int> itr3 = myList.listIterator(myList.size());

    //cout << "using itr3 to call next when already at list end, ";
    //cout << "should throw an exception:" << endl;
    //cout << itr3.next() << endl;

    cout << "using itr3 to call previous, should output value of last node:";
    cout << endl;
    cout << itr3.previous() << endl;

    //cout << "instantiating an iterator object (itr4), passing 6 (size()+1) ";
    //cout << "as argument..." << endl;
    //ListIterator itr4 = myList.listIterator(myList.size()+1); */
    
    
    cout << "testing default constructor" << endl;
    
    List<string> l1;
    cout << "printing contents of l1: " << endl;
    cout << l1 << endl;
    //l1.printInternal();
    cout << endl;
    cout << "testing addFirst function... should be: c,b,a" << endl;
    l1.addFirst("a");
    l1.addFirst("b");
    l1.addFirst("c");
    //l1.printInternal();
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    cout << "testing addLast function... should be: c,b,a,a,b,c" << endl;
    l1.addLast("a");
    l1.addLast("b");
    l1.addLast("c");
    //l1.printInternal();
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    
    cout << "testing add() function... adding f to the end of the list" << endl;
    l1.add(6,"f");
    //l1.printInternal();
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    
    cout << "testing add() function... adding f to the beginning of the list" << endl;
    int first = 0;
    l1.add(first,"f");
    //l1.printInternal();
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    
    cout << "testing add() function... adding z to index 7 of the list" << endl;

    l1.add(7,"z");
    //l1.printInternal();
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    
    cout << "testing removeFirst and removeLast on l1" << endl;
    l1.removeFirst();
    l1.removeLast();
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    
    cout << "testing remove() function. Removing last object" << endl;
    l1.remove(6);
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    
    cout << "testing remove() function. Removing object at index 3" << endl;
    l1.remove(3);
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    
    
    cout << "testing remove() function. Removing object at index 2" << endl;
    l1.remove(2);
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    
    cout << "testing add() function. Adding x at index 3" << endl;
    l1.add(3,"x");
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    
    cout << "testing add() function. Adding j at index 2" << endl;
    l1.add(2,"j");
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    
    cout << "testing clear function...clearing contents of l1" << endl;
    l1.clear();
    cout << l1 << endl;
    //cout << "First object: " << l1.getFirst() << endl;
    //cout << "Last object: " << l1.getLast() << endl;
    
    cout << "adding a,b,c to l1 in that order" << endl;
    l1.addLast("a");
    l1.addLast("b");
    l1.addLast("c");
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    
    cout << "testing copy constructor. creating l2" << endl;
    List <string> l2 (l1);
    
    
    //cout << "First object of l2: " << endl;
    //cout << l2.getFirst() << endl;
    cout << "Printing contents of l1..." << endl;
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    cout << endl;
    cout << endl;
    
    cout << "Printing contents of l2..." << endl;
    //l2.printInternal();
    cout << l2 << endl;
    cout << "First object: " << l2.getFirst() << endl;
    cout << "Last object: " << l2.getLast() << endl;
    
    cout << "testing addAll function. Adding all of l2 to l1 at the end of l1" << endl;
    l1.addAll(l2);
    cout << "Printing contents of l1..." << endl;
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    cout << endl;
    cout << endl;
    if(l1.empty())
    {
        cout << "l1 is empty." << endl;
    }
    else
    {
        cout << "l1 is not empty." << endl;
    }
    cout << "Printing contents of l2..." << endl;
    //l2.printInternal();
    cout << l2 << endl;
    cout << "First object: " << l2.getFirst() << endl;
    cout << "Last object: " << l2.getLast() << endl;
    if(l2.empty())
    {
        cout << "l2 is empty." << endl;
    }
    else
    {
        cout << "l2 is not empty." << endl;
    }
    
    
    cout << "testing toArray....toArray on l1" << endl;
    string* arrayPtr1 = l1.toArray();
    cout << "[";
    for(unsigned i = 0; i < l1.size()-1; i++)
    {
        cout << arrayPtr1[i] << ", ";
    }
    cout << arrayPtr1[l1.size()-1];
    cout << "]" << endl;
    
    
    cout << "testing toArray....toArray on l2" << endl;
    string* arrayPtr2 = l2.toArray();
    cout << "[";
    for(unsigned i = 0; i < l2.size()-1; i++)
    {
        cout << arrayPtr2[i] << ", ";
    }
    cout << arrayPtr2[l2.size()-1];
    cout << "]" << endl;

    cout << endl;
    
    cout << "Printing contents of l1..." << endl;
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    cout << endl;
    cout << endl;
    if(l1.empty())
    {
        cout << "l1 is empty." << endl;
    }
    else
    {
        cout << "l1 is not empty." << endl;
    }
    cout << "Printing contents of l2..." << endl;
    //l2.printInternal();
    cout << l2 << endl;
    cout << "First object: " << l2.getFirst() << endl;
    cout << "Last object: " << l2.getLast() << endl;
    if(l2.empty())
    {
        cout << "l2 is empty." << endl;
    }
    else
    {
        cout << "l2 is not empty." << endl;
    }
    cout << "testing contains function....if l1 contains 'a'...." << endl;
    if(l1.contains("a"))
    {
        cout << "l1 CONTAINS 'a'" << endl;
    }
    else if(!(l1.contains("a")))
    {
        cout << "l1 DOES NOT CONTAIN 'a'" << endl;
    }
    
    cout << "testing contains function....if l1 contains 'x'...." << endl;
    if(l1.contains("x"))
    {
        cout << "l1 CONTAINS 'x'" << endl;
    }
    else if(!(l1.contains("x")))
    {
        cout << "l1 DOES NOT CONTAIN 'x'" << endl;
    }
    cout << "Printing contents of l1..." << endl;
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    cout << endl;
    cout << endl;
    if(l1.empty())
    {
        cout << "l1 is empty." << endl;
    }
    else
    {
        cout << "l1 is not empty." << endl;
    }
    cout << "Printing contents of l2..." << endl;
    //l2.printInternal();
    cout << l2 << endl;
    cout << "First object: " << l2.getFirst() << endl;
    cout << "Last object: " << l2.getLast() << endl;
    if(l2.empty())
    {
        cout << "l2 is empty." << endl;
    }
    else
    {
        cout << "l2 is not empty." << endl;
    }
    cout << endl;
    cout << "testing get(index) function on l1 and l2..." << endl;
    cout << "Element in l1 at index 2: " << l1.get(2) << endl;
    cout << "Element in l2 at index 1: " << l2.get(1) << endl;
    
    cout << "Testing remove() function... removing element in l1 at index 2" << endl;
    l1.remove(2);
    cout << "Printing contents of l1..." << endl;
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    cout << endl;
    cout << endl;
    if(l1.empty())
    {
        cout << "l1 is empty." << endl;
    }
    else
    {
        cout << "l1 is not empty." << endl;
    }
    cout << "Printing contents of l2..." << endl;
    //l2.printInternal();
    cout << l2 << endl;
    cout << "First object: " << l2.getFirst() << endl;
    cout << "Last object: " << l2.getLast() << endl;
    if(l2.empty())
    {
        cout << "l2 is empty." << endl;
    }
    else
    {
        cout << "l2 is not empty." << endl;
    }
    
    cout << "Testing remove() function...removing element in l2 at index 1" << endl;
    l2.remove(1);
    cout << "Printing contents of l1..." << endl;
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    cout << endl;
    cout << endl;
    if(l1.empty())
    {
        cout << "l1 is empty." << endl;
    }
    else
    {
        cout << "l1 is not empty." << endl;
    }
    cout << "Printing contents of l2..." << endl;
    //l2.printInternal();
    cout << l2 << endl;
    cout << "First object: " << l2.getFirst() << endl;
    cout << "Last object: " << l2.getLast() << endl;
    if(l2.empty())
    {
        cout << "l2 is empty." << endl;
    }
    else
    {
        cout << "l2 is not empty." << endl;
    }
    
    cout << endl;
    l1.clear();
    l2.clear();
    l1.addLast("a");
    l1.addLast("b");
    l1.addLast("c");
    l1.addLast("a");
    l2.addLast("w");
    l2.addLast("x");
    l2.addLast("y");
    l2.addLast("z");
    l2.addLast("y");
    
    cout << "Printing contents of l1..." << endl;
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    cout << endl;
    cout << endl;
    if(l1.empty())
    {
        cout << "l1 is empty." << endl;
    }
    else
    {
        cout << "l1 is not empty." << endl;
    }
    cout << "Printing contents of l2..." << endl;
    //l2.printInternal();
    cout << l2 << endl;
    cout << "First object: " << l2.getFirst() << endl;
    cout << "Last object: " << l2.getLast() << endl;
    if(l2.empty())
    {
        cout << "l2 is empty." << endl;
    }
    else
    {
        cout << "l2 is not empty." << endl;
    }
    
    cout << "Testing removeFirstOccurrence...remove first occurrence of 'a' in l1" << endl;
    cout << "Testing removeFirstOccurrence...remove first occurrence of 'y' in l2" << endl;
    l1.removeFirstOccurrence("a");
    l2.removeFirstOccurrence("y");
    cout << "Printing contents of l1..." << endl;
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    cout << endl;
    cout << endl;
    if(l1.empty())
    {
        cout << "l1 is empty." << endl;
    }
    else
    {
        cout << "l1 is not empty." << endl;
    }
    cout << "Printing contents of l2..." << endl;
    //l2.printInternal();
    cout << l2 << endl;
    cout << "First object: " << l2.getFirst() << endl;
    cout << "Last object: " << l2.getLast() << endl;
    if(l2.empty())
    {
        cout << "l2 is empty." << endl;
    }
    else
    {
        cout << "l2 is not empty." << endl;
    }
    
    
    l1.addFirst("c");
    l1.addFirst("b");
    l1.addFirst("a");
    
    l2.addFirst("z");
    l2.addFirst("x");
    l2.addFirst("w");
    //l2.addFirst("x");
    
    cout << "Printing contents of l1..." << endl;
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    cout << endl;
    cout << endl;
    if(l1.empty())
    {
        cout << "l1 is empty." << endl;
    }
    else
    {
        cout << "l1 is not empty." << endl;
    }
    cout << "Printing contents of l2..." << endl;
    //l2.printInternal();
    cout << l2 << endl;
    cout << "First object: " << l2.getFirst() << endl;
    cout << "Last object: " << l2.getLast() << endl;
    if(l2.empty())
    {
        cout << "l2 is empty." << endl;
    }
    else
    {
        cout << "l2 is not empty." << endl;
    }
    
    cout << "Testing removeFirstOccurrence... 'c' in l1...'z' in l2" << endl;
    l1.removeFirstOccurrence("c");
    l2.removeFirstOccurrence("z");
    cout << "Printing contents of l1..." << endl;
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    cout << endl;
    cout << endl;
    if(l1.empty())
    {
        cout << "l1 is empty." << endl;
    }
    else
    {
        cout << "l1 is not empty." << endl;
    }
    cout << "Printing contents of l2..." << endl;
    //l2.printInternal();
    cout << l2 << endl;
    cout << "First object: " << l2.getFirst() << endl;
    cout << "Last object: " << l2.getLast() << endl;
    if(l2.empty())
    {
        cout << "l2 is empty." << endl;
    }
    else
    {
        cout << "l2 is not empty." << endl;
    }
    
    l1.add(2,"a");
    l2.add(2,"y");
    cout << "Printing contents of l1..." << endl;
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    cout << "Size: " << l1.size() << endl;
    cout << endl;
    cout << endl;
    if(l1.empty())
    {
        cout << "l1 is empty." << endl;
    }
    else
    {
        cout << "l1 is not empty." << endl;
    }
    cout << "Printing contents of l2..." << endl;
    //l2.printInternal();
    cout << l2 << endl;
    cout << "First object: " << l2.getFirst() << endl;
    cout << "Last object: " << l2.getLast() << endl;
    cout << "Size: " << l2.size() << endl;
    if(l2.empty())
    {
        cout << "l2 is empty." << endl;
    }
    else
    {
        cout << "l2 is not empty." << endl;
    }
    
    cout << "Testing removeLastOccurrence... 'b' in l1...'x' in l2" << endl;
    //cout << "HERE" << endl;
    l1.removeLastOccurrence("b");
    l2.removeLastOccurrence("x");
    cout << "Printing contents of l1..." << endl;
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    cout << "Size: " << l1.size() << endl;
    cout << endl;
    cout << endl;
    if(l1.empty())
    {
        cout << "l1 is empty." << endl;
    }
    else
    {
        cout << "l1 is not empty." << endl;
    }
    cout << "Printing contents of l2..." << endl;
    //l2.printInternal();
    cout << l2 << endl;
    cout << "First object: " << l2.getFirst() << endl;
    cout << "Last object: " << l2.getLast() << endl;
    cout << "Size: " << l2.size() << endl;
    if(l2.empty())
    {
        cout << "l2 is empty." << endl;
    }
    else
    {
        cout << "l2 is not empty." << endl;
    }
    
    
    cout << "Testing removeLastOccurrence... 'a' in l1...'y' in l2" << endl;
    //cout << "HERE" << endl;
    l1.removeLastOccurrence("a");
    l2.removeLastOccurrence("y");
    cout << "Printing contents of l1..." << endl;
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    cout << "Size: " << l1.size() << endl;
    cout << endl;
    cout << endl;
    if(l1.empty())
    {
        cout << "l1 is empty." << endl;
    }
    else
    {
        cout << "l1 is not empty." << endl;
    }
    cout << "Printing contents of l2..." << endl;
    //l2.printInternal();
    cout << l2 << endl;
    cout << "First object: " << l2.getFirst() << endl;
    cout << "Last object: " << l2.getLast() << endl;
    cout << "Size: " << l2.size() << endl;
    if(l2.empty())
    {
        cout << "l2 is empty." << endl;
    }
    else
    {
        cout << "l2 is not empty." << endl;
    }
    
    l1.add(4,"b");
    l1.add(3,"b");
    l1.add(2,"c");
    
    l2.add(5,"y");
    l2.add(1,"y");
    l2.add(4,"x");
    cout << "Printing contents of l1..." << endl;
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    cout << "Size: " << l1.size() << endl;
    cout << endl;
    cout << endl;
    if(l1.empty())
    {
        cout << "l1 is empty." << endl;
    }
    else
    {
        cout << "l1 is not empty." << endl;
    }
    cout << "Printing contents of l2..." << endl;
    //l2.printInternal();
    cout << l2 << endl;
    cout << "First object: " << l2.getFirst() << endl;
    cout << "Last object: " << l2.getLast() << endl;
    cout << "Size: " << l2.size() << endl;
    if(l2.empty())
    {
        cout << "l2 is empty." << endl;
    }
    else
    {
        cout << "l2 is not empty." << endl;
    }
    l1.addLast("d");
    
    cout << "Testing indexOf() function...index of first occurrence..." << endl;
    cout << "L1: " << l1 << endl;
    cout << "L2: " << l2 << endl;
    cout << "First 'b' in l1: " << l1.indexOf("b") << endl;
    cout << "First 'z' in l2: " << l2.indexOf("z") << endl;
    cout << "First 'c' in l1: " << l1.indexOf("c") << endl;
    cout << "First 'y' in l2: " << l2.indexOf("y") << endl;
    cout << "First 'a' in l1: " << l1.indexOf("a") << endl;
    cout << "First 'w' in l2: " << l2.indexOf("w") << endl;
    cout << "First 'd' in l1: " << l1.indexOf("d") << endl;
    cout << "First 'x' in l2: " << l2.indexOf("x") << endl;
    cout << "First 'q' in l1: " << l1.indexOf("q") << endl;
    cout << "First 's' in l2: " << l2.indexOf("s") << endl;
    
    
    cout << "Testing set() function..." << endl;
    cout << "l1: w at index 0..." << endl;  l1.set(0,"w");
    cout << "l1: y at index 1..." << endl;  l1.set(1,"y");
    cout << "l1: x at index 2..." << endl;  l1.set(2,"x");
    //cout << "DONE!!!!!" << endl;
    cout << "l1: y at index 3..." << endl;  l1.set(3,"y");
    cout << "l1: x at index 4..." << endl;  l1.set(4,"x");
    cout << "l1: w at index 5..." << endl;  l1.set(5,"w");
    cout << "l1: z at index 6..." << endl;  l1.set(6,"z");
    cout << "l1: y at index 7..." << endl;  l1.set(7,"y");
    cout << "DONE!!!!!!" << endl;
    
    cout << "l2: a at index 0..." << endl;  l2.set(0,"a");
    cout << "l2: b at index 1..." << endl;  l2.set(1,"b");
    cout << "l2: c at index 2..." << endl;  l2.set(2,"c");
    cout << "l2: a at index 3..." << endl;  l2.set(3,"a");
    cout << "l2: b at index 4..." << endl;  l2.set(4,"b");
    cout << "l2: c at index 5..." << endl;  l2.set(5,"c");
    cout << "l2: b at index 6..." << endl;  l2.set(6,"b");
    cout << "l2: d at index 7..." << endl;  l2.set(7,"d");
    cout << "Printing contents of l1..." << endl;
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    cout << "Size: " << l1.size() << endl;
    cout << endl;
    cout << endl;
    if(l1.empty())
    {
        cout << "l1 is empty." << endl;
    }
    else
    {
        cout << "l1 is not empty." << endl;
    }
    cout << "Printing contents of l2..." << endl;
    //l2.printInternal();
    cout << l2 << endl;
    cout << "First object: " << l2.getFirst() << endl;
    cout << "Last object: " << l2.getLast() << endl;
    cout << "Size: " << l2.size() << endl;
    if(l2.empty())
    {
        cout << "l2 is empty." << endl;
    }
    else
    {
        cout << "l2 is not empty." << endl;
    }
    

    //cout << "l2: q at index 0..." << endl;  l2.set(0,"q");
    //cout << l2 << endl;
    
    cout << "Testing overloaded assignment operator... assigning l1 to l2. ";
    cout << "Both should have contents of l2" << endl;
    l1 = l2;
    
    cout << "Printing contents of l1..." << endl;
    cout << l1 << endl;
    cout << "First object: " << l1.getFirst() << endl;
    cout << "Last object: " << l1.getLast() << endl;
    cout << "Size: " << l1.size() << endl;
    cout << endl;
    cout << endl;
    if(l1.empty())
    {
        cout << "l1 is empty." << endl;
    }
    else
    {
        cout << "l1 is not empty." << endl;
    }
    cout << "Printing contents of l2..." << endl;
    //l2.printInternal();
    cout << l2 << endl;
    cout << "First object: " << l2.getFirst() << endl;
    cout << "Last object: " << l2.getLast() << endl;
    cout << "Size: " << l2.size() << endl;
    if(l2.empty())
    {
        cout << "l2 is empty." << endl;
    }
    else
    {
        cout << "l2 is not empty." << endl;
    }
    
    /*  ***List();
        ***List( const List<T>& ) throw ( bad_alloc );
        ***~List();
        ***void add( unsigned, const T& ) throw ( bad_alloc, out_of_range );
        ***void addAll( const List<T>& ) throw ( bad_alloc );
        ***void addAll( unsigned, const List<T>& ) throw ( bad_alloc, out_of_range );
        ***void addFirst( const T& ) throw ( bad_alloc );
        ***void addLast( const T& ) throw ( bad_alloc );
        ***void clear();
        ***bool contains( const T& ) const;
        ***bool empty() const;
        ***int indexOf( const T& ) const;
        ***T& get( unsigned ) const throw ( out_of_range );
        ***T& getFirst() const throw ( NoSuchObject );
        ***T& getLast() const throw ( NoSuchObject );
        ***ListIterator<T> listIterator();
        ***ListIterator<T> listIterator( unsigned ) throw ( out_of_range );
        ***T remove( unsigned ) throw ( out_of_range );
        ***T removeFirst() throw ( NoSuchObject );
        ***T removeFirstOccurrence( const T& ) throw ( NoSuchObject );
        ***T removeLast() throw ( NoSuchObject );
        ***T removeLastOccurrence( const T& ) throw ( NoSuchObject );
        ***T set( unsigned, const T& ) throw ( out_of_range );
        ***unsigned size() const;
        ***T* toArray() const throw ( bad_alloc );
        ***const List<T>& operator=( const List<T>& ) throw ( bad_alloc );
        ***void printInternal( ostream& = cout ) const;
    */
    
    
    return 0;
}