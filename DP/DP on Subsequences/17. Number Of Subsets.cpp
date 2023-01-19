// https://www.codingninjas.com/codestudio/problems/number-of-subsets_3952532?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos

/*
  In Q's like count no. of ways
  1. if condition satisfied return 1
  2. else return 0
  and ans is the sum of all function calls
*/

/*
  1. Express in terms of (index, target)
  2. do all possible stuff
  3. sum of all the possibilities and return
*/

// return pick + notPick :)

// Recursion
// TC O(2 ^ n) and Auxillary Space O(n)

// Memoization
// TC O(n * tar) and SC O(n * tar) + auxillary stack space O(n)

// Tabulation
// removes the auxillary stack space
