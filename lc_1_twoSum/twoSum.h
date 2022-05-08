
//
//  twoSum.h
//  1_twoSum
//
//  Created by 孙永杰 on 2022/5/3.
//

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
