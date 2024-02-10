#include<iostream>
using namespace std;

void ReverseArray(int arr[], int size)
{
    int rev[size];
    for(int i=0;i< size;i++)
        rev[i]=arr[size-i-1];
    cout << "Reversed Array using Non Inplace(Another array)" << endl;
    for(int i=0;i<size;i++)
        cout << rev[i] << " ";

}

void ReverseArrayInPlace(int arr[],int size)
{
    int *left;
    int *right;
    left = &arr[0];
    right = &arr[size-1];
    int temp=0;
    while(left < right)
    {
        if(left == right)
            break;
        else{
            temp = *left;
            *left = *right;
            *right = temp;
            left = left + 1;
            right = right - 1;
        }
    }
    cout << "Reversed Array using In place(2 pointers)" << endl;
    for(int i=0;i<size;i++)
        cout << arr[i] << " ";

}

int main(){

    int a[] = {10,2,5,6,8,60};
    int size = sizeof(a)/sizeof(a[0]);
    //cout << size << endl;
    ReverseArray(a,size);
    cout << "" << endl;
    ReverseArrayInPlace(a,size);


}