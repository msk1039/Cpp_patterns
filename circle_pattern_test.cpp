//
// Created by Mayank kadam on 21/10/23.
//
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the diameter of circle: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) {
            if (( (pow((pow(i-(n/2),2)+pow(j-(n/2),2)),0.5) <= (n/2+0.25))  &&   pow((pow(i-(n/2),2)+pow(j-(n/2),2)),0.5) >= (n/2-1)  )  ||  ((((i>=n/2)&&(j>=n/2))||((i<=n/2)&&(j<=n/2))) &&(pow((pow(i-(n/2),2)+pow(j-(n/2),2)),0.5) <= (n/2+0.25))) )
            {
                cout << "*  ";
            } else {
                cout << "   ";
            }
        }
        cout<<endl;
    }
}