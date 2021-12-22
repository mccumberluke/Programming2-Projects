/*-----------------------------------------------------------
*File Name: BST.cpp
*Author: Luke McCumber
*Assignment: EECS-268 Lab10
*Description: This program will use binary trees for Pokemon.
*Date: 12/6/2021
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
    recClear(m_root);
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::recClear(BNode<ItemType>* curNode){
    if(curNode != nullptr){
        recClear(curNode->getLeft());
        recClear(curNode->getRight());
        delete curNode;
    }
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::remove(KeyType key){
    ItemType poke = search(key);
    recRemove(poke, m_root);
}

template <typename ItemType, typename KeyType>
BNode<ItemType>* BST<ItemType, KeyType>::recRemove(ItemType key, BNode<ItemType>* curNode){
    if(curNode == nullptr){
        throw std::runtime_error("Nothing to remove.");
    }
    else if(curNode->getEntry() > key){
        curNode->setLeft(recRemove(key, curNode->getLeft()));
    }
    else if(curNode->getEntry() < key){
        curNode->setRight(recRemove(key, curNode->getRight()));
    }
    else{
        if(curNode->getRight() != nullptr && curNode->getLeft() == nullptr){
            BNode<ItemType>* temp = curNode->getRight();
            delete curNode;
            return temp;
        }
        else if(curNode->getLeft() != nullptr && curNode->getRight() ==nullptr){
            BNode<ItemType>* temp = curNode->getLeft();
            delete curNode;
            return temp;
        }
        else if(curNode->getRight() == nullptr && curNode->getLeft() == nullptr){
            BNode<ItemType>* temp = curNode;
            curNode = nullptr; 
            delete temp;
        }
        else{
            BNode<ItemType>* temp = getrightNode(curNode->getRight());
            curNode->setEntry(temp->getEntry());
            curNode->setRight(recRemove(temp->getEntry(), curNode->getRight()));
        }
    }
    return(curNode);
}

template <typename ItemType, typename KeyType>
BNode<ItemType>* BST<ItemType, KeyType>::getrightNode(BNode<ItemType>* curNode){
    if(curNode->getLeft() != nullptr){
        return(getrightNode(curNode->getLeft()));
    }
    else{
        return(curNode);
    }
}

template <typename ItemType, typename KeyType>
BST<ItemType, KeyType>::BST(const BST <ItemType, KeyType> &normalTree){
    m_root = recCopy(normalTree.m_root);
}

template <typename ItemType, typename KeyType>
BNode <ItemType>* BST<ItemType, KeyType>::recCopy(BNode<ItemType>* curNode){
    BNode<ItemType>* copyofTree = nullptr;
    if(curNode != nullptr){
        copyofTree = new BNode<ItemType>(curNode->getEntry());
        copyofTree->setLeft(recCopy(curNode->getLeft()));
        copyofTree->setRight(recCopy(curNode->getRight()));
    }
    else{
        return(copyofTree);
    }
}

template <typename ItemType, typename KeyType>
BST<ItemType, KeyType>::~BST(){
    clear();
}