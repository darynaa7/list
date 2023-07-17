#include <string>
#include "ForwardList.h"
#include "ForwardListIterator.h"


int main()
{
    ForwardList<int> myList;
    int n, x;
    std::cout << "Input count of elements: ";
    std::cin >> n;
    std::cout << "Input list elements: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        myList.addToBack(x);
    }
    std::cout << "List: ";
    myList.printList();

    std::cout << "Printing using Iterator: ";
    for (ForwardListIterator<int> it = myList.begin(); it != myList.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << "\n";
}
