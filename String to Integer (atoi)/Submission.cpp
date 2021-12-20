class Solution {
public:
    int myAtoi(string s) {
        string::iterator letter;
        int toret = 0;
        bool negative = false;
        for(letter = s.begin();  letter!= s.end(); ++letter){
            if( *letter == 32 ){
                //ignore
                //cout << "White space" << endl;
            }else if( *letter > 47 && *letter < 58 ){
                toret *= 10;
                toret += (*letter - 48);
                // cout << toret << endl;
            }else if( *letter == '-' ){
                // cout << '-' << endl;
                negative = true;
            }
            else{
                break;
            }
        }
        return negative ? -toret : toret;
    }
};