//
// Created by cxl on 2021/1/6.
//

#ifndef PROGRAM_SKIPLIST_H
#define PROGRAM_SKIPLIST_H
const int maxLevel = 16;

template<class T>
class SkipListNode {
public:
    SkipListNode() {}
    T key;
    SkipListNode **next;
};

template<class T>
class SkipList {
public:
    SkipList();
    bool isEmpty() const;
    void choosePowers();
    int chooseLevel();
    T* skipListSearch(const T&);
    void skipListInsert(const T&);

private:
    typedef SkipListNode<T> *nodePtr;
    nodePtr root[maxLevel];
    int powers[maxLevel];
};
template<class T>
SkipList<T>::SkipList() {
    for (int i = 0; i < maxLevel; ++i) {
        root[i]=0;
    }
}


#endif //PROGRAM_SKIPLIST_H
