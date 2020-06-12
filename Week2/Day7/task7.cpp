/*345. Reverse Vowels of a String
Write a function that takes a string as input and reverse only the vowels of a string.*/

string reverseVowels(string s) {
        unordered_map<char,int>h;
        h['a']=1,h['e']=1,h['i']=1,h['o']=1,h['u']=1;
        h['A']=1,h['E']=1,h['I']=1,h['O']=1,h['U']=1;
        int l=0,r=s.length()-1;
        while(l<r){
            while(l<r and (h.find(s[l])==h.end()))
                  l++;
            while(r>l and (h.find(s[r])==h.end()))
                  r--;
            char temp=s[l];
                  s[l]=s[r];
                  s[r]=temp;
                  l++;
                  r--;
        }
        return s;
}