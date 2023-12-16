#include <iostream>

void swapMethod1(int &a, int &b){
    //The idea is using another variable to keep one of two value
    int temp = a;
    a = b;
    b = temp;
}

//highly recommend
void swapMethod2(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}

//an interesting method but can be used in some specific compiler (not inlcuding Visual Studio)
void swapMethod3(int &a, int &b){
    a = (a + b) - (b = a);
}

int main() {
    int a = 1, b = 2;
    //Print two value
    std::cout << "a = " << a << " and b = " << b;

    //Method 1
    swapMethod1(a, b);

    //Method 2
    swapMethod2(a, b);

    //Print swap result
    std::cout << "a = " << a << " and b = " << b;

    return 0;
}