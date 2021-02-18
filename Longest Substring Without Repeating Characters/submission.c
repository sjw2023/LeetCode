int lengthOfLongestSubstring(char * s){
    int ascii[128] = {0,};//ascii[ *s ] will indicate, # of occurence of letter
    int longest = 0;
    char *pwe = s;//pointer for pointing the end of the window
    char *pws = s;//pointer for pointing the begging of the window
    while( *pwe )//while there is letter
    {
        if( ascii[*pwe] )//if letter occured before, that is reapted letter happend.
        {
            longest = ( pwe - pws > longest ) ? pwe - pws : longest; // set length of sub-string.
            //reapted letter occured so removing it from the substring
            //which is pointed by pws
            //untill *pws == *pwe
            while( *pws != *pwe )//for example, "abca" the first a will be removed
            {
                ascii[*pws++] = 0;//
            }
            //and move cursors.
            pwe++;
            pws++;
        }
        else
        {
            ascii[*pwe++] += 1;
        }

    }
    return ( pwe - pws > longest ) ? pwe - pws : longest; //return the losgest length
}
