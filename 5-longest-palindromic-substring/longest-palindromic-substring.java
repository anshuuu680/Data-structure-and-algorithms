class Solution {
    public String longestPalindrome(String s) {

        int max_len = 1;
        String max_str = s.substring(0,1);

        for(int i=0;i<s.length();i++){

            for(int j = i + max_len;j<=s.length();j++){

                if((j-i) > max_len && isPalindrome(s.substring(i,j))){
                    max_len = j-i;
                    max_str = s.substring(i,j);
                }
            }
        } 

        return max_str;
        
    }

    private boolean isPalindrome(String str) {
        int left = 0;
        int right = str.length() - 1;

        while (left < right) {
            if (str.charAt(left) != str.charAt(right)) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
}