// CPP program to check if k-th bit 
// of a given number is set or not 
#include <iostream> 
using namespace std; 
//  n = 75 and k = 4
//  temp = 1 << (k-1) = 1 << 3 = 8 
//  Binary Representation of temp = 0..00001000 
//  Binary Representation of n = 0..01001011 
//  Since bitwise AND of n and temp is non-zero,
//  result is SET.
void isKthBitSet(int n, int k) 
{ 
	if (n & (1 << (k - 1))) 
		cout << "SET"; 
	else
		cout << "NOT SET"; 
} 

// Driver code 
int main() 
{ 
	int n = 5, k = 1; 
	isKthBitSet(n, k); 
	return 0; 
} 
