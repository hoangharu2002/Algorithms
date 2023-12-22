#include <iostream>

unsigned int fact(unsigned int);
unsigned int fact1(unsigned int, unsigned int = 1);

int main()
{
    unsigned int n;
    std::cout << "Nhap mot so n:";
    std::cin >> n;
    std::cout << "Giai thua cua so vua nhap: " << fact(n);
    return 0;
}

unsigned int fact(unsigned int n)
{
    return fact1(n);
}

// method 1: calculate factorial number with tail recursion optimization
unsigned int fact1(unsigned int n, unsigned int f)
{
start:
    if (n <= 1)
        return f;
    
    // return fact1(n - 1, f * n);  non-optimized

    f *= n--;       // optimized by compiler
    goto start;     //
}