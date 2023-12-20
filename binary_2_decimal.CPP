#include<iostream>
#include <cmath>
using namespace std;
int main(){
    cout<<"Enter the 4 digit binary no for conversion in decimal: ";
    int n,sum=0;
    cin>>n;
    for(int i=0;i<4&&n>0;i++){
        if(n%10!=0 &&  n%10!= 1){
            cout<<"Give 0 and 1 for Binary to Dec. Conversion: ";
            goto end;
        }
        sum= sum+((n%10)*pow(2,i));
        n=n/10;
    }
    cout<<sum;
    end:;
}