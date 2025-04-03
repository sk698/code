#include<iostream>
using namespace std;

int main(){
    int i = 5;
    int* p = &i;
    int** p1 = &p;
    cout << "The stored value at i: " << i << endl;
    cout << "The stored value at p: " << p << endl;
    cout << "The stored value at p1: " << p1 << endl;
}