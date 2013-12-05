#include <iostream>
#include <vector>
#include <new>
using namespace std;
//Declaring a simple struct for the node.
struct node{

	int size;
	int depth;
	int key[3];
	node *parent;
	node *child[4];
};
//Class tree has only one root node initially
class tree{

	public:
		tree();
		~tree();
		node root;
		
		void insert(int key);
		void search(int key);
};
