#include <iostream>
#include "myvector.cpp"

int main() {
  MyVector<int> vect;  // stack of ints
  // manipulate int stack
  std::cout << vect.size() << std::endl;
  // std::cout << "------------------------" << std::endl;
  vect.push_back(1);
  vect.push_back(2);
  vect.push_back(3);
  vect.push_back(4);
  vect.push_back(5);
  vect.push_back(6);
  vect.push_back(7);
  vect.push_back(8);
  vect.push_back(9);
  vect.push_back(10);
  std::cout << vect.size() << std::endl;
  vect.pop_back();
  std::cout << vect.size() << std::endl;
  vect.clear();
  std::cout << vect.size() << std::endl;
}
