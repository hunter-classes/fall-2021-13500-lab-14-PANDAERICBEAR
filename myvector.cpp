#include <iostream>
#include "myvector.h"

template <class T>
MyVector<T>::MyVector() {
   s = 10;
   arr = new T[s];
}

template <class T>
int MyVector<T>::size () {
  int sum = 0;
  for (int i = 0; i < s; i++){
    if (arr[i] != 0){
      sum += 1;
    }
  }
  return sum;
}

template <class T>
int MyVector<T>::capacity(){
  int capacity = sizeof(arr) * size;
  return capacity;
}

template <class T>
bool MyVector<T>::empty(){
  if (arr.size() == 0){
    return true;
  } else {
    return false;
  }
}

template <class T>
void MyVector<T>::push_back(T item){
  for (int i = 0; i < s; i++){
    if(arr[i] == 0){
      arr[i] = item;
      break;
    }
  }
}

template <class T>
void MyVector<T>::pop_back(int n){
  T* newArr = new T[s-1]; //new array of size - 1
  int j = 0;
  for (int i = 0; i < s; i++){
    if (i != n){
      newArr[j] = arr[i];
      j++;
    }
  }

  arr = newArr;
  s -= 1;
}

template <class T>
void MyVector<T>::pop_back(){
  pop_back(size()-1);
}

template <class T>
void MyVector<T>::clear(){
  s = 10;
  arr = new T[s];
}
