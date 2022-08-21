#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    vector<vector<int>> temp = matrix;
    int index = matrix.size() - 1;
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix.size(); j++) {
            matrix[j][i] = temp[index][j];
            if (j == (matrix.size() - 1)) {
                --index;
            }
        }
    }
}

int main() {
    
    cout << endl;
    system("pause");
    return 0;
}