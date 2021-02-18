

char * longestPalindrome(char * s){
    char *ret, *r, *l, *cursor = s;
    int length = 0;

    //check Palindrome
    //while looping string with cursor
    //case1: odd length
    //      compare cursor-- and cursor++ wihle there is left and right side
    //      and save the logest length
    //case2: even length
    //      left is still cursor - 1
    //      but right will be cursor + n till inner string stop repeating.
    //      from there compare left--, right++ while there is left and right side
    while( *cursor )
    {
        printf("%c", *cursor);
        r = cursor + 1;
        l = cursor - 1;

        //move r to end of repeatition
        while( *r && ( *r == *(r-1) ))
              r++;
        //from now on just need to compare l and r till there isn't match
        while( l >= s && *r )
        {
            if ( *l == *r )
            {
                l--;
                r++;
            }
            else
                break;
        }
        if( length < r - l - 1 )
        {
            length = r - l - 1;// since while checkin palidrome l--; r++; part moved r and l cursor to letter which is not palidrom
            ret = l + 1;//same reason above
        }
        //move cursor
        cursor=r;
    }
    ret[length] = '\0';
    return ret;
}
