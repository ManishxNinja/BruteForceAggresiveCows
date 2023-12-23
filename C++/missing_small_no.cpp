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
    int h = pow(10,2);
    char a[h];
    for (int i = 0; i < h; i++)
    {
        a[i] = 'F';
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<0){
            continue;
        }
        a[arr[i]] = 'T';
    }
    for (int i = 0; i < h; i++)
    {
        if(a[i] == 'F'){
            cout<<i+1;
            break;
        }
    }
    return 0;
    
    
}

