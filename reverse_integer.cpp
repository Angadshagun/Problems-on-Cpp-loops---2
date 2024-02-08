//  Write a program to reverse a given integer number

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number " << endl;
    cin >> n;

    int ans = 0;
    while ( n > 0){
        int last_digit = n % 10;
        ans = ans *10 + last_digit;
        n /= 10;
    }

    cout << "Reverse number is " << ans << endl;
    return 0;
}
