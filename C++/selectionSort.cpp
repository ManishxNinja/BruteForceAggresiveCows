#include<bits\stdc++.h>
using namespace std;
int selectSort(int arr[],int n){
    int min = INT16_MAX;
    int s = 0;
    int indx;
    for (int j = 0; j <= n-2; j++)
    {
        
        for (int i = j; i < n; i++)
        {
            if(min>arr[i]){
                min = arr[i];
                indx = i;
            }
            
            
        }
        int temp = arr[s];
        arr[s] = min;
        arr[indx] = temp;
        s++;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;     
            
            
        
}
int main (){
    int n = 5;
    int arr[n];
    cout<<"Enter Array"<<"\n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    selectSort(arr,n);
    return 0;
    
}