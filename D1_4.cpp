// first bad version
//  The API isBadVersion is defined for you.
//  bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        long int low = 0;
        long int high = n;
        long int result;

        while (low <= high)
        {
            int mid = (high + low) >> 1;
            if (isBadVersion(mid))
            {
                result = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        return result;
    }
};