class Solution {

int partition(vector<int> &nums,int s,int e)
{
     int pivotVal = nums[e];
  int st = s;
  for (int i = s; i < e; i++) {
    if (nums[i] < pivotVal) {
      swap(nums[i], nums[st]);
      st++;
    }
  }
  swap(nums[e], nums[st]);
  return st;
}

  


int Quickselect(vector<int> &nums,int s,int e,int k){
     if (nums.size() == 1) {
    return nums[0];
  }
 
  int lo = 0;
  int hi = nums.size() - 1;
  int targetIndex = nums.size() - k;
 
  while (lo <= hi) {
    int pivot = partition(nums, lo, hi);
    if (pivot < targetIndex) {
      lo = pivot + 1;
    } else if (pivot > targetIndex) {
      hi = pivot - 1;
    } else {
      return nums[pivot];
    }
  }
 
  return -1;

}


public:
    int findKthLargest(vector<int>& nums, int k) {

  return Quickselect(nums,0,nums.size()-1,k);

}

};