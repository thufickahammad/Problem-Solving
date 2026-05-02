#include<iostream>
using namespace std;
int main(){
int a[3][3];
int mainsum=0 , secsum=0;

cout<<"Enter 3x3 matix";
for (int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>a[i][j];
    }
}
    for(int j=0;j<3;j++){
for (int i=0;i<3;i++){
            if(i==j)
        mainsum += a[i][j];
    if(i+j ==2)
        secsum +=a[i][j];
    }

}

cout<<"main digonal sum ="<<mainsum<<endl;
cout<<"secondary diagonal sum="<<secsum<<endl;

return 0;

}
