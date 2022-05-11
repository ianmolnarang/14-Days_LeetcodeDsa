// contains duplicate
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        /*      int target;
               int n = nums.size()  ;
               for(int i =0 ; i < n ; i++){
                   target = nums[i] ;
                   for(int j = i+1 ; j<n; j++)
                   {
                       if(target==nums[j])
                           return true  ;

                   }
               }return false ; */

        // using array sorting
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] == nums[i + 1])
                return true;
        }
        return false;
    }
};