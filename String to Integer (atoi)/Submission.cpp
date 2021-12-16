class Solution {
public:
    int myAtoi(string s) {
        string::iterator letter;
        int toret = 0;
        for(letter = s.begin();  letter!= s.end(); ++letter){
            if( *letter == 32 ){
                cout << "White space" << endl;
            }else if( *letter > 47 && *letter < 58 ){
                cout << *letter << endl;
            }
        }
        return 0;
    }
};