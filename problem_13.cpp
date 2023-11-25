///////////////////////////////// Star Bridge //////////////////////////////////
/*
                            *******
                            *** ***
                            **   **
                            *     *
*/

 #include<iostream>
 using namespace std;

 int main() {
    int n;
    cout<<"Enter the no. of the Rows: ";
    cin>>n;

    for(int i=1; i<=2*n-1; i++) cout<<"*";
    cout<<endl;

    int m=n-1;
    int nsp=1; 
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m+1-i; j++) cout<<"*";
        for(int j=1; j<=nsp; j++) cout<<" ";
        nsp+=2;
        for(int j=1; j<=m+1-i; j++) cout<<"*";
        cout<<endl;    
    }

    return 0;
 }