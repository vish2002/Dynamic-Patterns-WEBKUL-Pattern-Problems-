#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int row=2*n;
    int col=(n*n)-n+3;
    vector<vector<char>>mat(row,vector<char>(col,' '));
    int start=1;
    int end=n;
    int count=0;
    for(int i=0;i<row;i++)
    {
        int count=0;
        for(int j=0;j<col;j++)
        {
            if(i>=0 && i<=n && j==0 || i>=n-1 && j==col-1)
            {
                mat[i][j]='@';
            }
            if(i>=0 && i<=n-1 && j>=start && j<=end && count<n)
            {
                mat[i][j]='*';
                count++;
            }
        }
            if(i>=0 && i<=n-1)
            {
                start=end;
                end+=n-1;
            }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<mat[i][j];
        }
        cout<<endl;
    }
    return 0;
}
