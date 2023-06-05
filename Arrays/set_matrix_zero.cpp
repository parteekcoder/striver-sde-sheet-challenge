#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    // approch 1
    //  void setZeroes(vector<vector<int>> &matrix)
    //  {
    //      int n = matrix.size();
    //      vector<bool> row(n, false);
    //      vector<bool> col(n, false);
    //      for (int i = 0; i < n; i++)
    //      {
    //          for (int j = 0; j < n; j++)
    //          {
    //              if (matrix[i][j] == 0)
    //              {
    //                  row[i] = true;
    //                  col[j] = true;
    //              }
    //          }
    //      }
    //      for (int i = 0; i < n; i++)
    //      {
    //          for (int j = 0; j < n; i++)
    //          {
    //              if (row[i] || col[j])
    //                  matrix[i][j] = 0;
    //          }
    //      }
    //  }
    void setZeroes(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();

        bool fr = false, fc = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                    if (i == 0)
                        fr = true;
                    if (j == 0)
                        fc = true;
                }
            }
        }
        for (int i = n - 1; i >= 1; i--)
        {
            for (int j = m - 1; j >= 1; j--)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
        }

        if (fr)
        {
            for (int i = 0; i < m; i++)
                matrix[0][i] = 0;
        }
        if (fc)
        {
            for (int i = 0; i < n; i++)
                matrix[i][0] = 0;
        }
    }
};

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n, 0));
    Solution obj = Solution();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; i++)
        {
            cin >> arr[i][j];
        }
    }
    obj.setZeroes(arr);
    return 0;
}