/*
n = no of nodes
e = no of edges
Input -
n e 
next e lines = edges- src dest
n = fixed, e = can be anything

Representation = 2 ways - 

1. Adjancency matrix
nodes = 0/1 based
1 based => adj_mat[n+1][e+1]
Undirected graph - addd edge
adj_mat[u][v] = adj_mat[u][v] = 1
SC=O(n*e) ~ O(n^2)

2. Adjancency list
1 based indexing of nodes => adj_list = list - vector<int>adj_list[n+1]
each index of list - store connected nodes of each node

*/