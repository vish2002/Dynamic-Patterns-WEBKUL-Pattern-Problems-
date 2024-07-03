#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    int row=n*3;
    int col=(n*n)-n+3;
    vector<vector<char>> mat(row ,vector<char>(col,' '));
    int start=1;
    int end=n;
    for(int i=0;i<row;i++)
    {
        int count=0;
        for(int j=0;j<col;j++)
        {
            if(i<=n && j==0 || i>= (2*n-1) && j==col-1)
            {
                mat[i][j]='@';
            }
            if(i>=n && i<2*n && j>=start && j<=end && count<n)
            {
                mat[i][j]='*';
                count++;
            }
        }
        if(i>=n && i<2*n){
        start=end;
        end+=n-1;}
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
