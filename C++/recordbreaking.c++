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
    
    int mx = INT16_MIN;
    for(int i = 0;i<n;i++){
        // if(arr[i] == arr[0]){
        //     if(arr[i]>arr[i+1]){
        //         cout<<arr[i]<<" is recordbreaking day.";
                
        //     }
        //     mx = max(mx,arr[i]);

        // }
        if (arr[i]<n-1)
        {
            if(arr[i]>mx && arr[i]>arr[i+1]){
                    cout<<arr[i]<<"is a recordbreaking day"<<endl;
            }
            mx = max(mx,arr[i]);
        }
        else{
            if(arr[i]>mx){
                cout<<arr[i]<<"is a record breaking day";

            }
            break;

        }
        
    }
    return 0;
}