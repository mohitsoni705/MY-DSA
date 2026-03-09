#include<iostream>
#include<vector>

using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> merged;
    for(int i = 0 ; i<nums1.size(); i++){
        merged.push_back(nums1[i]);
    } 
    for(int i = 0 ; i<nums2.size(); i++){
        for(int j = 0 ; j<merged.size(); j++){
            
        }
    }
    }
int main(){
    vector<int> num1 = {1,3};
    vector<int> num2 = {2};
    findMedianSortedArrays(num1 , num2);

}