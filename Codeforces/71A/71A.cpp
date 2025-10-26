#include <iostream>
#include <string>
using namespace std;

int main(){
    string i;
    int n;

    cin>>n;
    
    for(int j=1;j<=n;j++){
        cin>>i;

        if (i.length()>10){
        cout<<i.at(0)<<i.length()-2<<i.at(i.length()-1)<<"\n";
        }
        else{
            cout<<i<<"\n";
        }
    }
    return 0;
}