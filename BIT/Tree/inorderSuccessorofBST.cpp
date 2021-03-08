we first create a tree using struct that has 3 pointer- left, right, parent


There are 2 cases:
1. when the node has right subtree - find the minimum element in right subtree
2. when the node does not have right subtree - find the ancestor such that the node is the left subtree of that ancestor
// https://www.geeksforgeeks.org/inorder-successor-in-binary-search-tree/