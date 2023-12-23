#include<bits\stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int pd = arr[1]-arr[0];// difference b/w first elements.
    int j = 2;
    int ans = 0;
    int currlen = 2;
    while (j<n)
    {
        int cd = arr[j] - arr[j-1];
        if(pd == cd)
            currlen++;
        else{
            pd = cd;
            currlen = 2;
        }
        ans = max(ans,currlen);
        j++;
    }

    cout<<ans;
    return 0;

}