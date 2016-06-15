
// Prog4.cpp : Defines the entry point for the console application.
//

#include "BST.h"
using namespace std;
// CS212, Spring 2014, Program #5
void main()
{
	// Create a binary search tree for strings
	BST<string> sTree;

	// Add elements to the tree
	sTree.insert("America");
	sTree.insert("Canada");
	sTree.insert("Russia");
	sTree.insert("France");
	sTree.insert("Mexico");

	// Create an Iterator
	Iterator<string> iterator = sTree.begin();

	sTree.insert("Texas"); // modify the tree

						   // Traverse a binary tree using iterators
	while (iterator != sTree.end())
	{
		cout << *iterator << endl;
		iterator++;
	}
	// Texas is missing, FIX IT!!!!

	for (string& s : sTree)
	{
		cout << s << endl;
	}

	sTree.clear();

	BST<int> iTree;

	iTree.insert(5);
	iTree.insert(6);
	iTree.insert(7);
	iTree.insert(3);
	iTree.insert(9);

	for (int i : iTree)
	{
		cout << i << endl;
	}

	system("pause");
}
