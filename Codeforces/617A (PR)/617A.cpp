#include <iostream>
using namespace std;

int main(){
    int x,sisa;
    int move=0;
    cin>>x;

    if (x>= 5){
        sisa=x%5;
        move=x/5;
        if (sisa>= 4){
            sisa=sisa%4;
            move+=sisa/4;
            if (sisa>= 3){
                sisa=sisa%3;
                move+=sisa/3;
            }
            else if (sisa>= 2){
                sisa=sisa%2;
            }
            else if (sisa>= 1){
                move+=sisa/1;
            }
        }
        else if (sisa>= 3){
            sisa=sisa%3;
            move+=sisa/3;
            if (sisa>= 2){
                sisa=sisa%2;
                move+=sisa/2;
            }
            else if (sisa>= 1){
                move+=sisa/1;
            }
        }
        else if (sisa>= 2){
            sisa=sisa%2;
            move+=sisa/2;
            if (sisa>= 1){
                move+=sisa/1;
            }
        }
        else if (sisa>= 1){
            move+=sisa/1;
        }
    }
    else if (x>= 4){
        sisa=x%4;
        move=x/4;
    }
    else if (x>= 3){
        sisa=x%3;
        move=x/3;
    }
    else if (x>= 2){
        sisa=x%2;
        move=x/2;
    }
    else if (x>= 1){
        move=x/1;
    }
    cout<<move;
    return 0;
}