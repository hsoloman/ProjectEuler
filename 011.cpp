#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    ifstream file("input.txt");
    vector<vector<int> > grid(20, vector<int>(20));
    int temp;
    
    for (int i = 0 ; i < 20 ; i++){
        for (int j = 0 ; j < 20 ; j++){
            file >> temp;
            grid[i][j] = temp;
        }
    }
    
    int greatest = -99999999;
    for (int i = 0 ; i < 20 ; i++){
        for (int j = 0 ; j < 20 ; j++){
            
            if (i + 3 < 20){
                int temp = 1;
                for (int x = 0 ; x < 4 ; x++){
                    temp *= (long long)grid[i+x][j]; 
                }
                if (temp > greatest) greatest = temp;
            }
            
            if (j + 3 < 20){
                int temp = 1;
                for (int x = 0 ; x < 4 ; x++){
                    temp *= grid[i][j+x]; 
                }
                if (temp > greatest) greatest = temp;
            }
            
            if (i+3<20 && j+3<20){
                int temp = 1;
                for (int x = 0 ; x < 4 ; x++){
                    temp *= grid[i+x][j+x]; 
                }
                if (temp > greatest) greatest = temp;
            }
            
            if (i-3 >=0 && j+3<20){
                int temp = 1;
                for (int x = 0 ; x < 4 ; x++){
                    temp *= grid[i-x][j+x];
                    if (temp > greatest) greatest = temp;
                }
            }
        }
    }

    cout << greatest << endl;
    return 0;
}
