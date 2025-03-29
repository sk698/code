#include <iostream>
using namespace std;

void Input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element of " << i << "th element: ";
        cin >> arr[i];
    }
}
void Output(int arr[], int n)
{
    cout << "{";
    for (int i = 0; i < n; i++)
    {
        if (i != 0)
        {
            cout << ",";
        }
        cout << arr[i];
    }
    cout << "}" << endl;
}

int BinarySearch(int arr[], int n)
{
    int t;
    cout << "Enter the element you want to search: ";
    cin >> t;
    int s = 0;
    int e = n - 1;
    int mid;
    cout << "Your element is at index: ";
    while (s < e)
    {
        mid = s - (s - e) / 2;
        if (arr[mid] > t)
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        if (arr[mid] == t)
        {
            return mid;
        }
        else
        {
            return -1;
        }
    }
}

int LinearSearch(int arr[], int n)
{
    int t;
    cout << "Enter the element you want to search: ";
    cin >> t;
    cout << "Your element is at index: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == t)
        {
            return i;
        }
    }
}

void SelectionSort(int arr[], int n)
{
    int min;
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}

void BubbleSort(int arr[], int n)
{
    int flag;
    for (int i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            cout << "Sorting complete" << endl;
            break;
        }
    }
}

void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            else
            {
                break;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter the Number of element: ";
    cin >> n;
    int arr[n];
    Input(arr, n);
    Output(arr, n);

    // FOR LINEAR SEARCH:
    cout << LinearSearch(arr, n) << endl;

    // FOR BINARY SEARCH:
    cout << BinarySearch(arr, n) << endl;

    // FOR SELECTION SORT:
    SelectionSort(arr, n);
    Output(arr, n);

    // FOR BUBBLE SORT:
    BubbleSort(arr, n);
    Output(arr, n);

    // FOR INSERTION SORT:
    InsertionSort(arr, n);
    Output(arr, n);
}