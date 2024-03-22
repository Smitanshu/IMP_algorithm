#include <iostream>
#include <vector>
using namespace std;
int binary(vector<int> &nums, int start, int end, int target)
{
    // base case
    if (start > end) // element not found
    {
        return -1;
    }
    int mid = start + (end - start) / 2; // mid calculation

    if (nums[mid] == target)
    {
        return mid; // Target found
    }

    // processing
    if (nums[mid] < target)
    {
        return binary(nums, mid + 1, end, target); // recursion call
    }

    if (nums[mid] > target)
    {

        return binary(nums, start, mid - 1, target); // recursion call
    }
}
int main()
{

    vector<int> nums = {10, 20, 30, 40, 50, 60, 70, 80};
    int target = 80;
    int start = 0;
    int end = nums.size() - 1;

    int ans = binary(nums, start, end, target);

    if (ans == -1)
    {
        cout << "Not found";
    }
    else
    {
        cout << "found at :" << ans << endl;
    }
    return 0;
}
