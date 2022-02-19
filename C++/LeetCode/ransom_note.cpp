#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int r = ransomNote.length();
        int m = magazine.length();
        
        if(m<r) return false;
        
        // count frequencies of charecter
        vector<int> frequency(26);
        for(char ch:magazine)
            frequency[ch-'a']++; //charecter-'a' <== give index b/w 0-26
        
        //subtract all string frequencies -1 each round, if frequency is less than 0 then then
        //would not generate charecter
        for(char ch:ransomNote)
            if(--frequency[ch-'a']<0)
                return false;
        return true;
    }
};