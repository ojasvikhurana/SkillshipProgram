/* 811. Subdomain Visit Count
A website domain like "discuss.leetcode.com" consists of various subdomains. At the top level, we have "com", at the next level, we have "leetcode.com", and at the lowest level, "discuss.leetcode.com". When we visit a domain like "discuss.leetcode.com", we will also visit the parent domains "leetcode.com" and "com" implicitly.
Now, call a "count-paired domain" to be a count (representing the number of visits this domain received), followed by a space, followed by the address. An example of a count-paired domain might be "9001 discuss.leetcode.com".
We are given a list cpdomains of count-paired domains. We would like a list of count-paired domains, (in the same format as the input, and in any order), that explicitly counts the number of visits to each subdomain.*/

 vector<string> subdomainVisits(vector<string>& cpdomains) {
         vector<string>ans;
        if(cpdomains.size()==0)return ans;
        unordered_map<string,int>h;
        for(int i=0;i<cpdomains.size();i++){
            if(cpdomains[i].length()==0)continue;
            int j=0;
            while(cpdomains[i][j]!=' ')j++;
            int num=0;
            for(int k=0;k<j;k++){
                int n=cpdomains[i][k]-'0';
                num=num*10+n;
            }
            cpdomains[i]=cpdomains[i].substr(j+1);
            while(cpdomains[i]!=""){
                if(h.find(cpdomains[i])==h.end())
                    h[cpdomains[i]]=num;
                else
                    h[cpdomains[i]]+=num;
                int k=0;
                while(k<cpdomains[i].length() and cpdomains[i][k]!='.')k++;
                if(k==cpdomains[i].length())cpdomains[i]="";
                else
                cpdomains[i]=cpdomains[i].substr(k+1);
            }
        }
       
        for(auto it=h.begin();it!=h.end();it++){
            string c=to_string(it->second);
            string anspb=c+" "+it->first;
            ans.push_back(anspb);
        }
        return ans;
    }