//  Bisection Method: Binary Search to find square root
//  A custom function to find the square root of a number
//  It can be done in two ways: Precision based, and Fixed steps based

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mod 1000000007

using namespace std;

float squareRoot(ll n)                      //precision based
{
    double low = 0.0;
    double high = n;
    double mid;                             //the square root lies between 0 and n

    while (high - low > 0.0000001)
    {
        mid = (low + high) / 2;             // slicing the number in half
        
        if (mid * mid > n)
            high = mid;                     // the desired number is less than or equal to mid
        
        else            
            low = mid;                      // the desired number is greater than or equal to mid 
    
    }
    return mid;                             // square root of the number                           
}

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    ll n;
    cin >> n;                               
    
    cout << "The square root of " << n << " is: " << squareRoot(n) << endl;

    return 0;
}


// float squareRoot(ll n)                      // fixed steps based
// {
//     double low = 0.0;
//     double high = n;
//     double mid;                             // the square root lies between 0 and n
//     int i = 0;

//     while (i < 64)                          // the loop will run for exactly 64 times
//     {
//         mid = (low + high) / 2;             // slicing the number in half
        
//         if (mid * mid > n)
//             high = mid;                     // the desired number is less than or equal to mid
        
//         else            
//             low = mid;                      // the desired number is greater than or equal to mid 
    
//         i++;
//     }
//     return mid;                             // square root of the number                           
// }
