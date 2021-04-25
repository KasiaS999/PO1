#pragma once
#include "MyList.h"
#include <iostream>

class MyNode{
    public:
        friend class MyList;
        MyNode();
        MyNode(int val);
        int val() const;
    private:
        MyNode *_next;
        int _val;

};