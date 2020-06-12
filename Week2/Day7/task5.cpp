/*231. Power of Two
Given an integer, write a function to determine if it is a power of two.*/

 bool isPowerOfTwo(int n) {
        if(n==0) return false;
        if(floor(log2(n))==ceil(log2(n)))
            return true;
        return false;
}