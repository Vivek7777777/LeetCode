class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int i = 2,
            j = 0,
            n = nums.size();
        if (n < 2)
            return n;

        while (i < n)
        {
            if (nums[i] != nums[j])
            {
                nums[j + 2] = nums[i];
                j++;
            }
            i++;
        }

        return j + 2;
    }
};