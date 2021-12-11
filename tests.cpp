#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "myvector.cpp"

TEST_CASE("Integers"){
  MyVector<int> vector;
  //checking initial size of vector
  CHECK(vector.size() == 0);
  //checking initial capacity of vector
  CHECK(vector.capacity() == 10);

  //adding 11 ints to vector
  for(int i = 1; i <= 11; i++){
    vector.push_back(i);
  }
  //checking size and capacity of vector
  CHECK(vector.size() == 11);
  CHECK(vector.capacity() == 20);

  //removing last element in vector
  vector.pop_back();
  CHECK(vector.size() == 10);
  CHECK(vector.capacity() == 20);

  //removing element at 5th index
  CHECK(vector[5] == 6);
  vector.pop_back(5);
  CHECK(vector[5] == 7);
  CHECK(vector.size() == 9);

  //vector is not empty
  CHECK(!vector.empty());

  //clearing vector
  vector.clear();

  //vector is empty
  CHECK(vector.empty());
}

TEST_CASE("Strings"){
  MyVector<std::string> vector;
  //checking initial size of vector
  CHECK(vector.size() == 0);
  //checking initial capacity of vector
  CHECK(vector.capacity() == 10);

  //adding 5 strings to vector
  vector.push_back("Hi");
  vector.push_back("My");
  vector.push_back("Name");
  vector.push_back("Is");
  vector.push_back("Eric");
  //checking size and capacity of vector
  CHECK(vector.size() == 5);
  CHECK(vector.capacity() == 10);

  //removing last element in vector
  vector.pop_back();
  CHECK(vector.size() == 4);

  //removing element at 3rd index
  CHECK(vector[3] == "Is");
  vector.pop_back(3);
  CHECK(vector[3] == "");
  CHECK(vector.size() == 3);

  //vector is not empty
  CHECK(!vector.empty());

  //clearing vector
  vector.clear();

  //vector is empty
  CHECK(vector.empty());
}
