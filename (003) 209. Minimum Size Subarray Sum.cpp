class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int minLen = INT_MAX;
        int sum = 0, j = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            while (sum >= target)
            {
                sum -= nums[j];
                minLen = min(minLen, j - i + 1);
                j++;
            }
        }
        if (minLen == INT_MAX)
            return 0;
        return minLen;
    }
};