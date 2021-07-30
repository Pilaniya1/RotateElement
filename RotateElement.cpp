#include<bits\stdc++.h>
using namespace std;
int main(){
    int element[5];
    for(int i=1;i<=5;i++)
    *(element+i-1)=i*10;
    rotate(element,element+4,element+5);
    rotate(element,element+1,element+4);
    for(int i=0;i<5;i++)
    cout<<element[i]<<" ";
    return 0;

}


    