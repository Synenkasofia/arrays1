#include <iostream>
#include <vector>

using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums)
{
    int current = 0;
    int maximum = 0;

    for (int num : nums)
    {
        if (num == 1)
        {
            current++;

            if (current > maximum)
                maximum = current;
        }
        else
        {
            current = 0;
        }
    }

    return maximum;
}

int main()
{
    vector<int> nums = {1, 1, 0, 1, 1, 1};

    cout << findMaxConsecutiveOnes(nums) << endl;

    return 0;
}
