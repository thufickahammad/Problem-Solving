#include <iostream>
using namespace std;
int main(){


int numbers[]={1,2,3,4};

int target =5;
int n =4;
for(int i =0;i<n;i++){

for(int j=i+1;j<n;j++){

  if(numbers[i] +numbers[j] ==target) {
    cout<<i<<" "<<j;
     }
}


}


return 0;


}
