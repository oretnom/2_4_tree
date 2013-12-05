#include "tree.h"
//The class creator initializes variables size and depth to zero, since nodes are empty
tree::tree(){
	root.size = 0;
	root.depth = 0;
	root.parent = NULL;
}
//Standard destructor
tree::~tree(){}
//Insert function: Compares which "slots" are empty in each node. Also compares values to insert in the
//right position
void tree::insert(int key){
	int temp,temp1;
	if (root.size==0){
		root.key[0]=key;
		root.size=1;
		cout << "inserted value " << root.key[0] << " at position 0 of node" << endl;
	}
	else if(root.size==1){
		if(key>root.key[0]){
			root.key[1] = key;
			cout << "inserted value " << root.key[0] << " at position 1 of node" << endl;
		}
		else{
			temp=root.key[0];
			root.key[0]=key;
			root.key[1]=temp;
			cout << "inserted value " << root.key[0] << " at position 0 of node" << endl;
		}
		root.size = 2;
	}
	else if(root.size==2){
		if(key>root.key[0] && key>root.key[1]){
			root.key[2] = key;
			cout << "inserted value " << root.key[2] << " at position 2 of node" << endl;
		}
		else if(key<root.key[0] && key<root.key[1]){
			temp = root.key[0];
			temp1 = root.key[1];
			root.key[0]=key;
			root.key[1]=temp;
			root.key[2]=temp1;
			cout << "inserted value " << root.key[0] << " at position 0 of node" << endl;
		}	
		else if(key>=root.key[0] && key<=root.key[1]){
		temp = root.key[1];
		root.key[1]=key;
		root.key[2]=temp;
		cout << "inserted value " << root.key[1] << " at position 1 of node" << endl;
		}
		root.size = 3;
	}
//If the node is full, we create a new node to insert more data
	else{
		node child0;
		root.child[0] = &child0;
	}
//	cout << root.key[0] << endl;
}

void tree::search(int key){}
