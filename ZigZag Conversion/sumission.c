

char * convert(char * s, int numRows){
    char *cursor = s;
    static char ret[1000] = {0};
    int length = 0;
    int i = 0;
    int gap = (numRows*2)-2;
    int gap2 = 0;
    int index = 0, retIndex = 0;
    // get length of string

    while( *cursor++ )
        length++;
    if(length == 1 || numRows == 1)
        return s;
    while( i < numRows )
    {
        index = i;
        while( index < length)
        {
            if(gap != 0)
            {
                // printf("%c\n", s[index]);
                ret[retIndex++] = s[index];
                index += gap;
            }
            if(gap2 != 0 && index < length){
                // printf("%c\n", s[index]);
                ret[retIndex++] = s[index];
                index += gap2;
            }
        }
        i++;
        gap -= 2;
        gap2 += 2;
    }
    ret[length] = '\0';
    return ret;
}
