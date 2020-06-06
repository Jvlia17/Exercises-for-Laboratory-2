#ifndef LIST_H
#define LIST_H

#include <iostream>
using namespace std;

class List {
private:
    int size;
    double *arr, *temp_arr, value;

public:
    List();
    List(int);
    List(int, double*);
    List(const List& c);
    ~List();

    int g_size()
    {
        return size;
    }

    void s_size(int new_size)
    {
        size = new_size;
    }

    void add_element();
    void check();
    int g_access();
    void display();
    void insert_element(int);
    void delete_element(int);
};
#endif



























/*
class List{
  public:
    typedef int elem_t;                            // The type of data held in the list
    List();                                        // Create an empty list
    List( const List & );                          // Copy constructor
    List & operator = ( const List & );            // Copy assignment operator
    void insert_front( const elem_t & );           // Insert an object at the front
    void insert_back( const elem_t & );            // Insert an object at the back
    bool not_empty(){ return tail != tail->next; } // Check if the list is not empty
    bool remove_front();                           // Remove object at the front from the list
    void remove_all();                             // Remove all objects from the list
    ~List();                                       // List destructor removes all objects from the list
  private:
    struct Node{                                   // Class to represent list node
      Node *next;                                  // Pointer to the next node
      elem_t value;                                // Data stored in the node
      Node()
        : next( this ) {}
      Node( Node * np )
        : next( np ) {}
      Node( Node * np, const elem_t & d )
        : next( np ), value( d ) {}
    };
    Node * tail;                                   // Tail of the list points to the sentinel
  public:
      // Iterator of list with facility for modifications of list elements
    class Itr{
      Node *cp;                                    // Pointer to the current element
      public:
        Itr( Node * np ) : cp( np ) {}
        void operator ++ () { cp = cp->next; }
        void operator ++ () const{
          ++const_cast<Itr &>( *this );
        }
        elem_t & operator * (){ return cp->value; }
        const elem_t & operator * () const{ return cp->value; }
        bool operator != ( const Itr & i ) const{
          return cp != i.cp;
        }
        bool operator == ( const Itr & i ) const{
          return cp == i.cp;
        }
    };
    Itr begin() const{ return Itr( tail->next ); } // Iterator at the position of first list element
    Itr end() const{ return Itr( tail ); } // Iterator at the position one after the last list element
    void copy_front( const Itr, const Itr );
    void copy_back( const Itr, const Itr );
    size_t num_entries() const;
    elem_t front() const{
      return tail->next->value;
    }
};

#endif


*/




/*
#if !defined CONSOLE_H
#define CONSOLE_H

class Console
{
private:

public: method (As a bonus points for this list, you can additionally implement
        class methods for insertion and deletion of elements (search for Singly Linked List in C++). )

Adding //Adding a new element to the list (check Dynamic Memory Allocation at the bottom)
Checking // Checking whether the list is empty
Accessing //Accessing elements of the list
Displaying //Displaying the number of elements currently in the list
Printing //Printing the list

// constructors
default_constructor //creates an empty list
paramized_constructor_1 //that creates a List of given length, with all elements initialized to 1.0
paramized_constructor_user //that creates a List of given length, with each element initialized with the value of users choosing
copy_constructor

destructor //that releases the memory used for dynamic array allocation

// You can also try to design a compound data type, that would allow to store the elements of diﬀerent types in a List (not only doubles).
};


*/










/*
 class Circle
{

//private attributes
private:
double radius;
string color;


//public methods
public:

Circle();    //default constructor
Circle(double, string); //parameterized constructor tylko rodzaj zmiennej
~Circle();
double getRadius() const;   //promień //getter
double getArea() const;    //powierzchnia
string getColor() const;  //kolor
void setColor(string);  //setter
void setRadius(double);  //setter
Circle compareArea(Circle& circle) const; //3rd exercise
};

#endif
*/
