#include "gtest/gtest.h"
#include "day_5.h"

class TestingDay5 : public ::testing::Test
{
public:
    void SetUp()
    {
    }

    void TearDown()
    {
    }

    day_5 d5;

};

TEST_F(TestingDay5, mergeLinkedList)
{
    SinglyLinkedList* list_1 = new SinglyLinkedList();

    std::vector<int> v1{8,11,17,20,20,42,83,94,95};
    for(const auto& el : v1)
        list_1->insert_node(el);

    SinglyLinkedList* list_2 = new SinglyLinkedList();
    std::vector<int> v2{1};
    for(const auto& el : v2)
        list_2->insert_node(el);

    SinglyLinkedListNode* list_3 = d5.mergeLists(list_1->head, list_2->head);

    while(list_3 != nullptr){
        std::cout << list_3->data << ",";
        list_3 = list_3->next;
    }

    std::cout << '\n';
}
