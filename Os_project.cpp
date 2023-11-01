/* 
****CODE WRITTEN BY*******

NAME- SHUBHAM PANDEY 
SECTION- K22SW
ROLL.NO= 5
REG NO= 12221997
SUBJECT-  O.S

*/

# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main(){
    //taking a variable for no of proceeses to take input.

    int pno;

    //taking input from the user
    cout<<"Enter the No of process you want: ";
    cin>>pno;

    cout<<"enter the Time in milliseconds your processes........."<<endl;

    //making a vector to store the flag of given value either 0 or 1.....
    vector<int>v;

    //making a vector to store the values of diffrent processes.
    vector<int>v1;

    //using loop to iterate till the number of process to take input

    for(int i=0;i<pno;i++){
        cout<<"enter the time for Process P"<<i<<" : ";
        int x;
        cin>>x;
        v1.push_back(x);
        if(x<=1000){
        v.push_back(1);
        }
        else{
        v.push_back(0);
        }
    }

    //displaying all the given credentials>>>>>>>>

    cout<<"******************************************************************"<<endl;
    cout<<"Processes\t\t"<<"Time\t\t\t"<<"Status\t\t"<<endl;
    cout<<"******************************************************************"<<endl;

    for(int i=0;i<pno;i++){
        if(v[i]==1){
        cout<<" P"<<i<<": \t\t\t"<<v1[i]<<"\t\t\t"<<"Interactive"<<endl; 
        }
        else{
        cout<<" P"<<i<<": \t\t\t"<<v1[i]<<"\t\t\t"<<"Non-Interactive"<<endl; 

        }
    }
    return 0;
}