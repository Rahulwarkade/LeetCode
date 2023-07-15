import java.util.*;

class shuffle
{
	static class Solution {
    public String restoreString(String s, int[] indices) {
       StringBuilder sb = new StringBuilder(s);
       int n = indices.length;

       for(int i=0; i<n; i++)
       {
           int idx = indices[i];
           char ch = s.charAt(i);
           sb.setCharAt(idx,ch);
       } 

       return sb.toString();
    }
	
	}

	public static void main(String args[])
	{
		String s = "Codeleet";
		int[] indices = {4,5,6,7,0,1,2,3};

		Solution obj = new Solution();
		System.out.println(obj.restoreString(s,indices));
	}
}