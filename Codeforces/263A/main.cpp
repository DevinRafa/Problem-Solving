#include <iostream>
using namespace std;

int solution(){
    int l[5][5];
    int a=0;int b=0;
    int result;
    for (int i=0; i<5; ++i){
        for (int j=0; j<5; ++j){
            cin>>l[i][j];
        }
    }
    for (int i=0; i<5; ++i){
        for (int j=0; j<5; ++j){
            if (l[i][j]==1){
                if (i!=2&&i!=0){
                    a += i%2;
                    if (a==0){
                        a += i/2;
                    }
                }
                if (j!=2&&j!=0){
                    b += j%2;
                    if (b==0){
                    b += j/2;
                    }
                }
                if (i==0){
                    a += 2;
                }
                if (j==0){
                    b+=2;
                }
            }
            if (a<0){
                a *= -1;
            }
            if (b<0){
                b *= -1;
            }
            result = a+b;
        }
    }
    return result;
}

int main(){
    const int result = solution();
    cout<<result;

    return 0;
}