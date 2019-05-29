#ifndef __MAIN_TREE_H_
#define __MAIN_TREE_H_

#include <string>
#include "commit_node.hpp"

/*
 * This tree should contain the entire commit chain of a git repository.
  */
class Tree{
    private:
        struct Node{
            std::string hash;
            Commit c;
        };


    public:
        Node initial;
};

#endif // __MAIN_TREE_H_
