#include <iostream>
using namespace std;

int solution(int M, int N){
    int d=2;
    int a = M*N;
    return a/2;
}

int main(){
    int L,W;
    cin>>L;
    cin>>W;
    int result = solution(L,W);
    cout<<result;
}