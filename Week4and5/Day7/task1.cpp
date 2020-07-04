/*401. Binary Watch
A binary watch has 4 LEDs on the top which represent the hours (0-11), and the 6 LEDs on the bottom represent the minutes (0-59).
Each LED represents a zero or one, with the least significant bit on the right.*/

int count(int n){
        int c=0;
        while(n){
            c++;
            n=n&(n-1);
        }
        return c;
    }
    vector<string> readBinaryWatch(int num) {
        vector<string>ans;
        for(int i=0;i<=11;i++){
            for(int j=0;j<=59;j++){
                int a=count(i);
                int b=count(j);
                if(a+b==num){
                    string t=to_string(i)+":";
                    if(j<10)t+='0';
                    t+=to_string(j);
                    ans.push_back(t);
                }
            }
        }
        return ans;
    }