#include <iostream>
using namespace std;

int main(){
    int a = 5, b = 8;
    a^=b;
    b^=a;
    a^=b;
    cout<<a<<' '<<b;
}

/*
Eg. 5, 8
a = 5, b = 8

5 ^ 8 => 0 1 0 1
         1 0 0 0  => 1 1 0 1 - 13

a = 13, b = 8
13 ^ 8=> 1 1 0 1
         1 0 0 0  => 0 1 0 1 - 5

a = 13, b = 5
13 ^ 5=> 1 1 0 1
         0 1 0 1  => 1 0 0 0 - 8

a=8, b=5.


*/