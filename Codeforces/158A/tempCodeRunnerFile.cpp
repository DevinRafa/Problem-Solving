#include <iostream>
using namespace std;

int main(){
    int n,k; int p=0;
    cin>>n;
    cin>>k;
    int c[n];

    for (int i=0; i< n; i++){
        cin>>c[i];
        if (c[i]>=c[k-1] && c[i]>0){
            p++;
        }
    }
    cout<<p;
    return 0;
}