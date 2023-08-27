class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l=moves.length();
        int x=0,y=0,z=0;
        for(int i=0;i<l;i++){
           if(moves[i]=='L') x++;
           if(moves[i]=='R') y++;
           if(moves[i]=='_') z++;}
        if(x>y) return(x-y+z);
        else
        return (y-x+z);
    }
};