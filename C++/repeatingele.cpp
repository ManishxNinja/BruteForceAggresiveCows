#include<bits\stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    const int s = 1e2 + 2; 
    int a[s];
    for(int i = 0;i<s;i++){
        a[i] = -1;
    }

    int indx = INT16_MAX;
    int minindx = INT16_MAX;
    for (int  i = 0; i < n; i++)
    {
        if(a[arr[i]] != -1){
            indx = a[arr[i]];
        }
        a[arr[i]] = i;
        minindx = min(minindx,indx);
    }
    if(minindx == INT16_MAX){
        cout<<"-1"<<endl;
    }
    else
        cout<<minindx<<endl;
    return 0;
    

}