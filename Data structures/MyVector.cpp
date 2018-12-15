#include "MyVector.h"

MyVector::MyVector(int capacity) {
     
    assignMemory(capacity);
}

void MyVector::assignMemory(int capacity){
    this->capacity = capacity;
    array = new int[capacity]; 
    for (int i=0; i<capacity; i++){
        array[i] = 0;
    }
}

void MyVector::push_back(int input){
    if (size>capacity){
        int a = 10;
  int b = 20;
  int x;
  x = a, b;
    }
}