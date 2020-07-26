/*207. Course Schedule
There are a total of numCourses courses you have to take, labeled from 0 to numCourses-1.
Some courses may have prerequisites, for example to take course 0 you have to first take course 1, which is expressed as a pair: [0,1]
Given the total number of courses and a list of prerequisite pairs, is it possible for you to finish all courses?
 */


 bool func(int numCourses, vector<vector<int>>& pr,vector<bool> &visited,vector<bool> &rstack,int v){
         if(visited[v]==false){
            visited[v]=true;
             rstack[v]=true;
           for(int i=0;i<pr[v].size();i++){
                if(!visited[pr[v][i]] and func(numCourses,pr,visited,rstack,pr[v][i]))
                    return true;
                else if(rstack[pr[v][i]])return true;
             }
         }
        rstack[v]=false;
         return false;
    }
    
    bool help(int numCourses,vector<vector<int>>prv){
         vector<bool>visited(numCourses,false);
        vector<bool>rstack(numCourses,false);
        
        for(int i=0;i<numCourses;i++){
            if(!visited[i] and func(numCourses,prv,visited,rstack,i))
                return true;
            //cout<<i;
        }
        
        return false;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prl) {
        vector<vector<int>>prv(numCourses);
        for(int i=0;i<prl.size();i++){
            prv[prl[i][0]].push_back(prl[i][1]);
        }
      //  cout<<prv[1].size();
       
        return !help(numCourses,prv);
    
    }