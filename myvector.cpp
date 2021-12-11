#include <iostream>
#include "myvector.h"

template <class T>
MyVector<T>::MyVector() {
   Size = 0;
   arr = new T[initialCapacity];
}

template <class T>
int MyVector<T>::size () {
  return Size;
}

template <class T>
int MyVector<T>::capacity(){
  return initialCapacity;
}

template <class T>
bool MyVector<T>::empty(){
  if (Size == 0){
    return true;
  } else {
    return false;
  }
}

template <class T>
void MyVector<T>::push_back(T item){
  if (Size < initialCapacity){
    arr[Size] = item;
  } else {
    //create a new array of double the size
    T* newArr = new T[initialCapacity * 2];

    //fill newArr with current arr contents
    for (int i = 0; i < initialCapacity; i++){
      newArr[i] = arr[i];
    }

    //update initialCapacity variable
    initialCapacity *= 2;

    arr = newArr;
    arr[Size] = item;
  }
  Size += 1;
}

template <class T>
void MyVector<T>::pop_back(int n){
  T* newArr = new T[initialCapacity];

  //fill newArr with arr contents except at index n
  int j = 0;
  for (int i = 0; i < initialCapacity; i++){
    if (i != n){
      newArr[j] = arr[i];
      j++;
    }
  }

  arr = newArr;
  Size -= 1;
}

template <class T>
void MyVector<T>::pop_back(){
  pop_back(Size-1);
}

template <class T>
void MyVector<T>::clear(){
  Size = 0;
  arr = new T[initialCapacity];
}

template <class T>
T& MyVector<T>::operator[] (int i) {
  return arr[i];
}
