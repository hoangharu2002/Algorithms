#include <iostream>

unsigned int fact(unsigned int);
unsigned int fact1(unsigned int, unsigned int = 1);
unsigned int fact2(unsigned int);

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

// ver 1: tail recursive optimized
unsigned int fact1(unsigned int n, unsigned int f)
{
start:
    if (n <= 1)
        return f;

    // return fact1(n - 1, f * n);  non-optimized

    f *= n--;   // optimized by compiler
    goto start; //
}

// ver 2: tail recursive non-optimized
unsigned int fact1(unsigned int n, unsigned int f)
{
    if (n <= 1)
        return f;

    return fact1(n - 1, f * n);
}