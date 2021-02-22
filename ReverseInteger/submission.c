int reverse(int x){
    int ret=0;
    int count=0;
    bool isNeg = false;
    int ten = 10;
    int max = ( (1 << 30 )-1 )/ 10;// devided by 10 since we need to compare if x*ten is greater than max or not
    int min = -( (1 << 30 ) ) / 10;
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
        if( x > max || x < min )
            return 0;
        ret *= ten;
        // printf("%d\n", ret);
        ret += x%10;
        x /= 10;
        count++;
    }
    return (isNeg) ? -ret : ret;
}
