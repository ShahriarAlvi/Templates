//  Lower and Upper Bound Search
//  Complexity: sorting O(n) * logn
//  Sorting the array is a prerequisite

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mod 1000000007

using namespace std;

ll searchLowerBound(ll arr[], ll key, ll n)
{
    ll begin = 0;
    ll end = n - 1;
    ll index = -1, mid;

    while (begin <= end)
    {
        mid = (begin + end) / 2;                // slicing the array in half

        if (key == arr[mid])
        {
            index = mid;                        // the desired number is found
            end = mid - 1;                      /* checking if the previous index
                                                has the same number
                                                */
        }

        else if (key > arr[mid])                // the number is in the right portion
            begin = mid + 1;

        else if (key < arr[mid])                // the number is in the left portion
            end = mid - 1;
    }

    return index;                               // -1 if not found, >=0 if found
}

ll searchUpperBound(ll arr[], ll key, ll n)
{
    ll begin = 0;
    ll end = n - 1;
    ll index = -1, mid;

    while (begin <= end)
    {
        mid = (begin + end) / 2;                // slicing the array in half

        if (key == arr[mid])
        {
            index = mid;                        // the desired number is found
            begin = mid + 1;                    /* checking if the next index
                                                has the same number
                                                */
        }

        else if (key > arr[mid])                // the number is in the right portion
            begin = mid + 1;

        else if (key < arr[mid])                // the number is in the left portion
            end = mid - 1;
    }

    return index;                               // -1 if not found, >=0 if found
}

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    ll n, x, i;
    cin >> n;                                   // the size of the array

    ll arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);                         // sorting the array

    cin >> x;                                   // the desired number

    cout << "Lower Bound for " << x << ": " << searchLowerBound(arr, x, n) << endl;

    cout << "Upper Bound for " << x << ": " << searchUpperBound(arr, x, n) << endl;

    return 0;
}
