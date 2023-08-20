class Solution {
    public boolean isAcronym(List<String> words, String s) {
        if(s.length()<words.size()) return false;
        String st="";
        for(int i=0;i<words.size();i++){
            st+=words.get(i).charAt(0);
            }
        if(st.equals(s))
        return true;
        else
            return false;
    }
}