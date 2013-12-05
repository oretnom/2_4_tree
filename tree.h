#include <iostream>
#include <vector>
#include <new>
using namespace std;

struct node{

	int size;
	int depth;
	int key[3];
	node *parent;
};

class tree{

	public:
		tree();
		~tree();
		node root;
		
		void insert(int key);
		void search(int key);
};
