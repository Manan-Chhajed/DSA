// just a mod in the previoous problemm

/* 
  create a string "$$$.." of dp[n][m] length
  start from n, m
  1. i = n, j = m
  2. if(s1[i-1] == s2[j-1]) store the letter
  else if(dp[i-1][j] > dp[i][j-1]) i--;
  else j--;
*/
