#ifndef __BLOB_H_
#define __BLOB_H_

#include <string>
#include <vector>
#include "hash.hpp"

class Blob {
    private:
        std::string filename, hash;
        std::vector<char> blob;

    public:
        //Constructor
        Blob(std::string file, std::string filename);

        //Accessors
        std::vector<char> get_blob() { return blob; };
        std::string get_filename() { return filename; };
        std::string get_hash() { return hash; };

        void set_blob(std::vector<char> v) { blob = v; };
        void set_filename(std::string s) { filename = s; };
        void set_hash(std::string s) { hash = s; };

};

#endif // __BLOB_H_
