#include <bits/stdc++.h>

#include <iostream>
using namespace std;

class Solution {
   public:
    vector<int> generateRow(int n) {
        long long val = 1;
        vector<int> row;
        row.push_back(1);
        for (int i = 1; i < n; i++) {
            val = val * (n - i);
            val = val / (i);
            row.push_back(val);
        }
        return row;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 1; i <= numRows; i++) {
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};

int main() { return 0; }