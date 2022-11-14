#include <iostream>
#include <climits>
using namespace std;
int knapSack(int v[], int w[], int n, int W) {
   if (W < 0)
      return INT_MIN;
   if (n < 0 || W == 0)
      return 0;
   int in = v[n] + knapSack(v, w, n - 1, W - w[n]);
   int ex = knapSack(v, w, n - 1, W);
   return max (in, ex);
}
int main() {
    int n ; 
    cout << "Number of Item :" ;
    cin >> n ;
   int v[n] ;
   int w[n] ;
   cout << "Item value and Item Weight : " << endl  ;
    for(int i = 0 ; i< n; i++ )
    {
        cin >>  v[i] ;
        cin >> w[i] ;
    }
   int W ;
   cout << "Knapsack Capcity : " ;
   cin >> W ;
   cout << "Knapsack value is " << knapSack(v, w, n - 1, W);
   return 0;
}

// Time Complexity = O(2n) ;
// Space Complexity = O(n) ;


