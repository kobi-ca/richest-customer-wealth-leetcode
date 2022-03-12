#include <iostream>
#include <vector>

namespace original {
    // Runtime: 18 ms, faster than 5.58% of C++ online submissions for Richest Customer Wealth.
    // Memory Usage: 7.9 MB, less than 16.36% of C++ online submissions for Richest Customer Wealth.
    namespace sol1 {
        class Solution {
        public:
            int maximumWealth(const std::vector<std::vector<int>>& accounts) {
                int max=0;
                for(int i=0;i<accounts.size();i++)
                {
                    int sum=0;
                    for(int j=0;j<accounts[i].size();j++)
                    {
                        sum+=accounts[i][j];
                        if(sum>max)
                        {
                            max=sum;
                        }
                    }
                }
                return max;
            }
        };
    }

    // Runtime: 4 ms, faster than 86.84% of C++ online submissions for Richest Customer Wealth.
    // Memory Usage: 7.9 MB, less than 53.67% of C++ online submissions for Richest Customer Wealth.
    namespace sol2 {
        class Solution {
        public:
            int maximumWealth(const std::vector<std::vector<int>>& accounts) {
                int ans=0;
                int sum=0;
                for(int i=0;i<accounts.size();i++)
                {
                    for(int j=0;j<accounts[i].size();j++)
                    {
                        sum+=accounts[i][j];
                    }
                    ans=std::max(ans,sum);
                    sum=0;
                }
                return ans;
            }
        };
    }
}

int main() {

    const auto v1 = std::vector<std::vector<int>>{ {1, 2, 3} , {3, 2, 1} };
    const auto v2 = std::vector<std::vector<int>>{ {1, 5} , {7, 3}, {3 ,5} };
    const auto v3 = std::vector<std::vector<int>>{ {2, 8, 7} , {7, 1, 3}, {1, 9, 5} };
    {
        std::clog << original::sol1::Solution{}.maximumWealth(v1) << ' '
            << original::sol1::Solution{}.maximumWealth(v2) << ' '
                << original::sol1::Solution{}.maximumWealth(v3) <<
            '\n';
    }

    {
        std::clog << original::sol2::Solution{}.maximumWealth(v1) << ' '
                  << original::sol2::Solution{}.maximumWealth(v2) << ' '
                  << original::sol2::Solution{}.maximumWealth(v3) << '\n';
    }

    return 0;
}
