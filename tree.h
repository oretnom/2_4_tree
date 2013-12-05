#include <iostream>
#include <vector>
#include <new>
using namespace std;
///Declaring a simple struct for the node. Size indicates how many items the node has, depth indicates the vertical position of the node within the tree, key is the array that will contain the inserted values. Finally, parent and child are pointers to those respective nodes.
struct node{

	int size;
	int depth;
	int key[3];
	node *parent;
	node *child[4];
};
///Class tree has only one root node initially
class tree{

	public:
		tree();
		~tree();
		node root;
		
		void insert(int key);
		void search(int key);
};
