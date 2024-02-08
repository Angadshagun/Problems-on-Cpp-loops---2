// Write a program to calculate the factorial of a number

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number " << endl;
    cin >> n;

    int ans = 1;
    for ( int i = 1; i <= n ; i++){
        ans *= i;
    }
    cout << "Your Output is " << ans;
    return 0;
}
