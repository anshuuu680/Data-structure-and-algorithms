class Solution {
    public void nextPermutation(int[] nums) {
        int pivot = -1;
        int n = nums.length;

        //find pivot  nums[i] < nums[i+1]

        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                pivot = i;
                break;
            }
        }

        // if pivot = -1 reverse the array 

        if(pivot== -1){
            reverse(nums,0,n-1);
            return;
        }

// if pivot!=-1 then find the smallest rightmost element and swap with pivot

        for(int i=n-1;i>=0;i--){
            if(nums[i]>nums[pivot]){
                swap(nums,pivot,i);
                break;
            }
        }

        // reverse all the rightmost elements fron pivot + 1
        
       reverse(nums,pivot+1,n-1);

    }

    public void reverse(int[] nums,int i,int j){

        while(i<=j){
            swap(nums,i,j);
            i++;
            j--;
        }

    }

    public void swap(int[] nums,int i,int j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}