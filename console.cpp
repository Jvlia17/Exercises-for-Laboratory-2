#include "console.h"

List::List()
{
    arr = new (nothrow) double[size];
    arr[0] = 0.0;
    size = 1;
    display();
}

List::List(int arr_size)
{
    size = arr_size;
    arr = new (nothrow) double[size];
    for (int i = 0; i < arr_size; i++) {
        arr[i] = (1.0);
    }
    display();
}

List::List(int arr_size, double* new_arr)
{
    size = arr_size;
    arr = new (nothrow) double[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter the number: ";
        cin >> arr[i];
    }
    cout << endl;
}

List::List(const List& prev)
{
    size = prev.size;
    for (int i = 0; i < size; i++) {
        this->arr[i] = prev.arr[i];
    }
}

List::~List()
{
    delete[] arr;
}

int List::g_access()
{
    int position;
    cout << "Number at which position do you want to delete?? ";
    cin >> position;
    while (cin.fail() || position < 0 || position >= size) {
        cin.clear();
        cin.ignore();
        cout << "Invalid value, try again." << endl;
        cin >> position;
    }

    cout << "Position " << position << ": " << arr[position] << "\n\n";
    return position;
}

void List::add_element()
{
    double new_element;
    cout << "Enter a new number: ";
    cin >> new_element;
    double* temp_arr = new (nothrow) double[size + 1];
    for (int i = 0; i < size; i++) {
        temp_arr[i] = arr[i];
    }
    size++;
    delete[] arr;
    arr = temp_arr;
    arr[size - 1] = new_element;
    cout << endl;
    display();
}

void List::delete_element(int position)
{
    temp_arr = new (nothrow) double[size - 1];
    for (int i = 0; i < position; i++) {
        temp_arr[i] = arr[i];
    }
    for (int i = position; i < size; i++) {
        temp_arr[i] = arr[i + 1];
    }
    size--;
    delete[] arr;
    arr = temp_arr;
    cout << "Deleted successfully!" << endl;
    display();
}

void List::check()
{
    if (size == 0) {
        cout << "There is no numbers in this list" << endl;
    }
    else {
        cout << "There are numbers in this list" << endl;
    }
}

void List::display()
{
    cout << "This is your numbers: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "Position " << i << ": " << arr[i] << endl;
    }
    cout << endl;
}

void List::insert_element(int position)
{
    double new_input;
    temp_arr = new (nothrow) double[size + 1];
    for (int i = 0; i < position; i++) {
        temp_arr[i] = arr[i];
    }
    cout << "Enter new number: ";
    cin >> new_input;
    temp_arr[position] = new_input;
    for (int i = position; i < size; i++) {
        temp_arr[i + 1] = arr[i];
    }
    size++;
    delete[] arr;
    arr = temp_arr;
    display();
}

