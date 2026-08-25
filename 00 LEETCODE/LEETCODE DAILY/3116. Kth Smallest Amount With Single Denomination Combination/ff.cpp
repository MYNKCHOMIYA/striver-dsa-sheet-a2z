#include <vector>
#include <numeric>
#include <algorithm>

class Solution {
private:
    // Helper function to count multiples up to 'mid' using inclusion-exclusion
    long long countMultiples(long long mid, const std::vector<int>& coins) {
        long long totalCount = 0;
        int n = coins.size();
        
        // Iterate through all possible non-empty subsets of coins (Bitmasking)
        // 1 << n calculates 2^n
        for (int i = 1; i < (1 << n); ++i) {
            long long currentLcm = 1;
            int elementCount = 0;
            
            for (int j = 0; j < n; ++j) {
                if ((i >> j) & 1) { // If the j-th coin is included in the subset
                    currentLcm = std::lcm(currentLcm, (long long)coins[j]);
                    elementCount++;
                    
                    // Optimization: If LCM exceeds our range, it won't contribute
                    if (currentLcm > mid) break; 
                }
            }
            
            // Inclusion-Exclusion formula rule
            if (elementCount % 2 == 1) {
                totalCount += mid / currentLcm; // Odd size: add
            } else {
                totalCount -= mid / currentLcm; // Even size: subtract
            }
        }
        return totalCount;
    }

public:
    long long findKthSmallest(std::vector<int>& coins, int k) {
        // Sort coins and remove duplicates/multiples to optimize subset size
        std::sort(coins.begin(), coins.end());
        std::vector<int> filteredCoins;
        for (int coin : coins) {
            bool keep = true;
            for (int fCoin : filteredCoins) {
                if (coin % fCoin == 0) {
                    keep = false;
                    break;
                }
            }
            if (keep) filteredCoins.push_back(coin);
        }

        // Binary search range for the answer
        long long low = 1;
        long long high = (long long)filteredCoins[0] * k; // Worst case maximum answer
        long long ans = high;

        while (low <= high) {
            long long mid = low + (high - low) / 2;
            
            if (countMultiples(mid, filteredCoins) >= k) {
                ans = mid;        // Candidate answer found
                high = mid - 1;   // Look for a smaller valid value
            } else {
                low = mid + 1;    // Look for a larger value
            }
        }
        
        return ans;
    }
};
