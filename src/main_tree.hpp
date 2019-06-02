/*
 * main_tree.hpp
 *
 * Created: May 30, 2019
 * Author: Siddharth Gollapudi
 *
 */

#ifndef __MAIN_TREE_H_
#define __MAIN_TREE_H_

#include <string>
#include <memory>
#include "commit_node.hpp"

/*
 * This tree should contain the entire commit chain of a git repository.
  */
class Tree {
    private:

        struct Node {
            std::unique_ptr<Node> children;
            Commit c;

            Node (Commit input) {
                c = input;
                children = NULL;
            }

        };

        Node HEAD;
        std::string project_name;


    public:

        Node get_HEAD();
        void set_HEAD(Node n);

        Node find_node(std::string hash);

};

#endif // __MAIN_TREE_H_
