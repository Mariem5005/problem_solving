func intersect(nums1, nums2 []int) []int {
    sort.Ints(nums1)
    sort.Ints(nums2)
    return intersectTwoPointers(nums1, nums2)
}
func intersectTwoPointers(nums1, nums2 []int) []int{
    sol:=make([]int,0)
    for ptr1,ptr2:=0,0;ptr1<len(nums1)&&ptr2<len(nums2);{
        if nums1[ptr1]==nums2[ptr2]{
            sol=append(sol,nums1[ptr1])
            ptr1,ptr2=ptr1+1,ptr2+1
        }else if nums1[ptr1] < nums2[ptr2]{
            ptr1++
        }else{
            ptr2++
        }
    }
    return sol
}