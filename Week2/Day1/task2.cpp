/* 728. Self Dividing Numbers

A self-dividing number is a number that is divisible by every digit it contains.
For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.
Also, a self-dividing number is not allowed to contain the digit zero.
Given a lower and upper number bound, output a list of every possible self dividing number, including the bounds if possible.*/

vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            int num=i;
            while(num){
                int n=num%10;
                if(n==0 or i%n!=0)
                    break;
                num/=10;
            }
            if(num==0)ans.push_back(i);
        }
        return ans;
    }