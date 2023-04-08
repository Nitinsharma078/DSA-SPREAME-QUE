#include <iostream>
#include <vector>
using namespace std;
bool isSaf(int i, int j, int row, int col, int arr[][3], vector<vector<bool>> &visited)
{
     if (((i >= 0 && i < row) && (j >= 0 && j < col)) && (arr[i][j] == 1) && (visited[i][j] == false))
     {
          return true;
     }
     else
     {
          return false;
     }
}
void solveMaze(int arr[][3], int row, int col, int i, int j, vector<vector<bool>> &visited, vector<string> &path, string output)
{
     if (i == row - 1 && j == col - 1)
     {
          path.push_back(output);
     }
     if (isSaf(i + 1, j, row, col, arr, visited))
     {
          visited[i + 1][j] = true;
          solveMaze(arr, row, col, i + 1, j, visited, path, output + 'D');
          visited[i + 1][j] = false;
     }
     if (isSaf(i, j - 1, row, col, arr, visited))
     {
          visited[i][j - 1] = true;
          solveMaze(arr, row, col, i, j - 1, visited, path, output + 'L');
          visited[i][j - 1] = false;
     }
     if (isSaf(i, j + 1, row, col, arr, visited))
     {
          visited[i][j + 1] = true;
          solveMaze(arr, row, col, i, j + 1, visited, path, output + 'R');
          visited[i][j + 1] = false;
     }
     if (isSaf(i - 1, j, row, col, arr, visited))
     {
          visited[i - 1][j] = true;
          solveMaze(arr, row, col, i - 1, j, visited, path, output + 'U');
          visited[i - 1][j] = false;
     }
}
int main()
{
     int arr[3][3] = {{1, 0, 0},
                      {1, 1, 0},
                      {1, 1, 1}};
     int col = 3;
     int row = 3;
     vector<vector<bool>> visited(row, vector<bool>(col, false));
     visited[0][0] = "true";
     vector<string> path;
     string output = "";
     solveMaze(arr, row, col, 0, 0, visited, path, output);
     cout << "Printing the resust ->" << endl;
     for(auto i: path)
     {
          cout << i << " ";
     }
     cout << endl;
}