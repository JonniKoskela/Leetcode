#include <iostream>
#include <vector>
#include <cmath>
#include <memory>
#include <algorithm>

using namespace std;

vector<int> nums{5, 7, -24, 12, 13, 2, 3, 12, 5, 6, 35};
vector<int> results(nums.size());

int findForNode(int index, int start)
{
	int count{ 1 };
	int cur{ nums[index] };
	index++;
	for (int i = index; i < nums.size(); i++)
	{
		if (results[i] == 0)
		{
			results[i] = findForNode(i, nums[i]);
		}
		if (nums[i] > start && results[i]+1 > count)
		{
			count = results[i]+1;
		}
	}
	return count;
}


int main() {


	for (int i = 0; i < nums.size(); ++i)
	{

		if(results[i] == 0) {
			results[i] = findForNode(i,nums[i]);
		}


	}
	for (auto const& x : results)
	{
		cout << x << endl;
	}
}
