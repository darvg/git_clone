/*
 * commit_node.hpp
 *
 * created: May 30, 2019
 * author: Siddharth Gollapudi
 *
 */

#ifndef __COMMIT_NODE_H_
#define __COMMIT_NODE_H_

#include <string>
#include <vector>

class Commit{
    private:

        std::string hash, tree_hash, author, timestamp, message;
        //std::vector<Blob> staged_files;

        template <typename T>
        std::string generate_hash(T input);

    public:

        //Commit(std::vector<Blob> v);

        bool get_repo_tree();

        std::string get_hash() { return hash; }
        std::string get_tree_hash() { return tree_hash; }
        std::string get_author() { return author; }
        std::string get_timestamp() { return timestamp; }
        std::string get_message() { return message; }

        void set_hash(std::string s) { hash = s; }
        void set_tree_hash(std::string t) { tree_hash = t; }
        void set_author(std::string a) { author = a; }
        void set_timestamp(std::string t) { timestamp = t; }
        void set_message(std::string m) { message = m; }

};

#endif // __COMMIT_NODE_H_
