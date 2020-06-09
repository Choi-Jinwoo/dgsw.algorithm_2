#include <iostream>

struct Post {
    std::string content;
    std::string address;
    Post* next;
};

int main() {
    Post post = {
            "안녕하세요",
            "집 1"
    };

    Post post2 = {
            post.content,
            "집 2"
    };
    post.next = &post2;

    Post post3 = {
            post2.content,
            "집 3"
    };
    post2.next = &post3;
}
