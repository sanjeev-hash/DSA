
#include <bits/stdc++.h>
using namespace std;

int countDistinctPairs(vector<int> &arr, int target) {
    int n = arr.size(), count = 0;
    unordered_map<int, bool> map;
    unordered_map<int, bool> used;
    for (int i = 0; i < n; ++i) {
        int curr = arr[i];
        if(used.count(curr) > 0) {
            continue;
        }
        int to_find = target - curr;

        if (map.count(to_find) > 0) {
            count++;
            used[curr] = 1;
            used[to_find] = 1;
        }
        map[curr] = 1;
    }
    return count;
}

int main() {

    vector<int> arr1 = {1, 5, 7, -1};
    vector<int> arr2 = {1, 5, 7, -1, 5};
    vector<int> arr3 = {1, 1, 1, 1};
    vector<int> arr4 = {10, 12, 10, 15, -1, 7, 6, 5, 4, 2, 1, 1, 1};
    vector<int> arr5 = {1, 1, 9, 1, 1};
    vector<int> arr6 = {1, 4, 9, 1, 9};
    vector<int> arr7 = {1, 9, 5, 1, 5, 9};

    cout << countDistinctPairs(arr1, 6) << endl;
    cout << countDistinctPairs(arr2, 6) << endl;
    cout << countDistinctPairs(arr3, 2) << endl;
    cout << countDistinctPairs(arr4, 11) << endl;
    cout << countDistinctPairs(arr5, 10) << endl;
    cout << countDistinctPairs(arr6, 10) << endl;
    cout << countDistinctPairs(arr7, 10) << endl;
    
}
/*

TEST CASES TO TEST CODE ON

                                    all_pairs         distinct_pairs
=====================================================================
arr = {1, 1, 9, 1, 1} t = 10           4                    1
arr = {1, 4, 9, 1, 9} t = 10           4                    1
arr = {1, 9, 5, 1, 5, 9} t = 10        5                    2

*/
