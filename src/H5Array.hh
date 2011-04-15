#ifndef LOADER_H5ARRAY_HH
#define LOADER_H5ARRAY_HH
#include <string>
#include <boost/shared_ptr.hpp>

// Forward
namespace scidb {
    class ArrayDesc; 
}

////////////////////////////////////////////////////////////////////////
// class H5Array
////////////////////////////////////////////////////////////////////////
class H5Array {
public:
    H5Array(std::string const& fPath, std::string const& path);

    boost::shared_ptr<scidb::ArrayDesc> getArrayDesc() const;
    int getSlabCount() const { return 1; } // FIXME 
    int getRank() const { return 3; } // FIXME 
    
    class DataSet;
private:
    std::string const _filePath;
    std::string const _path;
    boost::shared_ptr<DataSet> _ds;
};

#endif // LOADER_H5ARRAY_HH