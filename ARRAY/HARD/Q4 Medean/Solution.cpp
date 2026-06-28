// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;
double mergeTwosortedArray(vector<int> nums1 , vector<int> nums2){
    
     vector<int> arr;
       //merge two arrys in one in a sorted way
       int i = 0;
       int j = 0;
       int n1 = nums1.size();
       int n2 = nums2.size();
      while(i<n1 && j<n2){
          if(nums1[i]<nums2[j]){
            arr.push_back(nums1[i]);
              i++;
          }else{
            arr.push_back(nums2[j]);
            j++;
          }
      }
       //print all remaining in 1 in array
      for(int k = i; k<nums1.size(); k++){
          arr.push_back(nums1[k]);
      } 
      for(int k = j; k<nums2.size(); k++){
        arr.push_back(nums2[k]);
      } 
      int mid = (0 + arr.size())%2;
    //   return mid;
      if(mid == 0){
          int first = (0 + arr.size()-1)/2;
          int second = first + 1;
          double res = (arr[first] + arr[second])/2.0;
          return res;
      }else{
          double res = arr[((0 + arr.size()-1)/2.0)];
          return res;
      }
}
int main() {
    vector<int> nums1= {1,2};
    vector<int> nums2 = {3,4};
    cout<<mergeTwosortedArray(nums1,nums2);
}