#pragma once
#include <iostream>
#include "forwardListIterator.h"


template<class T>
struct Node
{
    T value;
    Node* next;

    Node() : value(0), next(nullptr) {}
    Node(T v) : value(v), next(nullptr) {}
};


template<class T>
class ForwardList
{
private:
    Node<T>* head;
public:
    ForwardList();
    void addToFront(T x);
    void addToBack(T x);
    void removeFromFront();
    void removeFromBack();
    void insertAtPosition(T x, int position);
    int getSize();
    bool isEmpty();
    void printList();
    ForwardListIterator<T> begin();
    ForwardListIterator<T> end();
};

