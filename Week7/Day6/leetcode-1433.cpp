/*1433. Check If a String Can Break Another String
Given two strings: s1 and s2 with the same size, check if some permutation of string s1 can break some permutation of string s2 or vice-versa (in other words s2 can break s1).
A string x can break string y (both of size n) if x[i] >= y[i] (in alphabetical order) for all i between 0 and n-1.*/

 bool checkIfCanBreak(string s1, string s2) {
       vector<int>v1(26,0);
        vector<int>v2(26,0);
        for(int i=0;i<s1.length();i++){
            v1[s1[i]-'a']++;
            v2[s2[i]-'a']++;
        }
        bool a1=true,a2=true;
        for(int i=0;i<26;i++){
            if(i!=0){
                v1[i]+=v1[i-1];
                v2[i]+=v2[i-1];
            }   
            if(v1[i]<v2[i])a1=false;
            if(v2[i]<v1[i])a2=false;
        }
        return a1 or a2;
    }