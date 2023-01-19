// https://www.codingninjas.com/codestudio/problems/partition-a-set-into-two-subsets-such-that-the-difference-of-subset-sums-is-minimum_842494?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos

/* 
  Q. min absolute diff b/2 2 subsets
  
  so if we know s1, s2 = total sum - s1
  
  1. coming back to f(ind, target) --> it means that from index 0 to ind, can target sum be achieved
  2. same for dp[i][j] 
  3. we can traverse all the elements of dp[n-1][j] i.e. whether target j is possible or not
  4. if possible, calculate the min abs(j - (sum - j))
*/
