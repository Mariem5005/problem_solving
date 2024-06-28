class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> mm=new HashMap<>();
        for(int i=0;i<nums.length;i++){
            int num=nums[i];
            if(mm.containsKey(target - num)){
                return new int[] {i,mm.get(target-num)};
            }
            mm.put(num,i);
        }
        return new int[] {};
    }
}