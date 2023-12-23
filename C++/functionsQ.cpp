// binary number  to decimal number. 

// #include<iostream>
// using namespace std;
// int binary_to_decimal(int n){
//     int ans = 0;
//     int converter = 1;
//     while (n>0)
//     {
//         int y = n%10;
//         ans += y*converter;
//         converter *= 2;
//         n = n/10;

//     }
//     return ans;
    

// }
// int main(){
//     cout<<"Enter the number"<<endl;
//     int n;
//     cin >> n;

//     cout<<binary_to_decimal(n) <<endl;
//     return 0;
// }

// Octal to decimal.

// #include<bits/stdc++.h>
// using namespace std;
// int octal_to_decimal(int n){
//     int ans = 0;
//     int converter = 1;
//     while (n>0)
//     {
//         int y = n%10;
//         ans += y*converter;
//         converter *= 8;
//         n = n/10;

//     }
//     return ans;
    

// }
// int main(){
//     cout<<"Enter the number"<<endl;
//     int n;
//     cin >> n;

//     cout<<octal_to_decimal(n) <<endl;
//     return 0;
// }

// Hexadecimal to decimal.

// #include<bits\stdc++.h>
// using namespace std;
// int Hexadecimal_to_decimal(string n){
//     int ans = 0;
//     int converter = 1;
//     int s = n.size();
//     for (int i = s-1; i >=0; i--)
//     {
        
//         if(n[i]>='0'&& n[i]<='9'){
//             ans += converter*(n[i]-'0');
//         }
//         else{
//             ans += converter*(n[i]-'A' + 10);
            
//         }
//         converter*=16;
//     }
//     return ans;
    

// }
// int main(){
//     cout<<"Enter the number"<<endl;
//     string n;
//     cin>>n;

//     cout<<Hexadecimal_to_decimal(n)<<endl;
//     return 0;

// }