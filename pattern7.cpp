/*
Code Output

Enter the value of n
5

5 5 5 5 5 
5 4 4 4 5 
5 4 3 4 5 
5 4 4 4 5 
5 5 5 5 5 

  */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    vector<vector<int>> mat(n,vector<int>(n,0));
    int x=n;
    for(int i=0;i<=n/2;i++)
    {
        int start=i;
        int end=n-i;
        for(int j=start;j<end;j++)
        {
            mat[i][j]=x;
            mat[n-i-1][j]=x;
            mat[j][start]=x;
            mat[j][end-1]=x;
        }
        x--;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}
