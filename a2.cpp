#include<iostream>
using namespace std;

void f(int arr[]){
    cout<<sizeof(arr);
}


int main(){
    int arr[] = {1,3,3,4};
    int size_arr = sizeof(arr);
    cout<<size_arr<<endl;
    f(arr);
}
