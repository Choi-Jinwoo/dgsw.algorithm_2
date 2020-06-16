#include <iostream>

struct Node {
    int data;

    Node * pre;
    Node * post;
};

int main() {
    Node node1;
    node1.data = 1;
    node1.pre = nullptr;

    Node node2;
    node2.data = 2;
    node2.pre = &node1;

    Node node3;
    node3.data = 3;
    node3.pre = &node2;

    Node node4;
    node4.data = 4;
    node4.pre = &node3;

    node1.post = &node2;
    node2.post = &node3;
    node3.post = &node4;

    Node * p = &node1;
    while (p != nullptr) {
        std::cout << p->data << std::endl;
        p = p->post;
    }
}
