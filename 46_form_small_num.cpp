#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int ans = 0, max1=0, min1=999999, max2=0, min2 = 999999;
        for(int i=0; i<nums1.size(); i++ ) {
            if(nums1[i] > max1)
                max1 = nums1[i];
            if(nums1[i] < min1)
                min1 = nums1[i];
        }
        for(int i=0; i<nums2.size(); i++ ) {
            if(nums2[i] > max2)
                max2 = nums2[i];
            if(nums2[i] < min2)
                min2 = nums2[i];
        }
        int temp=999999, f= 0;
        for(int i=0; i<nums1.size(); i++) {
            auto it = std::find(nums2.begin(), nums2.end(), nums1[i]);
            if(it != nums2.end()) {
                f=1;
                if(nums1[i] < temp)
                    temp = nums1[i];
                    
            }
        }
        if(f ==1)
            return temp;
        int t = min(min1, min2);
        t *= 10;
        t += max(min1, min2);
        return t;
    }
};