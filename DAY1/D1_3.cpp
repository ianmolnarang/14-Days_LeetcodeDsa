// Binary Search
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int pivot, left = 0, right = nums.size() - 1;
        while (left <= right)
        {
            pivot = left + (right - left) / 2;
