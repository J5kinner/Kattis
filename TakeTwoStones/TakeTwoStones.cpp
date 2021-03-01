#include <iostream>
#include <algorithm>
int main(void){
    int n;
    while(std::cin >> n){

        if ( n % 2 == 0)
            std::cout << n << "Bob";
        else
            std::cout << n << "Alice";
    }
    return 0;
}
