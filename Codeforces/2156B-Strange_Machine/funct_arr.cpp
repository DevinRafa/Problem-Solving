#include <iostream>


void char_read(char * arr_f){
    std::cout << std::endl;
    for (size_t i {}; i<6; i++){
        std::cout << "arr[" << i << "]: " << arr_f[i] << std::endl;;
    }
    std::cout << std::endl;
}

void char_read2(char arr_f[]){
    std::cout << std::endl;
    for (size_t i {}; i<6; i++){
        std::cout << "f_2 arr[" << i << "]: " << arr_f[i] << std::endl;;
    }
    std::cout << std::endl;
}
int main(){
    char arr[] {'a', 'b', 'c', 'd', 'e', 'f'};

    char_read(arr);
    char_read2(arr);

    return 0;
}