#include<bits\stdc++.h>
using namespace std;
void addTwoNumbers(string a,string b){
    string ans = "";
    string newans = "";
    int carry = 0;
    int sum = 0;
    int i = a.size()-1; int j = b.size() - 1;
    while (i>=0 || j>=0)
    {
        sum = carry + a[i]-'0' + b[j]-'0';
        carry = sum>1? 1 : 0 ;
        ans += sum%2 == 0? '0' : '1';

        
    }
    int x = ans.size();
    while(x>=0){
        newans += ans[x-1];
        x--;
    }
    cout<<newans<<endl;
    return;
    
     
}
int main(){
    cout<<"Enter Two Strings"<<endl;
    string a;
    string b;
    cin>>a>>b;
    addTwoNumbers(a,b);
    return 0;

}