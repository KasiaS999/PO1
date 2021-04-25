#pragma once
#include "MyNode.h"
#include <initializer_list>

class MyNode;

class MyList{
    public:
        MyList();
        MyList(int l);
        MyList(const std::initializer_list <int> list);
        MyList(const MyList &l);
        MyList(MyList &&l);
        MyList(int (fun)(MyNode*), int l);
        ~MyList();
        void clear();
        void add(int val);
        bool empty() const;
        void print() const;
        int size() const;
    private:
        MyNode *_head;
        MyNode *_tail;
        int _n;

};