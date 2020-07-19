/* 899. Orderly Queue
A string S of lowercase letters is given.  Then, we may make any number of moves.
In each move, we choose one of the first K letters (starting from the left), remove it, and place it at the end of the string.
Return the lexicographically smallest string we could have after any number of moves.*/


string orderlyQueue(string S, int K) {
       if(K==1){
          string ans=S;
           for(int i=1;i<S.length();i++){
               string temp= S.substr(i)+S.substr(0,i);
               if(temp<ans)ans=temp;
           }
           return ans;
       }else{
           sort(S.begin(),S.end());
           return S;
       }
        return S;
    }