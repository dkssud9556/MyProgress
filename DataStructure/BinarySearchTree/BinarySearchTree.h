#ifndef __BINARY_SEARCH_TREE_H__
#define __BINARY_SEARCH_TREE_H__

#include "BinaryTree.h"

typedef BTData BSTData;

void BSTMakeAndInit(BTreeNode** pRoot);
BSTData BSTGetNodeData(BTreeNode* bst);
BTreeNode* BSTInsert(BTreeNode* pRoot, BSTData data);
BTreeNode* BSTSearch(BTreeNode* bst, BSTData target);
BTreeNode* BSTRemove(BTreeNode* pRoot, BSTData target);
void BSTShowAll(BTreeNode*, char*);
void ShowIntData(int);

#endif