# CPP Cheat Sheet


## Table of Contents

## Data Structures

### Map

- Using `unordered_map`

```cpp
	unordered_map<string, string> umap = {
		{"RED", "#FF0000"},
		{"GREEN", "#00FF00"}
	};
	
	// Output the key and value of map
	for (auto color: umap) {
		cout<<color.first<<" "<<color.second<<endl;
	}
```
- Using `iterator`
```cpp
	map<int, string> my_map;
    my_map[1] = "first";
    my_map[2] = "second";
    
    for (map<int, string>::iterator it=my_map.begin(); it!= my_map.end(); it++) {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
```

## Algorithms

### Sort
- Sort a `vector`
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
