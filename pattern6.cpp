/*
Code Output

Enter the value of odd number5

  @@@@@
   @@@ 
    @  
*****  
*   *  
*   *  
*   *  
*   *  

*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of odd number";
    cin>>n;
    int row=(n/2)+n+1;
    int col=n+(n/2);
    vector<vector<char>>mat(row,vector<char>(col,' '));
    int k=0;
    int oddcount=n;
    int i=0;
    while(i<row)
    {
        if(i<(n/2)+1){
        int count=0;
        int j=(n/2)+k;
        while(count<oddcount)
        {
            mat[i][j]='@';
            j++;
            count++;
        }
        oddcount-=2;
        k++;
        }
        if(i==(n/2)+1)
        {
            int j=0;
            while(j<n)
            {
                mat[i][j]='*';
                j++;
            }
        }
        if(i>=(n/2)+1) 
        {
            mat[i][0]='*';
            mat[i][n-1]='*';
        }
        i++;
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
