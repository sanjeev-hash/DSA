
#include <bits/stdc++.h>
using namespace std;

int countPairs(vector<int> &arr, int target) {
    int n = arr.size(), count = 0;
    unordered_map<int, int> map;
    for (int i = 0; i < n; ++i) {
        int curr = arr[i];
        int to_find = target - curr;

        if (map.count(to_find) > 0) {
            count += map[to_find];
        }
        map[curr]++;
    }
    return count;
}

int main() {

    vector<int> arr1 = {1, 5, 7, -1};
    vector<int> arr2 = {1, 5, 7, -1, 5};
    vector<int> arr3 = {1, 1, 1, 1};
    vector<int> arr4 = {10, 12, 10, 15, -1, 7, 6, 5, 4, 2, 1, 1, 1};

    cout << countPairs(arr1, 6) << endl;
    cout << countPairs(arr2, 6) << endl;
    cout << countPairs(arr3, 2) << endl;
    cout << countPairs(arr4, 11) << endl;

}

/*

TEST CASES TO TEST CODE ON

                                    all_pairs         distinct_pairs
=====================================================================
arr = {1, 1, 9, 1, 1} t = 10           4                    1
arr = {1, 4, 9, 1, 9} t = 10           4                    1
arr = {1, 9, 5, 1, 5, 9} t = 10        5                    2

*/
