/*-----------------------------------------------------------
*File Name: BST.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab09
*Description: This program will use binary trees for Pokemon.
*Date: 11/23/2021
*
-----------------------------------------------------------*/
template <typename ItemType, typename KeyType>
BST<ItemType, KeyType>::BST(){
    m_root = nullptr;
}

template <typename ItemType, typename KeyType>
ItemType BST<ItemType, KeyType>::search(KeyType key) const{
    return(recSearch(key, m_root));
}

template <typename ItemType, typename KeyType>
ItemType BST<ItemType, KeyType>::recSearch(KeyType key, BNode<ItemType>* curNode) const{
    if(curNode == nullptr){
        throw(std::runtime_error("Not in tree"));
    }
    else if(curNode->getEntry() == key){
        return(curNode->getEntry());
    }
    else if(curNode->getEntry() > key){
        return(recSearch(key, curNode->getLeft()));
    }
    else{
        return(recSearch(key, curNode->getRight()));
    }
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::add(ItemType entry){
    if(m_root == nullptr){
        m_root = new BNode<ItemType>(entry);
    }
    else{
        recAdd(entry, m_root);
    }
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::recAdd(ItemType entry, BNode<ItemType>* curNode){
    BNode<ItemType>* newNode = new BNode<ItemType>(entry); 
    if(m_root == nullptr){
        m_root = newNode;
    }
    if(curNode->getEntry() == entry){
        throw std::runtime_error("No Dupilcates.");
    }
    else if(entry > curNode->getEntry()){
        if(curNode->getRight() == nullptr){
            curNode->setRight(newNode);
        }
        else{
            recAdd(entry, curNode->getRight());
        }
    }
    else{
        if(curNode->getLeft() == nullptr){
            curNode->setLeft(newNode);
        }
        else{
            recAdd(entry, curNode->getLeft());
        }
    }
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::visitPreOrder(void visit(ItemType)) const{
    visitrecPre(visit, m_root);
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::visitrecPre(void visit(ItemType), BNode<ItemType>* curNode) const{
    if(curNode != nullptr){
        ItemType tree = curNode->getEntry();
        visit(tree);
        visitrecPre(visit, curNode->getLeft());
        visitrecPre(visit, curNode->getRight());
    }
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::visitInOrder(void visit(ItemType)) const{
    visitrecIn(visit, m_root);
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::visitrecIn(void visit(ItemType), BNode<ItemType>* curNode) const{
    if(curNode != nullptr){
        visitrecIn(visit, curNode->getLeft());
        ItemType tree = curNode->getEntry();
        visit(tree);
        visitrecIn(visit, curNode->getRight());
    }
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::visitPostOrder(void visit(ItemType)) const{
    visitrecPost(visit, m_root);
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::visitrecPost(void visit(ItemType), BNode<ItemType>* curNode) const{
    if(curNode != nullptr){
        visitrecPost(visit, curNode->getLeft());
        visitrecPost(visit, curNode->getRight());
        ItemType tree = curNode->getEntry();
        visit(tree);
    }
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::clear(){

}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::remove(KeyType key){

}

template <typename ItemType, typename KeyType>
BST<ItemType, KeyType>::~BST(){

}