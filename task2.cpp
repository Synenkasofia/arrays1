#include <iostream>
#include <vector>

using namespace std;

int countDigits(int number)
{
    int count = 0;

    do
    {
        count++;
        number /= 10;
    }
    while (number != 0);

    return count;
}

int findNumbers(vector<int>& nums)
{
    int result = 0;

    for (int number : nums)
    {
        if (countDigits(number) % 2 == 0)
            result++;
    }

    return result;
}

int main()
{
    vector<int> nums = {12, 345, 2, 6, 7896};

    cout << findNumbers(nums) << endl;

    return 0;
}
