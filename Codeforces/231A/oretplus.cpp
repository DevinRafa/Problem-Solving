#include <iostream>
using namespace std;


int main(){
    int n;
    int pvt[3];
    int screen = 0;
    cout<<"screen: "<<screen<<"\n";

    cin>>n;

    for (int i=0; i<n; i++){
        int result = 0;
        for(int j=0; j<3; ++j){
            cin>>pvt[j];
            result += pvt[j];
            cout<<"result: "<<result<<"\n";
        }
        if (result>=2){
            cout<<"screen before: "<<screen<<endl;
            screen = screen + 1; 
            cout<<"screen after: "<<screen<<endl;
    }
        
    }
    cout<<screen;

    return 0;
}