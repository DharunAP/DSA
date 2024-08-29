#include<iostream>
using namespace std;

int main(){
    int n = 12;
    cout<<((n&(n-1))?"False":"True");
}