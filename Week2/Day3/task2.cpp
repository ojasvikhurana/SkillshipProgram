/*567. Permutation in String

Given two strings s1 and s2, write a function to return true if s2 contains the permutation of s1.
 In other words, one of the first string's permutations is the substring of the second string.*/

 bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>h;
        for(auto i:s1){
            h[i]++;
        }
        int s=0,e=0;
        int count=0;
        while(e!=s2.length()){
            h[s2[e]]--;
            if(h[s2[e]]>=0){
                count++;
            }
            e++;
            while(count==s1.length()){
            //    cout<<s<<e<<count<<"\n";
                if(e-s==s1.length()){
                    return true;
                }
                h[s2[s]]++;
                if(h[s2[s]]>=1){
                    count--;
                }
                s++;
            }
        }
        return false;
    }