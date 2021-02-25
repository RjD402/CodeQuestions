// C program to clear K-th bit of a number N 

#include <stdio.h> 
// Input: N = 5, K = 1
// Output: 4
// 5 is represented as 101 in binary
// and has its first bit 1, so clearing
// it will result in 100 i.e. 4.
// Function to clear the kth bit of n 
int clearBit(int n, int k) 
{ 
	return (n & (~(1 << (k - 1)))); 
} 

// Driver code 
int main() 
{ 
	int n = 5, k = 1; 

	printf("%d\n", clearBit(n, k)); 

	return 0; 
} 
