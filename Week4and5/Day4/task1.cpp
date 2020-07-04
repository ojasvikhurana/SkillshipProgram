/*187. Repeated DNA Sequences
All DNA is composed of a series of nucleotides abbreviated as A, C, G, and T, for example: "ACGAATTCCG". When studying DNA, it is sometimes useful to identify repeated sequences within the DNA.
Write a function to find all the 10-letter-long sequences (substrings) that occur more than once in a DNA molecule.*/


vector<string> findRepeatedDnaSequences(string s) {
        vector<string>ans;
       if(s.length()<=10)return ans;
        unordered_map<string,int>h;
        for(int i=0;i<s.length()-9;i++){
            h[s.substr(i,10)]++;
        }
        for(auto it:h){
            if(it.second>1)
                ans.push_back(it.first);
        }
        return ans;
    }