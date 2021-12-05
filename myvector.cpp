#include <iostream>
#include "myvector.h"

template <class T>
MyVector<T>::MyVector(){
  arr = new T[5];
}

template <class T>
int MyVector<T>::size(){
  // int length = sizeof(arr)/sizeof(arr[0]);
  // int size = 0;
  // for (int i = 0; i < length; i++){
  //   if(arr[i] >= 0){
  //     size += 1;
  //   }
  // }

  return 0;
}

template <class T>
int MyVector<T>::capacity(){
  // int capacity = sizeof(arr)/sizeof(arr[0]);
  return 0;
}

template <class T>
bool MyVector<T>::empty(){
  return true;
}

template <class T>
void MyVector<T>::push_back(T item){
  int x = 1;
}

template <class T>
void MyVector<T>::pop_back(T n){
  int x = 1;
}

template <class T>
void MyVector<T>::pop_back(){
  int x = 1;
}

template <class T>
void MyVector<T>::clear(){
  int x = 1;
}
