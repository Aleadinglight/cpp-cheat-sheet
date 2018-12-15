#include "MyVector.cpp"
#include <iostream>

using namespace std;

void testInput(MyVector newVector){
    cout<<"Capacity before input: "<<newVector.capacity()<<"\n";
    for (int i=1; i<=5; i++){
        newVector.push_back(i);
    }
    cout<<"New capacity: "<<newVector.capacity()<<"\n";
    cout<<"New size: "<<newVector.size()<<"\n";
    cout<<"a[6]="<<newVector.getElementAt(6)<<"\n";
    cout<<"Elements inside vector: (1->5) \n";
    for (int i=0; i<newVector.size(); i++){
        cout<<newVector.getElementAt(i)<<" ";
    }
}

int main(){
    MyVector newVector(10);
    cout<<"Testing MyVector class: \n-------------\n";
    testInput(newVector);
    return 0;
}