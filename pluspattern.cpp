//  Write a program to print + pattern given below:

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the rows " << endl;
    cin >> n;

    for(int i = 1; i <= n; i++){

        for ( int j = 1; j <= n; j++){
            if ( i == (n+1)/2 || i == (n/2)+1 || j == (n/2)+1 || j == (n+1)/2)
                cout << "*";
            else
                cout << " "; 
        }

        cout << endl;
    }
    return 0;
}
