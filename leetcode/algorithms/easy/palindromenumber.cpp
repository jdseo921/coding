/*
Given an integer x, return true if x is a palindrome, and false otherwise.
*/

public class Solution {
    public bool IsPalindrome(int x) {
        if (x == 0) {
            return true;
        }
        var firstString = x.ToString();
        var secondString = "";
        while (x >= 1) {
            var current = (x % 10).ToString();
            secondString += current;
            x /= 10;
        }
        return firstString.Equals(secondString);
    }
}
