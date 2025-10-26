#include <iostream>
using namespace std;


int main(){
    int n;
    int pvt[3];
    int screen = 0;

    cin>>n;

    for (int i=0; i<n; i++){
        int result = 0;
        for(int j=0; j<3; ++j){
            cin>>pvt[j];
            result += pvt[j];
            }
        if (result>=2){
            screen = screen + 1;
        }
    }
    cout<<screen;

    return 0;
}