#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter any odd number";
    cin>>n;
    int row=3*((n/2)+1);
    vector<vector<char>> mat(row,vector<char>(n,' '));
    int oddcount=1;
    int i;
    int k=0;
    for(i=0;i<(n/2)+1;i++)
    {
        int j=n/2-k;
        int count=0;
        while(count<oddcount)
        {
            mat[i][j]='*';
            count++;
            j++;
        }
        oddcount+=2;
        k++;
    }
    for(int r=i;r<mat.size()-1;r++)
    {
        mat[r][0]='@';
        mat[r][n-1]='@';
    }
    i=2*i;
    k=0; oddcount=1;
    for(i;i<mat.size();i++)
    {
        int j=n/2-k;
        int count=0;
        while(count<oddcount)
        {
            mat[i][j]='*';
            count++;
            j++;
        }
        k++;
        oddcount+=2;
    }
    for(int i=0;i<mat.size();i++)
    {
        for(int j=0;j<mat[0].size();j++)
        {
            cout<<mat[i][j];
        }
        cout<<endl;
    }
    return 0;
}
