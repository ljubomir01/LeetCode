/*
Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

 

Example 1:

Input: s = "egg", t = "add"
Output: true

Example 2:

Input: s = "foo", t = "bar"
Output: false

Example 3:

Input: s = "paper", t = "title"
Output: true
*/
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length())
            return false;
        int* niz1 = new int[256];
        int* niz2 = new int[256];
        for(int i = 0;i < s.length();i++){
            if(niz1[s[i]] != niz2[t[i]])
                return false;
            niz1[s[i]] = i + 1;
            niz2[t[i]] = i + 1;
        }
        return true;
    }
};