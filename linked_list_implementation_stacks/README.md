1. Why linked list representation?
Use linked list when the size of the stack is not known in advanced
2. Why should we prefer the beginning of the linked list as the top of the stack?
The functions of deletion and insertion at the beginning of the linked list represent 0(1) in time, and this is a constant, but if we want to use the end of the liked list as a top, the time complexity of adding a node at the end is 0(1) but to removing will be 0(n) (traversal)