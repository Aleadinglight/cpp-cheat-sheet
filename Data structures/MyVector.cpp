#include "MyVector.h"
#include <iostream>

MyVector::MyVector() {
    MyVector(16);
}

MyVector::MyVector(int capacity) {
    // Capacity start from 2^4 elements
    if (capacity<16){
        _size = capacity;
        capacity = 16;
    }
    assignMemory(capacity);
}

void MyVector::assignMemory(int capacity){
    this->_capacity = capacity;
    // Create a new dynamic array
    _array = new int[capacity]; 
    for (int i=0; i<capacity; i++){
        *(_array+i) = 0;
    }
}

void MyVector::push_back(int input){
    // If the size exceed the capacity
    if (_size>_capacity){
        // Double the capacity
        _capacity*=2;
        assignMemory(_capacity);
    }
    *(_array+_size) = input;
    _size++;
}

int MyVector::getElementAt(int index){
    if (index>=_size){
        std::cout<<"The index value exceed Vector's size ("<<_size<<")\n";
        throw;
    }
    return *(_array+index);
}

int MyVector::size(){
    return _size;
}

int MyVector::capacity(){
    return _capacity;
}

bool MyVector::is_empty(){
    if (_size>0)
        return true;
    return false;
}