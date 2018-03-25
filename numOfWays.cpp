// Number of ways in a grid of NxM from (1,1) to (N,M)
#include "<bits stdc++>.h" // Make sure to use <bits/stdc++.h> since mine is a local header file
using namespace std;
int n,m;
int solve(int i, int j)
{
    if(i==n || j==m) // As The Number of ways from the last row or last column to the end point
    {                // (n,m) will always be 1.
        return 1;
    }
    return solve(i,j+1) + solve(i+1,j);// Otherwise we know that to reach (n,m) from (i,j)
                                      // number of paths will be the sum of (i,j+1)[right] + (i+1,j)[up]
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cout<<solve(1,1)<<"\n";
    }
    return 0;
}
