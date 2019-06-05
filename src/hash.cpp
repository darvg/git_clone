#include "hash.hpp"

std::string generate_hash(std::string author, std::string tree_hash, std::string timestamp, std::string message) {
    std::string comb = author + tree_hash + timestamp + message;

    char hash[20];
    SHA1(reinterpret_cast<const unsigned char *>(comb.c_str()), (size_t) (comb.length()), reinterpret_cast<unsigned char *>(hash));

    std::string h(hash);
    return h;
}

std::string generate_hash() {

    return "test";
}

std::string generate_hash(std::vector<char> buffer) {

    char hash[20];
    SHA1(reinterpret_cast<const unsigned char *>(buffer.data()), (size_t) (buffer.size()), reinterpret_cast<unsigned char *>(hash));

    std::string h(hash);
    return hash;
}
