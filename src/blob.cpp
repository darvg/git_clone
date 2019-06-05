#include "blob.hpp"
#include <fstream>

Blob::Blob (std::string fname, std::string file_name) {

    set_filename(file_name);

    // stackoverflow.com/questions/36658734/c-get-all-bytes-of-a-file-in-to-a-char-array
    std::ifstream infile(fname, std::ios_base::binary);
    std::vector<char> buffer;

    infile.seekg(0, std::ios_base::end);
    size_t len = infile.tellg();
    infile.seekg(0, std::ios_base::beg);

    buffer.reserve(len);
    std::copy(std::istreambuf_iterator<char>(infile),
              std::istreambuf_iterator<char>(),
              std::back_inserter(buffer) );

    set_blob(buffer);

    set_hash(generate_hash(buffer));
}

