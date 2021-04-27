#include <iostream>
#include <vector>

using namespace std;

int main() {
    int vert;
    while(cin >> vert && vert != -1) {
        vector<vector<int>> matrix;
        matrix.resize(vert, vector<int>(vert));

        for(int i = 0; i < vert; i++) {
            for(int j = 0; j < vert; j++) {
                cin >> matrix[i][j];
            }
        }

        for(int i = 0; i < vert; i++) { //vertices
            bool weak = true;
            for(int j = 0; j < vert; j++) { //Each conection
                for(int k = 0; k < vert; k++) { //check connection connections


                    if(matrix[i][k]==1 && matrix[i][j]==1 && matrix[j][k]==1 && i!=k && i!=j && j!=k) {
                        weak = false;
                    }
                }
            }

            if(weak) {
                cout << i << " ";
            }
        }

        cout << endl;
    }
}