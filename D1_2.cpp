// we have total 3 approaches for this theorem but here is the best solution with N time .
// below for all the test cases
//kadanes theorem

class Solution
{
public:
    int maxSubArray(vector<int> &arr)
    {
        int csum = arr[0];
        int osum = arr[0];
        for (int i = 1; i < arr.size(); i++)
        {
            if (csum >= 0)
            {
                csum += arr[i];
            }
            else
            {
                csum = arr[i];
            }
            if (csum > osum)
            {
                osum = csum;
            }
        }
        return osum;
    }
};

// when not all the elements are negative by anuj bhaiya
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int maxSum = 0;
        int currSum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            currSum = currSum + nums[i];
            if (currSum > maxSum)
            {
                maxSum = currSum;
            }
            if (currSum < 0)
            {
                currSum = 0;
            }
        }
        return maxSum;
    }
};