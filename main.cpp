#include <iostream>
#include "console.h"
using namespace std;

int main()
{
    int array_size;
    cout << "Hello! How many numbers will be in your array?: ";
    cin >> array_size;
    double* new_array = new (nothrow) double[array_size];
    List L1(array_size, new_array);
    delete[] new_array;
    L1.add_element();
    L1.check();
    cout << "Size of the array: " << L1.g_size() << endl << endl;
    L1.display();
    L1.delete_element(L1.g_access());
    cout << "Size of the array: " << L1.g_size() << endl;
    cout << "The program is closing" << endl;
    return 0;
}


























/*
void print_list( const List :: Itr b, const List :: Itr e ){
  for( ; b != e ; ++b )
    cout << *b << ' ';
  cout << endl;
}

int main(){
  List lst;

  lst.insert_front( 8 );
  lst.insert_front( -14 );
  lst.insert_back( 100 );
  lst.insert_back( 120 );
    // Iterate through list objects and print them out
  const List :: Itr e = lst.end();
  for( List :: Itr b = lst.begin() ; b != e; ++b )
    cout << *b << ' ';
  cout << endl;
  List :: Itr b = lst.begin();
  ++b;
  *b = 6;    // Modify the second element
  const List :: Itr i = b;
  ++i;
  for( b = lst.begin() ; b != e; ++b )
    cout << *b << ' ';
  cout << endl;
  cout << "print_list() " << endl;
  print_list( lst.begin(), lst.end() );
    // Do the same with const iterator
  const List :: Itr ce = lst.end();
  for( const List :: Itr cb = lst.begin() ; cb != ce; ++cb )
    cout << *cb << ' ';
  cout << endl;
  List :: Itr cb = lst.begin();
  ++cb;
  cout << *cb << endl;
  List lst1;
  lst1.insert_front( 1 );
  lst1.insert_front( 2 );
  lst1.insert_front( 3 );
  cout << "Elements of lst1" << endl;
  for( const List :: Itr cb = lst1.begin(), ce = lst1.end() ; cb != ce; ++cb )
    cout << *cb << ' ';
  cout << endl;
  // Insert elements of lst at the front of lst1
  lst.copy_front( lst1.begin(), lst1.end());
  cout << "Elements of lst after copying of elements of lst1 at the front" << endl;
  for( const List :: Itr cb = lst.begin(), ce = lst.end() ; cb != ce; ++cb )
    cout << *cb << ' ';
  cout << endl;
  cout << "lst contains " << lst.num_entries() << " objects" << endl;
  cout << "lst1 contains " << lst1.num_entries() << " objects" << endl;
  cout << "Creating lst2 which is a copy of lst" << endl;
  List lst2( lst );
  cout << "lst2 contains " << lst2.num_entries() << " objects" << endl;
  for( const List :: Itr cb = lst2.begin(), ce = lst2.end() ; cb != ce; ++cb )
    cout << *cb << ' ';
  cout << endl;
  cout << "Assign lst1 to lst2" << endl;
  lst2 = lst1;
  cout << "Now lst2 contains " << lst2.num_entries() << " objects" << endl;
  for( const List :: Itr cb = lst2.begin(), ce = lst2.end() ; cb != ce; ++cb )
    cout << *cb << ' ';
  cout << endl;
  cout << "First element of lst2: " << lst2.front() << endl;
  lst.copy_back( lst2.begin(), lst2.end() );
  cout << "Now lst contains " << lst.num_entries() << " objects" << endl;
  for( const List :: Itr cb = lst.begin(), ce = lst.end() ; cb != ce; ++cb )
    cout << *cb << ' ';
  cout << endl;
  lst.copy_back( lst2.begin(), lst2.end() );
  cout << "Now lst contains " << lst.num_entries() << " objects" << endl;
  for( const List :: Itr cb = lst.begin(), ce = lst.end() ; cb != ce; ++cb )
    cout << *cb << ' ';
  cout << endl;
  return 0;
}



*/











/*
const int n=100;

int main()
{
double newradius;
string newcolor;

int i=0, size;
int *ptr;

cout<<"How many elements do you want? ";
cin>>size;

ptr=new(nothrow) int[n];
if (ptr==NULL) cout<<"Something is wrong with the memory!"<<endl;
else
{
    for (i=0; i<size; i++)
    {   cout<<endl;
        cout<<"Enter the radius: ";
        cin>>newradius;
        cout<<"Enter the color: ";
        cin>>newcolor;
        cout<<endl;
        Circle c[i];
        c[i].setColor(newcolor);
        c[i].setRadius(newradius);

        cout<<"This is a "<<c[i].getColor()<<" circle, with the radius of "<<newradius<<" and the area of "<<c[i].getArea()<<endl;

    }

    delete[]ptr;
    ptr=NULL;
}

return 0;
}
*/
