#include <iostream>
using namespace std;

int main(){
    int n,k; int p=0;
    cin>>n;
    cin>>k;
    cout<<"n: "<<n<<'\n';
    cout<<"k: "<<k<<'\n';
    int c[n];

    for (int i=0; i< n; i++){
        cin>>c[i];
        cout<<"c["<<i<<"]: "<<c[i]<<'\n';
        if (c[i]>k){
            p ++;
        }
    }
    cout<<p;
    return 0;
}