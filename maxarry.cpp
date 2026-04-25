#include <iostream>
using namespace std;
int findmax(int*arr,int n){

int max= *arr;
for(int i =0;i<n;i++){
    if (*(arr + i)>max ){
        max = *(arr + i);
    }
}
return max;
}
int main(){

int n;
cin>>n;
int arr[n];
for (int i = 0;i<n;i++){
    cin>>arr[i];
}

int result= findmax(arr,n);

cout <<result;

    return 0;
}










