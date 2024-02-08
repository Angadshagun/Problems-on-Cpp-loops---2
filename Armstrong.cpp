// Write a program to print all armstrong number between 100 to 153

#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<< "Armstrong number between 100 to 500 is " << endl;
    for(int i = 0 ; i < 500 ; i++){
        int ans = 0 , k = i;
        while (k > 0){
            int last_digit = k % 10;
            ans += (last_digit)*(last_digit)*(last_digit);
            k /= 10 ;
        }
        if( ans == i )
            cout << ans << " ";
        
    }
    return 0;
}
