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
    int k = 0;
    int mx = INT16_MIN;
    while (k<n)
    {
        mx = max(mx,arr[k]);
        cout<<mx<<endl;
        k++;
    }
    return 0;
    
    

}