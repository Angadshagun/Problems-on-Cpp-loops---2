// Rectangular Pattern

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cout << "Enter Number of Rows and columns" <<endl;
    cin >> row >>col;
    for(int i = 1;i <=row;i++){
        for(int j = 1;j <= col;j++){
            cout<<'*';
        }
        cout << endl;
    }
    return 0;
}
