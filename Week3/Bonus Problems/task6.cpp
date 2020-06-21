/* Given two non-negative integers num1 and num2 represented as string, return the sum of num1 and num2.*/

string addStrings(string num1, string num2) {
        int i=num1.length()-1,j=num2.length()-1;
        string s="";
        int carry=0;
        while(i>=0 and j>=0){
            int num=num1[i]-'0'+num2[j]-'0'+carry;
            char c=(num%10)+'0';
            s=c+s;
            carry=num/10;
            i--;
            j--;
        }
        while(i>=0){
            int num=num1[i]-'0'+carry;
            char c=(num%10)+'0';
            s=c+s;
            carry=num/10;
            i--;
        }
        while(j>=0){
            int num=num2[j]-'0'+carry;
            char c=(num%10)+'0';
            s=c+s;
            carry=num/10;
            j--;
        }
        if(carry){
        char c=carry+'0';
            s=c+s;
        }
        return s;
    }