/*-----------------------------------------------------------
*File Name: BST.h
*Author: Luke McCumber
*Assignment: EECS-268 Lab09
*Description: This program will use binary trees for Pokemon.
*Date: 11/23/2021
*
-----------------------------------------------------------*/
#ifndef BST_H
#define BST_H
#include "BSTInterface.h"
#include "BNode.h"
#include <stdexcept>

template <typename ItemType, typename KeyType>
class BST: public BSTInterface<ItemType, KeyType>
{
    private:
        BNode<ItemType>* m_root;
        ItemType recSearch(KeyType key, BNode<ItemType>* curNode) const;
        void recAdd(ItemType entry, BNode<ItemType>* curNode);
        //visits the tree then gets left then gets right 
        void visitrecPre(void visit(ItemType), BNode<ItemType>* curNode) const;
        //Gets the left node on tree then visits then gets right tree
        void visitrecIn(void visit(ItemType), BNode<ItemType>* curNode) const;
        //Gets the left node on tree then right and then visits the node
        void visitrecPost(void visit(ItemType), BNode<ItemType>* curNode) const;
    public:
        BST();
        ~BST();
        void add(ItemType entry);
        //returns the recursion call for search
        ItemType search(KeyType key) const;
        void clear(); //dont need it 
        void remove(KeyType key); //dont need phase 2
        //returns the recursion call for Pre-Order
        void visitPreOrder(void visit(ItemType)) const;
        //returns the recursion call for In-Order
        void visitInOrder(void visit(ItemType)) const;
        //returns the recursion call for Post-Order
        void visitPostOrder(void visit(ItemType)) const;
};
#include "BST.cpp"
#endif
