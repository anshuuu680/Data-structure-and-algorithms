class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        
        
        int[] ans = new int[nums1.length];

        // stack and map 

        Stack<Integer> st = new Stack<>();
        HashMap<Integer,Integer> mp = new HashMap<>();


        for(int num:nums2){

            while(!st.empty() && num>st.peek()){
                mp.put(st.pop(),num);
            }

            st.add(num);

        }

        int i = 0;

        for(int num:nums1){
         ans[i++] = mp.getOrDefault(num,-1);
        }


        return ans;
    }
}