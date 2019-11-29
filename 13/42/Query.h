#ifndef QUERY_H_
#define QUERY_H_

#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <sstream>
#include <memory>

#include "StrVec.h"

class QueryResult {
    friend std::ostream &print(std::ostream &, const QueryResult &);
    using LineNum = std::size_t;
public:
    QueryResult(std::string s, std::shared_ptr<std::set<LineNum>> p,
                std::shared_ptr<StrVec> f):
        sought(s), lines(p), file(f) { }
    std::set<LineNum>::iterator begin() {
        return lines->begin();
    }
    std::set<LineNum>::iterator end() {
        return lines->end();
    }
    std::shared_ptr<StrVec> get_file() {
        return file;
    }

private:
    std::string sought;
    std::shared_ptr<std::set<LineNum>> lines;
    std::shared_ptr<StrVec> file;
};

class TextQuery {
    using LineNum = std::size_t;
public:
    TextQuery(std::ifstream &in): file(new StrVec) {
        std::string text, word;
        while (std::getline(in, text)) {
            file->push_back(text);
            int n = file->size() - 1;
            std::istringstream line(text);
            while (line >> word) {
                auto &lines = wm[word];
                if (!lines)
                    lines.reset(new std::set<LineNum>);
                lines->insert(n);
            }
        }
    }
    QueryResult query(const std::string &s) const
    {
        static std::shared_ptr<std::set<LineNum>> 
            nodata(new std::set<LineNum>);
        auto loc = wm.find(s);
        if (loc == wm.end())
            return QueryResult(s, nodata, file);
        else
            return QueryResult(s, loc->second, file);
    }
private:
    std::shared_ptr<StrVec> file;
    std::map<std::string, std::shared_ptr<std::set<LineNum>>> wm;
};

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
#endif
