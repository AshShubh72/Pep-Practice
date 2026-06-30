#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, cols;
    if (!(cin >> rows >> cols)) {
        return 0;
    }

    vector<vector<int>> arr(rows, vector<int>(cols));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        bool first = true;
        for (int j = 0; j < cols; j += 2) {
            if (!first) {
                cout << " ";
            }
            cout << arr[i][j];
            first = false;
        }
        if (i < rows - 1) {
            cout << '\n';
        }
    }

    return 0;
}
