#include "commit.hpp"

Commit::Commit(std::vector<Blob> files, std::string author, std::string timestamp, std::string message, std::string treehash) {

    set_author(author);
    set_timestamp(timestamp);
    set_message(message);
    set_staged_files(files);
    set_tree_hash(treehash);
    set_hash(generate_hash(author, treehash, timestamp, message));
}

