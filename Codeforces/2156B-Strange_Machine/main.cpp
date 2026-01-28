#include <iostream>

/*
long long int machine(int value, long long int &clockwise_f, int total_machine, char arr[]){
    int iteration {0};
    // body algorithm
    while (value!=0){
        // identify the type of machine
        switch (arr[iteration]){
            case 'A':
                value -= -1;
                continue;
            case 'B':
                value /= 2;
                continue;
            default:
                break; 
        }
        // switch machine and clockwise tracker
        ++iteration;
        ++clockwise_f;
        
        // machine reach last machine
        if (iteration+1==total_machine){
            iteration = 0;
            continue;
        }
    }
    long long int clockwise_temp = clockwise_f;
    clockwise_f = 0;

    return clockwise_temp; 
}
*/

int main(){
    int n, q, t;
    long int a[q];
    long long int clockwise;
    char s[n];

    // input
    std::cin >> t;
    for (size_t i {0}; i<t; i++){
        std::cin >> n >> q;
        for (size_t j {0}; j<n; j++){
            std::cin >> s[j];
        }
        for (size_t k {0}; k<q; k++){
            std::cin >> a[k];
        }   
    }
    /*
    for (size_t a_loop {}; a_loop<q; a_loop++){
        long long int result = machine(a[a_loop], clockwise, n, s);
        std::cout << result << std::endl;
    }
    */


    return 0;
}