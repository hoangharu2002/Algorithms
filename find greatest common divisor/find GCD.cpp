#include <iostream>
using namespace std;

//highly recommend
int getGCD_method1(int a, int b){
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    while (a != b){
        if (a > b){
            if (a % b == 0)
                return b;
            a = a % b;
        }
        else{
            if (b % a == 0)
                return a;
            b = b % a;
        }
    }
    return a;
}

int getGCD_method2(int a, int b){
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a % b == 0)
        return b;
    return (b, a % b);
}

int getGCD_method3(int a, int b){
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;
    if (a > b)
        return getGCD_method3(a - b, b);
    else
        return getGCD_method3(a, b - a);
}

int getGCD_method4(int a, int b){
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    while (a != b){
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

//naive method
int getGCD_method5(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a >= b)
        for (int i = b; i > 0; --i)
            if (a % i == 0 && b % i == 0)
                return i;
    for (int i = a; i > 0; --i)
        if (a % i == 0 && b % i == 0)
            return i;
}

int main(){
    int a = 3, b = 4;
    cout << "GDC: " << getGCD_method1(a, b);    //change method here
    return 0;
}