#include<iostream>
using namespace std;
int main(){

int a[3][3];
int even =0,odd=0;


cout<<"enter 3x3 matrix";
for(int i=0;i<3;i++){
 for(int j=0;j<3;j++){
    cin>>a[i][j];
    }
}

for(int i=0;i<3;i++){
 for(int j=0;j<3;j++){
     if(a[i][j]%2==0)
        even++;
    else
    odd++;
 }

 }

cout<< "even numbers="<<even << " "<<endl;
cout<<"odd numbers="<<odd<<" "<<endl;


return 0;


}
