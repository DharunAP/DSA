#include <bits/stdc++.h>
using namespace std;
int main() {
    int x;
    cin>>x;
    if(pow(10,log10(x)/log10(10))==x) cout<<"true";
    else cout<<"false";
    return 0;
}