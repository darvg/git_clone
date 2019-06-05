#ifndef __HASH_H_
#define __HASH_H_

#include <string>
#include <vector>
#include <openssl/sha.h>

//Commit hash
std::string generate_hash(std::string author, std::string tree_hash, std::string timestamp, std::string message);

//Tree hash
std::string generate_hash();

//Blob hash
std::string generate_hash(std::vector<char> bytes);

#endif // __HASH_H_
