#include <iostream>
using namespace std;

int fibo(int n){
    if(n==1){
        return n;
    }
    else if(n==0){
        return 0;
    }
    else{
    return fibo(n-1)+fibo(n-2);
    }
}


int main(){
    int num;
    cout << "Enter value of n : ";
    cin >> num;
    for(int i=0;i<num;i++){
        cout<<fibo(i)<<" ";
    }
    return 0;
}