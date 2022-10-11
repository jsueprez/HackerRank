#include "day_5.h"

#include <vector>

using std::vector;

SinglyLinkedListNode* day_5::mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2){
    SinglyLinkedList* merged_list = new SinglyLinkedList();

    // There is a sort algorithm to do this kind of operations[merge Sort]
    vector<int> list;

    while(head1 != nullptr){
        list.push_back(head1->data);
        head1 = head1->next;

    }
    while(head2 != nullptr){
        list.push_back(head2->data);
        head2 = head2->next;
    }

    std::sort(list.begin(), list.end());

    for(auto const& data : list)
        merged_list->insert_node(data);


    return merged_list->head;
}

