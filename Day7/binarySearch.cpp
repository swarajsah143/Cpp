#include <iostream>
#include <vector>

using namespace std;
// int BinaryRecursive(const vector<int> nums, int target, int st, int end)
// {
//     if (st <= end)
//     {
//         int mid = st + (end - st) / 2;
//         if (target > nums[mid])
//         {
//             return BinaryRecursive(nums, target, mid + 1, end);
//         }
//         else if (target < nums[mid])
//         {
//             return BinaryRecursive(nums, target, st, mid - 1);
//         }
//         else
//         {
//             return mid;
//         }
//     }
//     return -1;
// }

int main()
{
    // With recursion
    vector<int> nums = {1,2,3,4,5,44,66,77,234};
    int target = 13;
    int st = 0, end = nums.size() - 1;
    // int result = BinaryRecursive(nums, target, st, end);
    // cout << result << endl;




    int mid,result=-1;
    while (st <= end)
    {
        mid = st + (end - st) / 2;
        if (target > nums[mid])
        {
            st = mid + 1;
        }
        else if (target < nums[mid])
        {
            end = mid - 1;
        }
        else
        {
            result=mid;;
            break;
        }
    }
    if(result!=-1){
        cout<<result<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
 

}