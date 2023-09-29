// O(N) Memory beats ~90% in time

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
  int y = k % nums.size();
	vector<int> tmpVec(y);

	for (int x = 0;x<y;++x)
	{
		tmpVec.push_back(nums[(nums.size()-1) - x]);
	}

	for (int l = 0; l < nums.size()-y; ++l)
	{
		nums[(nums.size() - 1) - l] = nums[(nums.size() - 1) - l - y];
	}
	for (int j = 0; j < y; ++j)
	{
		nums[j] = tmpVec[(tmpVec.size() - j) -1];
	}
	
	
    }
};
