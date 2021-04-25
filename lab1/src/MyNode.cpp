#include "MyNode.h"

MyNode :: MyNode(): _next(NULL),  _val(0){}
MyNode :: MyNode(int val): _next(NULL), _val(val){}
int MyNode :: val() const{ return _val;}