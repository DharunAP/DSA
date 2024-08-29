#include<bits/stdc++.h>
using namespace std;

void print_array(vector<int> array){
    cout<<"[ ";
    for(auto value : array) cout<<value<<' ';
    cout<<"]\n";
    return ;
}

void CalcSubarray(vector<int> array, int n, vector<int> current, int index){
    if(n==index) {
        print_array(current);
        return ;
    }
    else {
        CalcSubarray(array, n, current, index+1);
        current.push_back(array[index]);
        CalcSubarray(array, n, current, index+1);
        return ;
    }
}

int main(){
    vector<int> array={
        1, 2, 3
    };

    CalcSubarray(array,array.size(),{},0);
}