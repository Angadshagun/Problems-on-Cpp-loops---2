// Write a cpp program to check whether a number
// can be expressed as a sum of two prime numbers.

#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
    if( n == 1)
        return false;
    for(int i = 2; i <= n-1; i++){
        if(n % i == 0)
            return false; 
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter the number " << endl;
    cin >> n;

    if(n <= 4)
        cout << "This number is not expressed as sum of two prime numbers" << endl;

    int i = 1 , d = 0;
    for(i ; i <= n/2; i++){
        if(!prime(i) || !prime(n-i))
            continue;
        else{
            cout << n << " = " << i << " + " << n-i << endl;
            d = 1;
        }

    }

    if(d == 0)
        cout << "This number cannot be expressed as the sum of two prime numbers " << endl;
    return 0;
}
