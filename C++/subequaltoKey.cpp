#include<bits\stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int key;
    cin>>key;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int s = 0;
    int e = 0;
    int ans = 0;


    while (e<n)// 1 2 3 8
    {
        ans += arr[e];
        if (ans>key)
        {
            ans -= arr[s];
            s++;
            
        }
        if (ans == key)
        {
            cout<<s<<" "<<e<<endl;
            break;
        }
        e++;
           
        
        
    }

    return 0;
    
    
}