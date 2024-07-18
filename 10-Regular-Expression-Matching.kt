class Solution {
    fun isMatch(s: String, p: String): Boolean {
        if(p.isEmpty()){return s.isEmpty()} //both empty
        val firstMatch= s.isNotEmpty()&& (p[0]==s[0]||p[0]=='.') //check first
        return if(p.length>=2 && p[1]=='*'){
            isMatch(s,p.substring(2)) || (firstMatch && isMatch(s.substring(1),p))
        }
        else{
            firstMatch && isMatch(s.substring(1),p.substring(1))
        }
    }
}