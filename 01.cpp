#include <iostream>
#include <string>
using namespace std;

int main(){

    string inp;
    cout << "Enter the color of traffic light : ";
    cin >> inp;
    if(inp=="red"){
        cout << "Stop";
    }
    else if(inp=="yellow"){
        cout << "Wait";
    }
    else if(inp=="green"){
        cout << "Go";
    }
    else{
        cout << "Wrong Input";
    }



    return 0;
}