#include <iostream>

using namespace std;

int nSum(int n){
    if(n==0){
        return 0;
    }
    return n+nSum(n-1);
}

int main(){
    int num;
    cout << "Enter the value of n : ";
    cin >> num;
    int sum = nSum(num);
    cout << "The sum of "<<num<<" natural numbers is "<<sum;
    return 0;
}