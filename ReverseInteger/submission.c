int reverse(int x){
    int reverse(int x){
        int ret=0;
        int count=0;
        bool isNeg = false;
        int ten = 10;
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

}
