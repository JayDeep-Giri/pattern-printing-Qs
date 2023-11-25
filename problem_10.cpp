///////////////////////////////// Star Pyramid ///////////////////////////////
/*

                            *
                           ***
                          *****
                         *******  
*/

#include<iostream>
using namespace std;

int main() {
        int n;
        cout<< "Enter no. of Rows: ";
        cin>>n;

    //Method 1
        // for(int i =1; i<=n; i++) {
        //     for(int j=1; j<=n-i; j++) {
        //         cout<<" ";
        //     }
        //     for(int j=1; j<=2*i-1; j++) {
        //             cout<<"*";
        //     }
        //     cout<<endl;
        // }

    //Method 2
        int nst = 1;
        int nsp = n-1;
        for(int i=1; i<=n; i++) {
            //spaces
            for(int j=1; j<=nsp; j++) {
                cout<<" ";
            }
            nsp--;
            //stars
            for(int j=1; j<=nst; j++) {
                cout<<"*";
            }
            nst+=2;
            cout<<endl;
        }

}