func isHappy(n int) bool {
    var numbers[] int
    t:=n
    for t>0{
        numbers=append(numbers,t%10)
        t=t/10
    }
    var crap int
    for _, v := range numbers{
        crap+=v*v
    }
    if crap==1{
        return true
    } else if crap==4{
        return false
    } else{
        return isHappy(crap)
    }
}