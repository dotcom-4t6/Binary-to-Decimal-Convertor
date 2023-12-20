#include<iostream>
#include <cmath>
using namespace std;
int main(){
restart:
    cout<<"Enter the binary no for conversion into decimal: ";
    int n,sum=0;
    cin>>n;
    for(int i=0;i<4&&n>0;i++){
        if(n%10!=0 &&  n%10!= 1){
            cout<<"Invalid Input! Give 0 and 1 for Binary to Dec. Conversion \n ";
            goto end;
        }
        sum= sum+((n%10)*pow(2,i));
        n=n/10;
    }
    cout<<sum;
    end:
    int opt;
    cout<<"\nPress 1 for Restart and 0 to terminate the code: ";
    cin>>opt;
    if(opt==1){
        goto restart;
    }
    else if(opt==0){
        cout<<"Terminating......";
        return(1);
    }
    else
        cout<<"wrong choice";
}
