/*You are given an array of N elements. Find the subarray of maximum sum having even length.

Standard input

The first line contains a single integer N.

The second line contains N integers representing the elements of the array.

Standard output

Print a single integer representing the maximum sum of an even length subarray.

Example:

input:

5

8 9 -8 9 10

output:

20

example:

[9,−8,9,10]*/

#include<iostream> 
#include<climits> 
using namespace std; 
  
int maxSubArraySum(int a[], int size) 
{ 
    int max_so_far = INT_MIN, max_ending_here = 0; 
  
    for (int i = 0; i < size; i++) 
    { 
        max_ending_here = max_ending_here + a[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    return max_so_far; 
} 
  
int main() 
{ 
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max_sum = maxSubArraySum(a, n); 
    cout <<max_sum; 
    return 0; 
} 
