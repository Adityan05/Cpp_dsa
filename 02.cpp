#include <iostream>
using namespace std;

int max(int a,int b){
    if(a>b){
        return a;
    }
    else if(a<b){
        return b;
    }
    else{
        return -1;
    }
}

int min(int a,int b){
    if(a>b){
        return b;
    }
    else if(a<b){
        return a;
    }
    else{
        return -1;
    }
}

int main(){

    int a;
    int b;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    int maxn = max(a,b);
    int minn = min(a,b);
    if(maxn==-1){
        cout << "Both numbers are equal";
    }
    else{
        cout << "Maximum number is "<<maxn<<endl;
        cout << "Minimum number is "<<minn;
    }

    return 0;
}