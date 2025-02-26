#include "../include/doubly_linked_list.hpp"

#include <gtest/gtest.h>

int main(int argc, char const* argv[]) {
  TEST_F(DoublyLinkedListTest, TestPopFromEmptyList) {
    EXPECT_THROW(list->pop_back(), std::out_of_range);
    EXPECT_THROW(list->pop_front(), std::out_of_range);
}
  return 0;
}
