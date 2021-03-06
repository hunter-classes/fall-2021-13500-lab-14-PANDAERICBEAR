#pragma once
#include <iostream>

template <class T>
class MyVector {
   private:
      T* arr;   // elements
      int initialCapacity = 10;
      int Size;
   public:
     //Default MyVector constructor
     MyVector();
     //Returns size of vector
     int size();
     //Returns the size of the storage space currently allocated for the vector
     int capacity();
     //Returns true is the size is 0, false if otherwise
     bool empty();
     //Appends item to end of array
     void push_back(T item);
     //Removes element at index n
     void pop_back(int n);
     //Removes element from end of array
     void pop_back();
     //Clears all elements in array; capacity stays the same
     void clear();
     //Returns the element at index i
     //ex: vector[5]
     T& operator[](int i);
};
