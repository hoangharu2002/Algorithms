#include <iostream>
using namespace std;

//naive approach
bool checkPrimeNumber_method1(int x)
{
    if (x == 0 || x == 1)
        return false;
    for (int i = 2; i * i <= x; ++i)
        if (x % i == 0)
            return false;
    return true;
}

int main(){
    int x;
    cout << "X is prime number ? => " << checkPrimeNumber_method1(x);
    return 0;
}