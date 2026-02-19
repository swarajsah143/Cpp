#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    vector<int> ans;
    unordered_set<int> s;

    int n = grid.size();
    int a = -1, b = -1;  // just initializing a and b

    // Find repeated number
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (s.find(grid[i][j]) != s.end()) {
                a = grid[i][j];
            } else {
                s.insert(grid[i][j]);
            }
        }
    }

    // Find missing number
    for (int k = 1; k <= n * n; k++) {
        if (s.find(k) == s.end()) {  // not found → missing
            b = k;
            break;
        }
    }

    ans.push_back(a);
    ans.push_back(b);

    return ans;
}

int main() {
    // Example input
    vector<vector<int>> grid = {
        {1, 3,4},
        {2, 6,7},
        {8,9,4}
    };

    vector<int> result = findMissingAndRepeatedValues(grid);

    cout << "Repeated: " << result[0] << endl;
    cout << "Missing: " << result[1] << endl;

    return 0;
}
