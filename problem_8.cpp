///////////////////////////////// Number Triangle Flipped /////////////////////////////
/*
                            1
                           12
                          123
                         1234
*/


#include<iostream>
using namespace std;

int main() {
        int n;
        cout<< "Enter no. of Rows: ";
        cin>>n;

        for(int i =1; i<=n; i++) {
            int a=1;
            for(int j=1; j<=n; j++) {
                if(j+i >= n+1) {
                    cout<<a; a++;
                }
                else cout<<" ";
            }
            cout<<endl;
        }

}