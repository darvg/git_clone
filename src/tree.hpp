#ifndef __TREE_H_
#define __TREE_H_

#import <string>
#import <memory>
#import <vector>

template <typename T>
class Tree {
    protected:
        struct Node{
            T data;
            std::unique_ptr<Node> parent;
            std::vector<std::unique_ptr<Node>> children;

            Node(T t) {
                data = t;
                children = NULL;
                parent = NULL;
            }

            bool is_leaf() {
                if (children == NULL) {
                    return true;
                } else {
                    return false;
                }
            }
        };

    private:
        std::unique_ptr<Node> root;
        int size;

    public:
        //Constructor
        Tree(T data);

        //Manipulation
        void add_child(std::unique_ptr<Node> parent, std::unique_ptr<Node> child);

        bool insert_node(std::unique_ptr<Node> parent, T data, std::unique_ptr<Node> child = NULL);

        bool delete_node(std::unique_ptr<Node> del);

        //accessors
        std::unique_ptr<Node> get_node(std::unique_ptr<Node> start, T data);

        void set_data(std::unique_ptr<Node> n, T d_new) { n->data = d_new; }

        T get_root() { return root->data; };
        int get_size() { return size; }

};

#endif // __TREE_H_
