### Exercise 13.28

Given the following classes, implement a default constructor and the necessary
copy-control members.

#### (a)

```cpp
class TreeNode {
private:
    std::string value;
    int         count;
    TreeNode    *left;
    TreeNode    *right;
};
```

#### (b)

```cpp
class BinStrTree {
private:
    TreeNode *root;
};
```

### Solution

#### (a)

```cpp
TreeNode::TreeNode():
    value(std::string()), count(new int(1)), left(nullptr), right(nullptr) { }

TreeNode::TreeNode(const TreeNode &tn): 
    value(tn.value), count(tn.count), left(tn.left), right(tn.right)
{
    ++*count;
}

TreeNode &TreeNode::operator=(const TreeNode &rhs)
{
    ++*rhs.count;
    if (--*count == 0) {
        delete left;
        delete right;
        delete count;
    }
    left = rhs.left;
    right = rhs.right;
    count = rhs.count;
    return *this;
}

TreeNode::~TreeNode()
{
    if (--*count == 0) {
        delete left;
        delete right;
        delete count;
    }
}
```

#### (b)

```cpp
BinStrTree::BinStrTree():
    root(new TreeNode()) { }

BinStrTree::BinStrTree(const BinStrTree &bst):
    root(new TreeNode(*bst.root)) { }

BinStrTree &BinStrTree::operator=(const BinStrTree &rhs)
{
    TreeNode *temp = new TreeNode(*rhs.root);
    delete root;
    root = temp;
    return *this;
}

BinStrTree::~BinStrTree()
{
    delete root;
}
```


