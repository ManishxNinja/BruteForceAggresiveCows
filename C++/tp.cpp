#include<iostream>
using namespace std;
int main(){
    
    int arr[5] = {6,34,76,643,34};
    for (int i = 0; i < 4; i++)
    {
        int k = -1;
        int small = INT16_MAX;
        for (int j = i; j <5 ; j++)
        {
            if (small>arr[j])
            {
                small = arr[j];
                k = j;
            }
            
            
        }
        int temp = arr[i];
        arr[i]  = small;
        arr[k] =  temp;

        
    }
    for (int i = 0; i < 5; i++)
    {
       printf("%d ",arr[i]);
    }

    return 0;
    
}