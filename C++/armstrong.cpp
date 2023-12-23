#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int orign = a;
    int sum = 0;
    while (a>0)
    {

        
        int no = a%10;
        sum += pow(no,3);
        a = a/10;

    }
    if (orign == sum)
    {
        cout<<"Armstrong"<<endl;
    }
    else{
        cout<<"not Armstrong"<<endl;
    }
    return 0;
    
}