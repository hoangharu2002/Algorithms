// Solution 1: using constructor and array definition
#include <iostream>

using namespace std;

class Demo
{
private:
    int num = 0;

public:
    static int count;

    Demo()
    {
        count++;
        num = count;
        cout << num << endl;
    }
};

int Demo::count = 0;

int main()
{
    Demo A[100];
    cin.get();
    return 0;
}