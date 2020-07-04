/* 191. Number of 1 Bits
Write a function that takes an unsigned integer and return the number of '1' bits it has (also known as the Hamming weight).*/

int hammingWeight(uint32_t n) {
        int count=0;
        while(n){
            bool c=n & 1;
            if(c)count++;
            n=n>>1;
        }
        return count;
    }