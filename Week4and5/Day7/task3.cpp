/*190. Reverse Bits
Reverse bits of a given 32 bits unsigned integer. */

uint32_t reverseBits(uint32_t n) {
        uint32_t nn=0;
        int k=31;
        while(n){
            bool c=n&1;
            nn=nn | (c<<k);
            n=n>>1;
            k--;
        }
        return nn;
    }