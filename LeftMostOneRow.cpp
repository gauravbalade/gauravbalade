#include <iostream>
#include <vector>
using namespace std;

int LeftMostOneRow(vector<vector<int>>& v) {
    int maxOnesRow = -1; // Initialize to -1 (in case no row has any 1s)
    int j = v[0].size() - 1; // Start from the last column

    // Traverse each row
    for (int i = 0; i < v.size(); i++) {
        while (j >= 0 && v[i][j] == 1) {
            // Move left until we find a 1 or reach the beginning of the row
            j--;
            maxOnesRow = i; // Update the row index
        }
    }

    return maxOnesRow;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> vec(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c;
            cin >> c;
            vec[i][j] = c - '0'; // Convert character to integer (0 or 1)
        }
    }

    cout << LeftMostOneRow(vec) << endl;
    return 0;
}
