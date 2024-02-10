#include<iostream>
#include <algorithm> // For std::sort
using namespace std;

void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++)
        cout << arr[i] << " ";
}
void LinearSearch(int a[], int size, int key){
    for(int i=0;i<size;i++)
        if(a[i]==key)
            cout << "Linear Search : Element found at index : " << i << endl;
}

void BinarySearch(int a[], int size, int key){
    std::sort(a,a+size);
    PrintArray(a,size);
    int l=0,r=size-1,mid;
    bool found =false;
    while(l<=r){
        mid=l+((r-l)/2);
        if(a[mid]==key){
            cout << mid << endl;
            found=true;
            break;
        }
        else if(a[mid]<key)
            l=mid+1;
        else if(a[mid]>key)
            r=mid-1;
        
    }
    if(found)
        cout << "Binary Search : Element found at index : " << mid << endl;
    else
        cout << "Binary Search : Element not found"  << endl; 
}








int main(){

    int a[] = {10,2,5,6,8,60};
    int size = sizeof(a)/sizeof(a[0]);
    int searchelement = 5;
    LinearSearch(a,size,searchelement);
    BinarySearch(a,size,searchelement);
}