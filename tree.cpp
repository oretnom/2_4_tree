#include "tree.h"

tree::tree(){
	root->size = 0;
	root->depth = 0;
}

tree::~tree(){}

void tree::insert(int key){
	root->key[0] = key;
//	cout << root->key[0] << endl;
}

void tree::search(int key){}
