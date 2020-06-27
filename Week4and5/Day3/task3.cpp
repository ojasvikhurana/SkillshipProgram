/*609. Find Duplicate File in System
Given a list of directory info including directory path, and all the files with contents in this directory, you need to find out all the groups of duplicate files in the file system in terms of their paths.
A group of duplicate files consists of at least two files that have exactly the same content.
A single directory info string in the input list has the following format:
"root/d1/d2/.../dm f1.txt(f1_content) f2.txt(f2_content) ... fn.txt(fn_content)"
It means there are n files (f1.txt, f2.txt ... fn.txt with content f1_content, f2_content ... fn_content, respectively) in directory root/d1/d2/.../dm. Note that n >= 1 and m >= 0. If m = 0, it means the directory is just the root directory.
The output is a list of group of duplicate file paths. For each group, it contains all the file paths of the files that have the same content. A file path is a string that has the following format:
"directory_path/file_name.txt"*/

vector<vector<string>> findDuplicate(vector<string>& paths) {
        vector<vector<string>>ans;
        if(paths.size()==0)return ans;
        unordered_map<string,vector<string>>h;
        for(int i=0;i<paths.size();i++){
            string path="";
            string content="";
            int j=0;
            while(paths[i][j]!=' '){
                path+=paths[i][j];
                j++;
            }
            j++;
            while(j<paths[i].length()){
                string content="";
                string filename="/";
                while(paths[i][j]!='('){
                    filename+=paths[i][j];
                    j++;
                }
                j++;
                while(paths[i][j]!=')'){
                    content+=paths[i][j];
                    j++;
                }
                string fpath=path+filename;
                //cout<<content<<fpath;
                if(h.find(content)==h.end()){
                    vector<string>a;
                    h[content]=a;
                }
                h[content].push_back(fpath);
                j+=2;
            }
        }
        for(auto it:h){
            if(it.second.size()==1)continue;
            ans.push_back(it.second);
        }
        return ans;
    }