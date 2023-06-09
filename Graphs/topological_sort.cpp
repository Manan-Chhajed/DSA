/* 
  - Works on DAG. 
    - Why? common sense.
  - Topoplogical sort --> linear ordering of vertices s.t. if there is an edge b/w u and v, u appears before v in that ordering
 
  - Using DFS
    - Algo --> Call dfs and store in stack after the dfs for that node is completed.
  
  - Using BFS - Kahn's Algo
    - Maintain an indegree array
    - Insert all nodes with indegree 0 (say u)
    - Reduce the indegree of those vertices (say v) where the vertice from u is going to v.
    - continue
*/
