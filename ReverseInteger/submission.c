#include <math.h>

int reverse(int x){
    int ret=0;
    int count=0;
    bool isNeg = false;
    int ten = 10;
    if(x == 0)
    {
        return 0;
    }
    if( x < 0 )
    {
        isNeg = true;
        x *= -1;
    }
    while( x != 0 )
    {
        ret *= ten;
        printf("%d\n", ret);
        ret += x%10;
        x /= 10;
        count++;
    }
    return (isNeg) ? -ret : ret;
}
