// Write a program to print alphabet diamond pattern

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  row;
    cout << "Enter the alphabet odd number " << endl;
    cin >> row;

    int row1 = (row - 1)/2;
    int alpha = 65;

    for(int i = 1; i <= row1; i++){
        alpha = 65;
        for ( int j = 1; j <= row1 - i +1; j++)
            cout << " ";
        
        for ( int j = 1; j <= 2*i-1; j++){
            cout << char(alpha);
            alpha++;
        }

        for ( int j = 1; j <= row1 - i +1; j++)
            cout << " ";
        
        cout << endl;
    }

    for ( int i = 1; i <= row; i++)
        cout << char(64+i);
        
    cout << endl;

    for(int i = 1; i <= row1; i++){
        alpha = 65;

        for ( int j = 1; j <= i; j++)
            cout << " ";
        
        for ( int j = 1; j <= row - 2*i; j++){
            cout << char(alpha);
            alpha++;
        }

        for ( int j = 1; j <= i; j++)
            cout << " ";
        
        cout << endl;
    }

    return 0;
}
