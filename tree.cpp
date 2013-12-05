#include "tree.h"
//The class creator initializes variables size and depth to zero, since nodes are empty
tree::tree(){
	root.size = 0;
	root.depth = 0;
}
//Standard destructor
tree::~tree(){}
//Insert function: Compares which "slots" are empty in each node
void tree::insert(int key){
	int temp;
	if (root.size==0){
		root.key[0] = key;
		root.size = 1;
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
		cout << "inserted value " << root.key[1] << endl;
	}
	else if(root.size==2){
		root.key[2] = key;
		root.size = 3;
		cout << "inserted value " << root.key[2] << endl;
	}
//	cout << root.key[0] << endl;
}

void tree::search(int key){}
