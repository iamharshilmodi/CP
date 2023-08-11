// Binary trees

No of B.trees [Unlabeled] with 'n' nodes = (2n)C(n)/(n+1) [catalan number]
No of B.trees [labeled] with 'n' nodes = ((2n)C(n)/(n+1))*(n!)
No of trees with 'n' nodes and having max height possible = 2^n-1
No of nodes if height of B.tree is H 
	- Max Nodes = s^(h+1) - 1;
	- Min Nodes = h+1;
Height of B.tree if No of nodes are given
	- Max Height = n-1;
	- Min Height = log2(n+1)-1;
No of nodes with digree [0] = No. of nodes with digree [2] + 1

# Types of binary Trees

1. Full B.Tree

		A
	   / \
	  B   C
	 /\   /\
	D  E  F G

2. Strict B.Tree

		A
	   / \
	  B   C
	 	  /\   
		 D  E  

3. Complete B.Tree

		A
	   / \
	  B   C
	 /\   
	D  E  

// Strict Binary trees

No of nodes if height is given
	- Min Nodes = 2n + 1
	- Max Nodes = 2^(h+1)-1
Height of S.B.tree if No of nodes are given
	- Max Height = n-1;
	- Min Height = log2(n+1)-1;

