#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int last = 0;
    while (a>0)
    {
        last = last*10;
        last += a%10;
        a = a/10;

    }
    cout<<last<<endl;
    return 0;
    
}