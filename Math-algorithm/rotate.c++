#include <bits/stdc++.h>
using namespace std;

int main(){
    string st="adhi";
    rotate(st.begin(),st.begin()+2,st.end()); // rotate the array or string
    cout<<st<<endl; // hiad
    
    string binary = bitset<8>(6).to_string(); // to create binary representation of 6 in 8 bit and convert it to a string.
    cout<<binary; // 00000101
    return 0;
}
