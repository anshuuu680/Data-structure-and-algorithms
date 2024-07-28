class Solution {
    public int lengthOfLastWord(String s) {

        int length = 0;
        int end = s.length()-1;

        while(end>=0 && s.charAt(end)==' ')
        end--;

        while(end>=0){
            if(s.charAt(end)== ' ')
            return length;
            else{
            length++;
            end--;
            }
        }


        return length;
        
    }
}