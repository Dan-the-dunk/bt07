#include<iostream>
using namespace std;

int binsearch(int* arr, int n , int num){
    int l = 0 , r = n - 1, m;
    while (l <= r)
    {   
        m = l +(r-l)/2;
        if(arr[m] == num){
            return m;
        }
        else if(arr[m] > num){
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }
    
}

int main(){
    int n,num; 
    cout<<"Nhap so can tim, so ki tu";
    cin>>num>>n;
    int* arr = new int [n];
    for(int i = 0 ; i < n ; i ++ ){
        cin>>arr[i];
    }
    
    cout<< binsearch(arr,n,num) + 1;

    delete arr;
    arr = nullptr;
    return 0;
}
