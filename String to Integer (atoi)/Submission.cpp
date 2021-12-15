class Solution {
public:
    int myAtoi(string s) {
        string::iterator letter;
        for(letter = s.begin();  letter!= s.end(); ++letter){
            cout << *letter << endl;
        }
        return 0;
    }
};