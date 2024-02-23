#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = {1,9,2,4,3,7};

	int k = 3;
	auto ret = std::find_if( v.begin(), v.end(), 
						[k](int n) { return n % k == 0;  });

}
