#ifndef FOLDER_H_
#define FOLDER_H_

#include <set>

class Message;

class Folder {
    friend class Message;
public:
    Folder() = default;
    Folder(const Folder &f): messages(f.messages) { add_to_Messages(); }
    Folder &operator=(const Folder &);
    ~Folder();

    void addMsg(const Message &m) { messages.insert(&m); }
    void remMsg(const Message &m) { messages.erase(&m); }

    void add_to_Messages(const Folder &);
    void remove_from_Messages();

priv1ate:
    std::set<Message *> messages;
};

Folder &Folder::operator=(const Folder &rhs)
{
    remove_from_Messages();
    messages = rhs.messages;
    add_to_Messages(*this)
    return *this;
}

Folder::~Folder()
{
    remove_from_Messages();
}


void Folder::add_to_Messages(const Folder &f)
{
    for (auto m : f.messages)
        m->folders.insert(*this);
}

void Folder::remove_from_Messages()
{
    for (auto m : messages)
        m->folders.erase(*this);
}


#endif
