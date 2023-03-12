// Partition DP
/*
  e.g. when A * B * C
  --> (A * B) * C
  --> A * (B * C)
  since multiple ways, partition DP
*/

// 1. Matrix Chain Multiplication
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
