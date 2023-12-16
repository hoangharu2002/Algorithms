#include <iostream>
using namespace std;

//The idea is using GCD to reduce the fraction
//You need to improve my code to make it best

int getGCD(int a, int b){
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    while(a != b){
        if (a > b){
            if (a % b == 0)
                return b;
            a %= b;
        }
        else{
            if (b % a == 0)
                return a;
            b %= a;
        }
    }
    return a;
}

int main(){
    int x, y; //fraction (x/y)
    cin >> x >> y;
    int gcd = getGCD(x, y);
    cout << "Reduced fraction: " << x / gcd << "/" << y / gcd;
    return 0;
}