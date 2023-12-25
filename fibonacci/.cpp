#include <iostream>

unsigned int *fi = new unsigned int[100];

unsigned int fibo(unsigned int);
unsigned int fibo1(unsigned int);
unsigned int fibo2(unsigned int);
unsigned int fibo3(unsigned int);

int main()
{
    int n;
    std::cin >> n;
    std::cout << "So fibo tai vi tri thu " << n << " la: " << fibo(n);
    delete[] fi;
    return 0;
}

unsigned int fibo(unsigned int n)
{
    return fibo1(n);
}

// ver 1: using loop without using array

unsigned int fibo1(unsigned int n)
{

    unsigned int num1 = 1, num2 = 0;

    while (n > 1)
    {
        num2 = num1 + num2;
        num1 = num2 - num1;
        --n;
    }

    return num2;
}