/*
Code Output

    Enter the value of n5
       *       
      ***      
     *****     
     @   @     
     @   @     
     @   @     
*****@   @*****
 ***       *** 
  *         *  
    

*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int row=(2*n)+n-2;
    int col=n*3;
    vector<vector<char>>mat(row,vector<char>(col,' '));
    int i;
    int k=0;
    int oddcount=1;
    for(i=0;i<row;i++)
    {
        if(i>=0 && i<(n/2)+1){
        int count=0;
        int j=(col/2)-k;
        while(count<oddcount)
        {
            mat[i][j]='*';
            count++;
            j++;
        }
        oddcount+=2;
        k++;
        }
        else if(i>=(n/2)+1 && i<=(n/2)+n-1)
        {
        mat[i][col/3]='@';
        mat[i][(col/3)+n-1]='@';
        }
        
    }
    i=(n/2)+1;
    k=n;
    oddcount=n;
    for(i=(n/2)+n-1;i<row;i++)
    {
        int count=0;
        int j=(col/3)-k;
        int endj=j+2*n;
        while(count<oddcount)
        {
            mat[i][j]='*';
            mat[i][endj]='*';
            j++;
            endj++;
            count++;
        }
        oddcount-=2;
        k--;
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
