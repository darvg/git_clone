#ifndef __FILE_TREE_H_
#define __FILE_TREE_H_

#include <string>
#include "tree.hpp"
#include "blob.hpp"

class File_Tree : Tree<std::string> {
    private:
        std::string hash;

    public:
        //constructor
        File_Tree(std::string name);

        //accessors
        std::unique_ptr<Node> find_node(std::string hash);

};

#endif // __FILE_TREE_H_
