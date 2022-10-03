// Given an integer array, find the maximum product of its elements among all its subsets.

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void findMaxProduct(vector<int> const &set, int &maximum)
{
    int product = 1;

    for (int j : set)
    {
        product = product * j;
    }

    if (set.size())
    {
        maximum = max(maximum, product);
    }
}

void findPowerSet(vector<int> const &S, vector<int> &set, int n, int &maximum)
{
    if (n == 0)
    {
        findMaxProduct(set, maximum);
        return;
    }

    set.push_back(S[n - 1]);
    findPowerSet(S, set, n - 1, maximum);

    set.pop_back();
    findPowerSet(S, set, n - 1, maximum);
}

int main()
{
    vector<int> S = {-6, 4, -5, 8, -10, 0, 8};
    int n = S.size();

    vector<int> set;
    int maximum = INT_MIN;

    findPowerSet(S, set, n, maximum);

    printf("The maximum product of a subset is %d", maximum);

    return 0;
}