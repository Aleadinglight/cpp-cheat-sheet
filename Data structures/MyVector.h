
#ifndef MYVECTOR_H
#define MYVECTOR_H
class MyVector {
  private:
    int _size, _capacity;
    int* _array;
    void assignMemory(int);

  public:
    MyVector();
    MyVector(int);
    int size();
    int capacity();
    bool is_empty();
    void push_back(int);
    int getElementAt(int index);    

};
#endif