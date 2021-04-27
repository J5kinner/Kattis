#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    char c;
    int wCount = 0;
    int bCount = 0;
    bool rowChk = true;
    bool chk3w = true;
    bool chk3b = true;
    int bConsec = 0;
    int wConsec = 0;
    cin >> n;
    while (cin >> c)
    {

        //vector<vector<char>> grid(n, vector<char>(n));
        char grid[n][n];
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < n; col++)
            {
                cin >> grid[row][col];
            }
        }
          

        for (int row = 0; row < n; row++)
        {
            wCount = 0;
            bCount = 0;
           

            for (int col = 0; col < n; col++)
            {
               
                bConsec = 0;
                wConsec = 0;
                if (grid[row][col] == 'W')
                {
                    wCount++ ;
                }
                if (grid[row][col] == 'B')
                {
                    bCount++ ;
                }
             


                // if (bConsec < 3 && grid[row][col] == 'B')
                // {
                //     if (grid[row + 1][col] == 'B' || grid[row - 1][col] == 'B' || grid[row][col + 1] == 'B' || grid[row][col - 1] == 'B')
                //     {
                //         bConsec++;
                //     }
                // }
                // else
                // {
                //     chk3b = false;
                // }
                // if (wConsec < 3 && grid[row][col] == 'W')
                // {
                //     if (grid[row + 1][col] == 'W' || grid[row - 1][col] == 'W')
                //     {
                //         wConsec++;
                //     }
                //      if(grid[row][col + 1] == 'W' || grid[row][col - 1] == 'W'){

                //      }
                // }
                // else
                // {
                //     chk3w = false;
                // }
                                                cout << grid[row][col] << " ";

            }
             
              if (wCount != bCount)
                {
                    rowChk = false;
                }

        }
      
    }
    // if (rowChk && chk3w && chk3b)
    // {
    //     cout << 1 << rowChk;
    // }
    // else
    // {
    //     cout << 0 << rowChk << chk3w << chk3b;
    // }
}
