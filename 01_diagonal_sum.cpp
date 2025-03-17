#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void solve(vector<vector<int>> mat, int n)
{
    int smallest = INT_MAX, largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (mat[i][i] < smallest)
        {
            smallest = mat[i][i];
        }
        if (mat[i][i] > largest)
        {
            largest = mat[i][i];
        }
    }

    cout << "On left diagonal Smallest: " << smallest << " largest: " << largest << endl;
    smallest = INT_MAX, largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (mat[n - i - 1][n - i - 1] < smallest)
        {
            smallest = mat[i][i];
        }
        if (mat[n - i - 1][n - i - 1] > largest)
        {
            largest = mat[i][i];
        }
    }
    cout << "On right diagonal Samllest: " << smallest << " largest: " << largest << endl;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {5, 6, 7},
        {1, 2, 11}};
    solve(matrix, 3);
    return 0;
}