///////////////////////////////// Number Bridge //////////////////////////////////
/*
                            1234567
                            123 567
                            12   67
                            1     7
*/

 #include<iostream>
 using namespace std;

 int main() {
    int n;
    cout<<"Enter the no. of the Rows: ";
    cin>>n;

    for(int i=1; i<=2*n-1; i++) cout<<i;
    cout<<endl;

    int m=n-1;
    int nsp=1; 
    for(int i=1; i<=n; i++) {
        int a =1;
        for(int j=1; j<=m+1-i; j++) {
            cout<<a;
            a++;
        }
        for(int j=1; j<=nsp; j++) {
            cout<<" ";
            a++;
        }
        nsp+=2;
        for(int j=1; j<=m+1-i; j++) {
            cout<<a;
            a++;
        }
        cout<<endl;    
    }

    return 0;
 }