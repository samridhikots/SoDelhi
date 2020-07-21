#include <bits/stdc++.h> 
#define size 100 
using namespace std; 
  
int difference(int arr[][size], int n) 
{ 
    int d1 = 0, d2 = 0; 
  
    for (int i = 0; i < n; i++) 
    { 
        for (int j = 0; j < n; j++) 
        { 
            if (i == j) 				//1st diagonal
                d1 += arr[i][j]; 

            if (i == n - j - 1) 		//2nd diagonal
                d2 += arr[i][j]; 
        } 
    } 
  
    // Absolute difference
    return abs(d1 - d2); 
}

