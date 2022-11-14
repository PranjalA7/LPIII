#include<iostream>
using namespace std ;
bool safe(int** arr , int x ,int y ,int n)
{
    for(int row = 0 ; row < x ; row++)
    {
        if(arr[row][y] == 1)
        {
            return false ;
        }
    }
    int row = x ;
    int col = y ;
    while(row>=0 && col>=0)
    {
        if (arr[row][col] == 1)
        {
            return false ;
        }
        row--;
        col--;
    }
    row = x ;
    col = y ;
    while(row>=0 && col<n)
    {
        if (arr[row][col] == 1)
        {
            return false ;
        }
        row--;
        col++;
    }
    return true ;
}
bool queen(int** arr,int x,int n)
{
    if (x>=n)
    {
        return true ;
    }
    for(int col = 0 ; col<n ; col++)
    {
        if (safe(arr,x,col,n))
        {
            arr[x][col] = 1;
            if(queen(arr,x+1,n))
            {
                return true ;
            }
            arr[x][col]= 0 ; // Backtracking    
        }
        
    }
    return false ;
}
int main()
{
    int n;
    cout << "Enter Number of Queen : " ;
    cin>>n;
    int** arr = new int*[n] ;
    for(int i =0 ;i < n ; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j]=0;
        }
    }
    if (queen(arr,0,n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
    return 0 ;
}

// Output : 
// Enter Number of Queen : 8
// 1 0 0 0 0 0 0 0 
// 0 0 0 0 1 0 0 0 
// 0 0 0 0 0 0 0 1 
// 0 0 0 0 0 1 0 0 
// 0 0 1 0 0 0 0 0 
// 0 0 0 0 0 0 1 0 
// 0 1 0 0 0 0 0 0 
// 0 0 0 1 0 0 0 0 



// Time Complexity = O(N*2)
// Space Complexity = O(N)