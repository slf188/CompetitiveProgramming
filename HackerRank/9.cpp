#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
        /* 2 2
       3 1 5 4
       5 1 2 8 9 3
       0 1
       1 3 */
    int number, query, size, value, which, index;
    // 2 2
    cin >> number >> query;
    
    vector<vector<int>> newVector;
    for(int i = 0; i < number; i++){
        // 3 5
        cin >> size;
        vector<int> vector;
        for(int j = 0; j < size; j++){
            // 1 5 4 & 5 1 2 8 9 3
            cin >> value;
            vector.push_back(value);
        }
        newVector.push_back(vector);
    }
    
    for(int k = 0; k < query; k++){
        cin >> which >> index;
        cout << newVector[which][index] << endl;
    }
    return 0;
}
