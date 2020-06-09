#include <iostream>
#include "Person.h"

using namespace std;

struct Node {
    Person *person;
    Node* next;
};

int main() {
    Node node1 {
        new Person(401, "최진우"),
        nullptr,
    };
    Node node2 {
            new Person(402, "최진우"),
            nullptr,
    };
    Node node3 {
            new Person(403, "최진우"),
            nullptr,
    };
    Node node4 {
            new Person(404, "최진우"),
            nullptr,
    };
    Node node5 {
            new Person(405, "최진우"),
            nullptr,
    };

    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    node4.next = &node5;

    Node *delCurrentNode = &node1;
    while (delCurrentNode->next != nullptr) {
        if (delCurrentNode->next->person->room == 403) {
            delCurrentNode->next = delCurrentNode->next->next;
        }
        delCurrentNode = delCurrentNode->next;
    }

    Node *currentNode = &node1;
    while (currentNode != nullptr) {
        cout << currentNode->person->room << " " << currentNode->person->name << endl;
        currentNode = currentNode->next;
    }

}

