#include <iostream>
#include <queue>

struct TreeNode {
  int data;
  TreeNode *left;
  TreeNode *right;
};

class BinarySearchTree {
public:
  BinarySearchTree() = default;
  ~BinarySearchTree() = default;

  BinarySearchTree(TreeNode *r) { this->root = r; }

  TreeNode *Insert(TreeNode *r, int value) {

    if (!r) {
      r = new TreeNode;
      r->data = value;
      return r;
    }

    if (r->data == value) {
      return r;
    }

    if (r->data > value) {
      r->left = Insert(r->left, value);
    } else if (r->data < value) {
      r->right = Insert(r->right, value);
    } else {
      std::cout << "Duplicate value: " << value << std::endl;

      return r;
    }
    return r;
  }

  void InOrderTraversal(TreeNode *r) {
    if (!r)
      return;
    InOrderTraversal(r->left);
    std::cout << r->data << " ";
    InOrderTraversal(r->right);
  }

  void BreadthFirstSearch(TreeNode *r) {
    if (!r)
      return;

    std::queue<TreeNode *> q;
    q.push(r);

    while (!q.empty()) {
      TreeNode *current = q.front();
      q.pop();
      std::cout << current->data << " ";

      if (current->left) {
        q.push(current->left);
      } else {
        std::cout << "NULL ";
      }

      if (current->right) {
        q.push(current->right);
      } else {
        std::cout << "NULL ";
      }
    }

    std::cout << std::endl;
  }

private:
  TreeNode *root;
};

int main(int argc, char *argv[]) {
  TreeNode *root = new TreeNode{30};
  auto bst = new BinarySearchTree();
  bst->Insert(root, 50);
  bst->Insert(root, 20);
  bst->Insert(root, 75);
  bst->InOrderTraversal(root);
  bst->BreadthFirstSearch(root);

  return 0;
}
