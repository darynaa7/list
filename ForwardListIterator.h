#pragma once
#include <iostream>
#include "ForwardList.h"

Node<int> a;

template<class T>
class ForwardListIterator
{
private:
    Node<T>* current;
public:
    ForwardListIterator(Node<T>* node);
    ForwardListIterator& operator++();
    bool operator!=(const ForwardListIterator& other) const;
    T operator*() const;
};
