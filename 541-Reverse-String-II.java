class Solution {
    public String reverseStr(String s, int k) {
        char[] c=s.toCharArray();
        for(int i=0;i<s.length()-1;i+=(k*2)){
            int l=i;
            int r=Math.min(i+k-1,s.length()-1);
            while(l<r){
                char temp=c[l];
                c[l]=c[r];
                l++;
                c[r]=temp;
                r--;
            }
        }
        return new String(c);
    }
}