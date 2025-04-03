#include<iostream>
using namespace std;


int main(){
    int arr[5] = {3,1,5,4,6};
    int* ptr = arr;
    for(int i = 0; i < 5; i++){
        cout << *arr << endl;
        *arr = *(arr+i+1);
    }
}