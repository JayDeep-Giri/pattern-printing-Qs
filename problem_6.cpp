///////////////////////////// Binary Triangle //////////////////////////////

/*
                    1
                    0 1
                    1 0 1
                    0 1 0 1
*/

#include<iostream>
using namespace std;

int main() {
        int n;
        cout<< "Enter no. of Rows: ";
        cin>>n;
    // Method 1
        int a;
        // for(int i=1; i<=n; i++){
        //     if(i%2 == 0) a=0;
        //     else a=1;
        //         for(int j=1; j<=i; j++){
        //                 cout<<a<<" ";
        //                 if(a == 1){
        //                     a=0;
        //                 }
        //                 else {
        //                     a=1;
        //                 }
        //         }
        //         cout<<endl;
        // }

    // Method 2
            for(int i=1; i<=n; i++) {
                for(int j=1; j<=i; j++) {
                    if((i+j)%2==0) cout<<1<<" ";
                    else cout<<0<<" ";
                }
                cout<<endl;
            }

}