// Write a cpp program to print a triangle of prime numbers upto given number of lines of the triangle

#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
    for(int i = 2; i <= n-1; i++){
        if(n % i == 0)
            return false; 
    }
    return true;
}

int main()
{
    int row;
    cout << "Enter the number of row " << endl; 
    cin >> row;

    int ans = 2;
    for( int i = 1; i <= row; i++){
        for( int j = 1; j <= row-i ; j++){
            cout << " ";
        }

        for( int j = 1; j <= i; j++ ){
            
            cout << ans << " ";
            ans++;
            while(!prime(ans))
                ans++;
        }

        cout << endl;
    }
    return 0;
}
