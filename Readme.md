# 

## Notes

### [Data Structures](../master/Data%20structures)

1. Dynamic array

    ```c++
    int* a = NULL;   // Pointer to int, initialize to nothing.
    int n;           // Size needed for array
    cin >> n;        // Read in the size
    a = new int[n];  // Allocate n ints and save ptr in a.
    for (int i=0; i<n; i++) {
        a[i] = 0;    // Initialize all elements to zero.
    }
    . . .  // Use a as a normal array
    delete [] a;  // When done, free memory pointed to by a.
    a = NULL;     // Clear a to prevent using invalid memory reference.
    ```

2. [Implement of a Vector](../master/Data%20structures/MyVector.cpp) (mutable array with automatic resizing):
    - Constructor auto assign dynamic memory. Starting from 16 as default, use power of 2 as capacity.
    - Deconstructor to delete pointer array, prevent memory leak.
    - size(): Number of items inside.
    - capacity(): Capacity of the array inside.
    - getElementAt(): Return element at given index.
    - delete(index): Delete item at index.
    - assignMemory(): Private function used to manage memory between states of the Vector.


## Articles

1. [Big-O cheat sheet.](http://bigocheatsheet.com/)
2. [TopCoder tutorial.](https://www.topcoder.com/community/competitive-programming/tutorials/)
