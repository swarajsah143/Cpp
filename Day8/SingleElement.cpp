#include <iostream>
#include <vector>
using namespace std;
int main()
{   vector<int> nums={1,1,2,2,3,4,4,5,5,6,6};
    int st = 1;
    int len = nums.size();
    int end = len - 2;
    int mid;
    if (len == 1)
    {
        cout<<"The number is "<<nums[0]<<endl;
    }
    if (nums[0] != nums[1])
    {
        cout<<"The number is "<<nums[0]<<endl;
    }
    if (nums[len - 1] != nums[len - 2])
    {
        cout<<"The number is "<<nums[len - 1]<<endl;
    }
    while (st <= end)
    {
        mid = st + (end - st) / 2;
        if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
        {
            cout<<"The number is "<<nums[mid]<<endl;
        }
        if (nums[mid] == nums[mid - 1])
        { // left equal
            if (mid % 2 == 0)
            {
                end = mid - 1; // go to left
            }
            else
            {
                st = mid + 1; // got to righ
            }
        }
        else
        { // right equal
            if (mid % 2 == 0)
            {
                st = mid + 1; // go to right
            }
            else
            {
                end = mid - 1; // go to left
            }
        }
    }
    return 0;
}

