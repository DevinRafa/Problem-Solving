#include <iostream>
#include <string>
using namespace std;

int bitpp(int n){
    int X=0;
    string op;
    for (int i=0; i<n; ++i){
        cin>>op;
        if (op=="--X" || op=="X--"){
            X--;
        }
        else if (op=="++X" || op=="X++"){
            X++;
        }
    }
    return X;
}

int main(){
    int n;
    cin>>n;
    int result = bitpp(n);
    cout<<result;

    return 0;
}