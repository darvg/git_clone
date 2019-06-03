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
#include "commit.hpp"
#include "tree.hpp"

/*
 * This tree should contain the entire commit chain of a git repository.
  */
class Commit_Tree : Tree<Commit> {
    private:
        std::unique_ptr<Node> HEAD;
        std::string project_name; //probably not necessary???

    public:
        //constructor
        Commit_Tree(std::string proj_name);

        std::unique_ptr<Node> get_HEAD();
        void set_HEAD(Node n);

        std::unique_ptr<Node> find_node(std::string hash);

};

#endif // __MAIN_TREE_H_
