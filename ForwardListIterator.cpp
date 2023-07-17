#include "ForwardListIterator.h"
#include "ForwardList.h"


template<class T>
ForwardListIterator<T>::ForwardListIterator(Node<T>* node) : current(node) {}

template<class T>
ForwardListIterator<T>& ForwardListIterator<T>::operator++()
{
    current = current->next;
    return *this;
}

template<class T>
bool ForwardListIterator<T>:: operator!=(const ForwardListIterator& other) const
{
    return current != other.current;
}

template<class T>
T ForwardListIterator<T>::operator*() const
{
    return current->value;
}

template class ForwardListIterator<std::string>;
template class ForwardListIterator<int>;
