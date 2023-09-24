namespace wjddml{
	const char dot = '.';
	const char[] oldCommands = "poni_csvferwxyzatmd+-!$%";
	//P, O, N:Outputs \n too.
	//E:The content of new stack won't be stacked to old one. e, on the other hand, does when function-termination.
	//W, X, Y, Z:Don't skip to .a if stack is empty or has only an element. w, x, y, z, on the other hand, do.
	//A:This enables if statement. a, on the other hand, is used for while statement.
	//D:Terminates the program immediately. d, on the other hand, terminates if on main function. Else, goes back to parent function.
	//L:Swaps the content of two top elements.
	//G:Pushes how many elements are on stack.
	//J:Swaps main and sub stacks.
	//H:Pushes -1. Now you can make negative integers easily!
	const char[] newCommands = "PONEWXYZADLGJH";
}
