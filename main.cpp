#include <iostream>

using namespace std;
void Change(int arr[],int i,int aux) {
    if(i==0)return;
    arr[i]=arr[i-1];
    if(aux<arr[i-2])Change(arr,i-1,aux);
    else{
        arr[i-1]=aux;
        return;
    }
    }
void Insertion_Sort(int arr[],int n) {
    for(int i=1; i<n; i++) {
        if(arr[i]<arr[i-1]) {
            int aux=arr[i];
            Change(arr,i,aux);
        }
    }
    return;
}

int main() {
    int arr[]= {65,45,7,76,87,97,8,98,58,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    Insertion_Sort(arr,n);
    cout << "Sorted Array : ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
