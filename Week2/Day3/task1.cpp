/* 1002. Find Common Characters

Given an array A of strings made only from lowercase letters, return a list of all characters that show up in all strings within the list (including duplicates).  For example, if a character occurs 3 times in all strings but not 4 times, you need to include that character three times in the final answer.

You may return the answer in any order.*/

vector<string> commonChars(vector<string>& A) {
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        for(int i=0;i<A[0].length();i++){
            v1[A[0][i]-'a']++;
        }
        for(int i=1;i<A.size();i++){
            for(int j=0;j<A[i].length();j++){
                v2[A[i][j]-'a']++;
            }
            for(int j=0;j<26;j++){
                v1[j]=min(v1[j],v2[j]);
                v2[j]=0;
            }
        }
        vector<string> ans;
         for(int j=0;j<26;j++){
            while(v1[j]){
                string s="";
                s+=char(j+'a');
                ans.push_back((s));
                v1[j]--;
            }
        }
        return ans;
    }