#include <iostream>

//show array
void showArray(int *arr, int n){
    std::cout << "Mang cua ban la: \n";
    for (int i = 0; i < n; ++i)
        std::cout << arr[0] << " ";
}

int main(){
    //create 0 array method 1
    int arr1[10] = {0};

    //create 0 array method 2
    int arr2[10];
    for (int i = 0; i < 10; ++i){
        arr2[i] = 0;
    }

    // create other values array
    int arr3[10];
    std::fill_n(arr3, 10, -1); // array with fully -1

    //show array
    showArray(arr1, 10);
    return 0;
}