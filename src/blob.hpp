#ifndef __BLOB_H_
#define __BLOB_H_

#include <string>
#include <vector>

class Blob {
    private:
        std::string filename, hash;
        std::vector<char> blob;

    public:
        //Constructor
        Blob(std::string file);

        //Manipulators
        std::string generate_hash(std::vector<char> v);

        //Accessors
        std::vector<char> get_blob();
        std::string get_filename();
        std::string get_hash();

        void set_blob(std::vector<char> v);
        void set_filename(std::string s);
        void set_hash(std::string s);

};

#endif // __BLOB_H_
