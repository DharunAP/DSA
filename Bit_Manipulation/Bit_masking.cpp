#include <iostream>
using namespace std;

/*
Eg: 
6 -> 110

1) 6 & 5=> 
    1 1 0
    1 0 1   => 100 = 4

2) 4 & 3=>
    1 0 0
    0 1 1   => 0

Therefore, set-bit count is 2.
*/
int count_set_bits(int n){
    int c=0;
    while(n!=0){
        n=n&(n-1);
        c++;
    }
    return c;
}

/*
Eg.
12,2
index 3 2 1 0
12->  1 1 0 0
1>>2- 0 1 0 0
12 & (1>>2) = 1 0 0 (Not equal to 0, then 1)
*/
bool check_if_a_bit_is_set(int n, int index){
    return n&(1<<index);
}

/*
Eg.
11,2
index 3 2 1 0
11->  1 0 1 1
1>>2- 0 1 0 0

12 | (1>>2) = 1 1 1 1 = 15
*/
int set_ith_bit(int n, int index){
    return n|(1<<index);
}

/*
Eg. 13,2 [2nd bit is set]

13 -> 1 1 0 1
1<<2- 0 1 0 0

13^(1<<2) = 1 0 0 1
*/
int unset_ith_bit(int n, int index){
    if(check_if_a_bit_is_set(n,index)){
        return n^(1<<index);
    }
    return n; // this is means the bit is already 0 i,e., unset
}

/*
Eg.1:  5, 0

5 ->  1 0 1
1>>0- 0 0 1

5^(1>>0) = 1 0 0

Eg.2:  5, 1

5 ->  1 0 1
1>>1- 0 1 0

5^(1>>1) = 1 1 1
*/
int toggle_bit(int n, int index){
    return n^(1<<index);
}

int main(){
    cout<<count_set_bits(5)<<" "<<__builtin_popcount(5);
    cout<<check_if_a_bit_is_set(23453254,4);
    cout<<set_ith_bit(5,0);
    cout<<unset_ith_bit(5,2);
    cout<<toggle_bit(5,1);
}