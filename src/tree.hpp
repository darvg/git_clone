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
        };

    private:
        std::unique_ptr<Node> root;

    public:
        //Constructor
        Tree(T data);

        //Manipulation
        void add_child(std::unique_ptr<Node> parent, T data);

        bool insert_node(T data);

        bool delete_node(T data);

        //getters & setters
        std::unique_ptr<Node> get_node(T data);

        void set_data(std::unique_ptr<Node> n, T d_new);

        T get_root();

};

#endif // __TREE_H_
