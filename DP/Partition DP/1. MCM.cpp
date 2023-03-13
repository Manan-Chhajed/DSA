// Partition DP
/*
  e.g. when A * B * C
  --> (A * B) * C
  --> A * (B * C)
  since multiple ways, partition DP
*/

// 1. Matrix Chain Multiplication
// https://www.codingninjas.com/codestudio/problems/matrix-chain-multiplication_975344?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos
/*
   - start with entire block/array
   - try all partitions
   - return best possible 2 partitions
   
   Memoization
   - TC O(n * n * n)
   - SC O(n * n) + O(n)
   
   Tabulation
   - 
*/
