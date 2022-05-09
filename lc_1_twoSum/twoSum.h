
//
//  twoSum.h
//  1_twoSum
//
//  Created by 孙永杰 on 2022/5/3.
//

/*
 给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。
 你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。
 你可以按任意顺序返回答案。
 示例 1：

 输入：nums = [2,7,11,15], target = 9
 输出：[0,1]
 解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1] 。
 示例 2：

 输入：nums = [3,2,4], target = 6
 输出：[1,2]
 示例 3：

 输入：nums = [3,3], target = 6
 输出：[0,1]

 提示：

 2 <= nums.length <= 104
 -109 <= nums[i] <= 109
 -109 <= target <= 109
 只会存在一个有效答案
 进阶：你可以想出一个时间复杂度小于 O(n2) 的算法吗？

 来源：力扣（LeetCode）
 链接：https://leetcode.cn/problems/two-sum
*/
#ifndef twoSum_h
#define twoSum_h
#include <vector>
using std::vector;
class solution_twoSum {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>::const_iterator oi = nums.begin();
        vector<int> out;
        bool flag = false;
        for ( ; oi != nums.end(); ++oi ) {
            vector<int>::const_iterator ii = oi + 1;
            for ( ; ii != nums.end( ); ++ii )
                if ( target == ( *oi + *ii ) ) {
                    out.push_back( oi - nums.begin( ) );
                    out.push_back( ii - nums.begin( ) );
                    flag = true;
                    break;
                }
            if ( flag ) {
                break;
            }
        }
        return out;
    }
};
#endif /* twoSum_h */
