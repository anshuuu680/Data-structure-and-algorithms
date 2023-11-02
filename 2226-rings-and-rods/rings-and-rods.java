class Solution {
    public int countPoints(String rings) {
      Set<Integer> R = new HashSet<>();
      Set<Integer> G = new HashSet<>();
      Set<Integer> B = new HashSet<>();


      for(int i=0;i<rings.length();i+=2){
          if(rings.charAt(i)=='R')
          R.add(rings.charAt(i+1)- '0');
          else if(rings.charAt(i)=='G')
          G.add(rings.charAt(i+1)- '0');
          else if(rings.charAt(i)=='B')
          B.add(rings.charAt(i+1)- '0');
      }


      int ans = 0;
      for(int i=0;i<=9;i++){
          if(R.contains(i) && G.contains(i) && B.contains(i))
          ans++;
      }

      return ans;



        }
    
}