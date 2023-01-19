// https://www.codingninjas.com/codestudio/problems/subset-sum-equal-to-k_1550954?leftPanelTab=0

// Generate all subsequences and check for target
// 2 methods --> bit manipulation
//           --> recursion

/*
   1. express f(index, target)
   2. explore possibilities for that index --> part of subsequence
                                           --> not a part
   3. if any of them is true, return true
*/

// TABULATION --> base case to up i.e. BOTTOM UP
