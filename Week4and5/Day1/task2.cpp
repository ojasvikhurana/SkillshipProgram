/* 771. Jewels and Stones
You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.
The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".*/



 int numJewelsInStones(string J, string S) {
        if(S.empty() or J.empty())return 0;
        unordered_map<char,int>h;
        for(int i=0;i<J.length();i++){
            h[J[i]]=1;
        }
        int count=0;
        for(int i=0;i<S.length();i++){
            if(h.find(S[i])!=h.end())
                count++;
        }
        return count;
    }