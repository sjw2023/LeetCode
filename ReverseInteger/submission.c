#include <math.h>

int reverse(int x){
    int ret=0;
    int count=0;
    int ten = 10;
    if(x == 0)
    {
        return 0;
    }
    if( x < 0 )
    {
        ten = -0;
    }
    while( x > 0 )
    {
        ret *= ten;
        ret += x%10;
        x /= 10;
        count++;
    }
    return ret;
}
