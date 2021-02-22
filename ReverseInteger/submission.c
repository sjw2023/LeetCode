int reverse(int x){
    int ret=0;
    int count=0;
    bool isNeg = false;
    int ten = 10;
    // long long max = ( (1 << 31 )-1 )/ 10;// devided by 10 since we need to compare if x*ten is greater than max or not
    // long long min = -( (1 << 31 ) ) / 10;
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
        int pop = x % 10;
        if( ret > INT_MAX/10 || (ret == INT_MAX / 10 && pop > 7)) return 0;
        if( ret < INT_MIN/10 || (ret == INT_MIN / 10 && pop < -8)) return 0;

        ret = ret * ten + pop;
        x /= 10;
        // count++;
    }
    return (isNeg) ? -ret : ret;
}
