#include <iostream>
#include <climits>
using namespace std;
const int MAX_COLS = 3;

class Solution
{
public:
    int DiagnolSum(int matrix[3][3], int rows, int columns)
    {
        int priDiag = 0;
        int otherDiag = 0;
        int ans;
        int j = columns - 1;
        for (int i = 0; i < rows; i++)
        {
            priDiag += matrix[i][i];   // leading diagnol
            otherDiag += matrix[i][j]; // non-leading diagnol
            j--;
        }
        if (rows % 2 == 1) ans = priDiag + otherDiag - matrix[rows / 2][rows / 2];
        else ans = priDiag + otherDiag;
        return ans;
    }

    int main()
    {
        int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        int rows = 3;
        int columns = 3;
        cout << DiagnolSum(matrix, rows, columns) << endl;

        return 0;
    }
};