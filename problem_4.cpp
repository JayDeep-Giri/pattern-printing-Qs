///////////////////////////// Star Cross /////////////////////////////////
/*
             1234567 
1            *     *
2             *   *
3              * *
4               *
5              * *
6             *   *
7            *     *

*/


#include<iostream>
using namespace std;

int main() {
        int n;
        cout<< "Enter no. of Rows: ";
        cin>>n;
    // Method 1
    
        for(int i=1; i<=n; i++){
                for(int j=1; j<=n; j++){
                        if(i==j || j+i==n+1){
                            cout<<"*";
                        }
                        else {
                            cout<<" ";
                        }
                }
                cout<<endl;
        }

}