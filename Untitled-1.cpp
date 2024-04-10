#include <iostream>
#include <bitset>
#include <math.h>

using namespace std;

int main() {
int m=n;
        int mask=0;
        if(n==0)
           return 1;
        while(m!=0){
            mask=(mask << 1 )| 1;
            m=mask >> 1;
        }
        int ans= (~n) & mask;
        return ans;
}



