# CPP Cheat Sheet


## Table of Contents

## Data Structures

## Algorithms

### Sort
- Sort a vector
```cpp
    vector<int> nums{1,3,4,5,6};
    
    // Sort ascending
    sort(nums.begin(), nums.end());
    for (int i=0; i<nums.size(); i++) {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    // Sort decending
    sort(nums.begin(), nums.end(), greater<int>());
    for (int i=0; i<nums.size(); i++) {
        cout<<nums[i]<<" ";
    }
```

## Articles

1. [Big-O cheat sheet.](http://bigocheatsheet.com/)
2. [TopCoder tutorial.](https://www.topcoder.com/community/competitive-programming/tutorials/)
