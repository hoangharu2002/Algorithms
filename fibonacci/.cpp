// imagine I have a fibonacci seri and my job is to find out the k-th fibo number
#include <iostream>

unsigned int fibo(unsigned int);
unsigned int fibo1(unsigned int);

int main()
{
    int n;
    std::cin >> n;
    std::cout << "So fibo tai vi tri thu " << n << " la: " << fibo(n);
    return 0;
}

unsigned int fibo(unsigned int n)
{
    return fibo1(n);
}

// ver 1: using loop without using array
unsigned int fibo1(unsigned int n)
{
    unsigned int num1 = 0, num2 = 1;
    while (n-- > 2)
    {
        num2 = num1 + num2;
        num1 = num2 - num1;
    }
    if (n == 0)
        return num1;
    if (n == 1)
        return num2;
    return num2;
}

// ver 2: another version of using name loop without using array
