#include "tree.hpp"

template <typename T>
Tree<T>::Tree(T data) {
    root->data = data;
    root->parent = NULL;
    root->children = NULL;
    size = 0;
}

template <typename T>
void Tree<T>::add_child(std::unique_ptr<Node> parent, std::unique_ptr<Node> child) {
    child->parent = parent;

    if (parent->children == NULL) {
        std::vector<std::unique_ptr<Node>> v{ child };
        parent->children = v;
    } else {
        (parent->children).push_back(child);
    }
}

template <typename T>
bool Tree<T>::insert_node(std::unique_ptr<Node> parent, T data, std::unique_ptr<Node> child) {
    std::unique_ptr<Node> add(data);

    if (child == NULL) {
        add_child(parent, add);
    } else {
        add->parent = parent;

        std::unique_ptr<Node> temp;
        for (std::unique_ptr<Node> n : parent->children) {
            if (n->data == child->data) {
                temp = n;
                (parent->children).erase(n);
            }
        }

        add->children = { child };
        (parent->children).push_back(add);
    }
}
