// https://www.codingninjas.com/codestudio/problems/longest-common-subsequence_624879?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0

// To print all subsequences --> Power Set
//                           --> Recursion   

/*
  here we will need 2 indices to represent the recursion
  previously pick not pick, here match not match
  
  // recursive approach --> exponential TC

  // lets opitmize. Overlapping subproblems?? Yeah memoize
  // for memoization --> TC O(n1 * n2)
  //                 --> SC O(n1 * n2) + O(n1 + n2) auxillary stack space
  
  // tabulation 
  // 1. copy the base case
  // 2. write down the changing parameters in opp. order
  // 3. copy the recurrence
*/
