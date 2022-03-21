#include <fstream>
#include <string>
#include <sstream>

#include "QueryResult.h"

std::ostream &print(std::ostream &os, const QueryResult &qr)
{
    os << qr.sought << " occurs " << qr.lines->size() << " time"
       << ((qr.lines->size() == 1) ? "" : "s") << std::endl;
    for (auto num : *qr.lines) {
        os << "\t(line " << num + 1 << ") "
           << *(qr.file->begin() + num) << std::endl;
    }
    return os;
}
