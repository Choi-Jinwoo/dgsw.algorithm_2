#include <iostream>

using namespace std;

struct Node {
    string name;
    Node *pre;
    Node *post;
};

Node *head;

void insert(Node * newNode) {
    Node * lastNode = head->pre;
    lastNode->post = newNode;
    head->pre = newNode;
    newNode->pre = lastNode;
    newNode->post = head;
}


int main() {
    Node node1;
    Node node2;
    Node node3;
    Node node4;
    Node node5;

    head = &node1;

    node1.name = "최진우";
    node2.name = "정성훈";
    node3.name = "권순관";
    node4.name = "제정민";
    node5.name = "김경훈";

    node1.pre = &node5;
    node2.pre = &node1;
    node3.pre = &node2;
    node4.pre = &node3;
    node5.pre = &node4;

    node1.post = &node2;
    node2.post = &node3;
    node3.post = &node4;
    node4.post = &node5;
    node5.post = &node1;

    Node newNode;
    newNode.name = "박세헌쌤";
    insert(&newNode);

    Node *p = &node1;
    for (int i = 0; i < 7; i++) {
        cout << p->name << endl;
        p = p->post;
    }
}
