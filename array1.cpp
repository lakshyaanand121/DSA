//WRITE A PROGRAM TO FIND AVERAGE MARKS OBTAINED BY 10 STUDENTS IN A TEST.

#include<iostream>
using namespace std;
int main()
{
    float avg,sum=0;
    int i,marks[10];
    cout<<"enter marks of 10 students:"<<endl;
    for(i=0;i<10;i++){
        cin>>marks[i];
    }
    for(i=0;i<10;i++){
        sum=sum+marks[i];
    }
    avg=sum/10;
    cout<<"average of marks is : "<<avg;
    return 0;
}