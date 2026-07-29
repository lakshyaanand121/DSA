#include<iostream>
using namespace std;
void arraypass(int[],int a);
int main(){
    int i,a[5];
    cout<<"enter 5 numbers : "<<endl;
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    arraypass(a,5);
}
void arraypass(int x[],int n){
int i,sum=0;
for(i=0;i<n;i++){
    sum=sum+x[i];
}
cout<<"sum is : "<<sum;
}