
#ifndef MYVECTOR_H
#define MYVECTOR_H
class MyVector {
  private:
    int size, capacity;
    int* array;
    void assignMemory(int);

  public:
    MyVector(int);
    void push_back(int);    
};
#endif