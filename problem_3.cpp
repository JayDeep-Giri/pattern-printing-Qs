//************************* Star Plus ****************************
/*
    12345->
1     *
2     *
3   *****
4     * 
5     * 


*/
#include<iostream>
using namespace std;

int main() {
        int n;
        cout<< "Enter no. of Rows: ";
        cin>>n;

        int mid = n/2 + 1;
        for(int i=1; i<=n; i++){
                for(int j=1; j<=n; j++){
                        if(i==mid || j==mid){
                            cout<<"*";
                        }
                        else {
                            cout<<" ";
                        }
                }
                cout<<endl;
        }

}