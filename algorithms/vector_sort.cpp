#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums{1, 3, 4, 5, 6};

    // Sort ascending
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    // Sort decending
    sort(nums.begin(), nums.end(), greater<int>());
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    return 0;
}