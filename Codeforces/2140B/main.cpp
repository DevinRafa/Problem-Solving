#include <iostream>
#include <string>
using namespace std;

long long int solution(string sx){
    long long int ix = stoll(sx);

    string sy = "1";
    string sxy = sx+sy;
    long long int ixy = stoll(sxy);

    long long int iy = stoll(sy);
    long long int pxy = ix+iy;


    while(ixy%pxy!=0){
            iy++;
            pxy = ix+iy;
            sy = to_string(iy);
            sxy = sx+sy;
            ixy = stoll(sxy);
    }
    return iy;
}

int main(){
    int t;
    cin>>t;
    string sx;

    for (int i=0; i<t; i++){
        cin>>sx;
        long long int result = solution(sx);
        cout<<result<<"\n";
    }


    return 0;
}