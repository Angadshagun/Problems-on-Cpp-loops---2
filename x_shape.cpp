// Write a program to print the cross pattern

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cout << "Enter number of row " << endl;
    cin >> row ;

    for(int i = 1; i <= row; i++){
        for ( int j = 1; j <= row; j++){
            if((i == j) || (i + j == row+1))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
