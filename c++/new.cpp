#include<iostream>
using namespace std;

void Input(int arr[],int n){
    cout << "Enter the elements: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void Output(int arr[], int n){
    cout << "{";
    for(int i = 0; i < n; i++){
        if(i != 0){
            cout << ",";
        }
        cout << arr[i];
    }
    cout << "}" << endl;
}
void Insert(int arr[], int& n){
    n++;
    int a;
    cout << "Enter the index where you want to enter the element: ";
    cin >> a;
    for(int i = n-1; i >= a; i--){
        arr[i] =  arr[i-1];
    }
    cout << "Enter the number you want to enter: ";
    cin >> arr[a];

}

void Delete(int arr[], int& n){
    int a;
    cout << "Enter the index you want to delete: ";
    cin >> a;
    for(int i = a; i < n; i++){
        arr[i] = arr[i+1];
    }
    n--;
}
int main(){
    int n;
    cout << "Enter the number of element: ";
    cin >> n;
    int arr[n];
    Input(arr,n);
    Output(arr,n);
    Insert(arr, n);
    Output(arr,n);
    Delete(arr,n);
    Output(arr,n);


}