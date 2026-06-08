class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        vector<bool> res;
        int maxCandies = *max_element(candies.begin(), candies.end());
        for (int candy : candies)
        {
            res.push_back(candy + extraCandies >= maxCandies);
        }
        return res;
    }
};