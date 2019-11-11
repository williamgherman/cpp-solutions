#ifndef QUERY_H_
#define QUERY_H_

#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <sstream>
#include <memory>
#include "StrBlob.h"
#include "ConstStrBlobPtr.h"

class QueryResult {
    friend std::ostream &print(std::ostream &, const QueryResult &);
    using LineNum = std::vector<std::string>::size_type;
public:
    QueryResult(std::string s, std::shared_ptr<std::set<StrBlob::size_type>> p,
                const StrBlob &f):
        sought(s), lines(p), file(f) { }
private:
    std::string sought;
    std::shared_ptr<std::set<StrBlob::size_type>> lines;
    StrBlob file;
};

class TextQuery {
    using LineNum = std::vector<std::string>::size_type;
public:
    TextQuery(std::ifstream &in) {
        std::string text, word;
        while (std::getline(in, text)) {
            file->push_back(text);
            int n = file->size() - 1;
            std::istringstream line(text);
            while (line >> word) {
                auto &lines = wm[word];
                if (!lines)
                    lines.reset(new std::set<StrBlob::size_type>);
                lines->insert(n);
            }
        }
    }
    QueryResult query(const std::string &s) const
    {
        static std::shared_ptr<std::set<StrBlob::size_type>> 
            nodata(new std::set<StrBlob::size_type>);
        auto loc = wm.find(s);
        if (loc == wm.end())
            return QueryResult(s, nodata, file);
        else
            return QueryResult(s, loc->second, file);
    }
private:
    StrBlob file;
    std::map<std::string, std::shared_ptr<std::set<StrBlob::size_type>>> wm;
};

std::ostream &print(std::ostream &os, const QueryResult &qr)
{
    os << qr.sought << " occurs " << qr.lines->size() << " time"
       << ((qr.lines->size() == 1) ? "" : "s") << std::endl;
    for (auto num : *qr.lines) {
        ConstStrBlobPtr p(qr.file, num);
        os << "\t(line " << num + 1 << ") "
           << p.deref() << std::endl;
    }
    return os;
}
#endif
