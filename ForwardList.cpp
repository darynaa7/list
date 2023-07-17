#include "ForwardList.h"
#include "forwardListIterator.h"


template<class T>
ForwardList<T>::ForwardList() : head(nullptr) {}

template<class T>
void ForwardList<T>::addToFront(T x)
{
    Node<T>* newNode = new Node<T>(x);
    newNode->next = head;
    head = newNode;
}

template<class T>
void ForwardList<T>::addToBack(T x)
{
    Node<T>* newNode = new Node<T>(x);
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node<T>* current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

template<class T>
void ForwardList<T>::removeFromFront()
{
    if (head != nullptr)
    {
        Node<T>* temp = head;
        head = head->next;
        delete temp;
    }
}

template<class T>
void ForwardList<T>::removeFromBack()
{
    if (head == nullptr)
    {
        return;
    }
    else if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
    }
    else
    {
        Node<T>* current = head;
        while (current->next->next != nullptr)
        {
            current = current->next;
        }
        delete current->next;
        current->next = nullptr;
    }
}

template<class T>
void ForwardList<T>::insertAtPosition(T x, int position)
{
    if (position == 0)
    {
        addToFront(x);
    }
    else
    {
        Node<T>* newNode = new Node<T>(x);
        Node<T>* current = head;
        int currentPosition = 0;

        while (current != nullptr && currentPosition < position - 1)
        {
            current = current->next;
            currentPosition++;
        }

        if (current != nullptr)
        {
            newNode->next = current->next;
            current->next = newNode;
        }
        else
        {
            delete newNode;
            std::cout << "Invalid position.\n";
        }
    }
}

template<class T>
int ForwardList<T>::getSize()
{
    int count = 0;
    Node<T>* current = head;
    while (current != nullptr)
    {
        count++;
        current = current->next;
    }
    return count;
}

template<class T>
bool ForwardList<T>::isEmpty()
{
    return head == nullptr;
}

template<class T>
void ForwardList<T>::printList()
{
    Node<T>* current = head;
    while (current != nullptr)
    {
        std::cout << current->value << " ";
        current = current->next;
    }
    std::cout << "\n";
}

template<class T>
ForwardListIterator<T> ForwardList<T>::begin()
{
    return ForwardListIterator<T>(head);
}

template<class T>
ForwardListIterator<T> ForwardList<T>::end()
{
    return ForwardListIterator<T>(nullptr);
}

template class ForwardList<std::string>;
template class ForwardList<int>;
