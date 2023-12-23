#include<bits\stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int arr[6] = {12,45,23,51,19,8};
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 1; i < 6; i++)
    {
        int current = arr[i];
        int j = i-1;
        while (arr[j]>current && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

    
}