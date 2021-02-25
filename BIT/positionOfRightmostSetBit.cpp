// C++ program for Position
// of rightmost set bit
#include <iostream>
#include <math.h>
using namespace std;

// Algorithm: (Example 12(1100))
// Let I/P be 12 (1100)

// 1. Take two's complement of the given no as all bits are reverted
// except the first '1' from right to left (0100)

// 2  Do a bit-wise & with original no, this will return no with the
// required one only (0100)

// 3  Take the log2 of the no, you will get (position - 1) (2)

// 4  Add 1 (3)

class gfg
{

public:
unsigned int getFirstSetBitPos(int n)
{
	return log2(n & -n) + 1;
}
};

// Driver code
int main()
{
	gfg g;
	int n = 12;
	cout << g.getFirstSetBitPos(n);
	return 0;
}

/
