#include <iostream>
#include <vector>

template <typename T> class Tree {
    private:
        struct Node{
            T data;
            Node * right;
            Node * lefth;
        };
        Node* root;
   public:
    Tree(){
        root = NULL;
    }
    ~Tree(){
        std::vector<Node *> remaining;
        Node * cur = root;
        while(cur){
            Node * lefth = cur->lefth;
            if(cur->right){
        std::cout << cur->right << " delete" << std::endl;
                remaining.push_back(cur->right);
            }
            delete cur;
            if(lefth){
        std::cout << cur->lefth << " delete" << std::endl;
                cur = lefth;
            }
            else if(remaining.empty()){
                return;
            }
            else {
                cur = remaining.back();
                remaining.pop_back();
            }
        }
    }
    Tree(const Tree& n):root(0){
        std::vector<Node const *> remaining;
        Node const* cur = n.root;
        while(cur){
            add(cur->data);
            if(cur->right){
                remaining.push_back(cur->right);
            }
            if(cur->lefth){
                cur = cur->lefth;
            }else if (remaining.empty()){
                return;
            }
            else{
                cur = remaining.back();
                remaining.pop_back();
            }
        }
    }
    void add(const T & data){
        Node * tmp = new Node;
        tmp->data = data;
        if(NULL == root){
            root = tmp;
            return;
        }

        Node* p = root;
        while(p->data > data && NULL != p->lefth || p->data <= data && NULL != p->right){
            if(p->data > data){
                p = p->lefth;
                continue;
            }
            p = p->right;
        }
         if(p->data > data){
                p->lefth = tmp;
                return;
         }
         p->right = tmp;

    }
    bool search(const T& data) const
    {
        Node* p = root;
        if(NULL == root){
            return false;
        }

        while(NULL != p){
            if(p->data == data){
                return true;
            }
            if(p->data > data){
                p = p->lefth;
            }else{
                p = p->right;
            }
        }
            return false;
    }
    

};

int main() {
    Tree<int> t;
    t.add(5);
    t.add(3);
    t.add(4);
    t.add(6);
    t.add(14);
    std::cout << t.search(3) << std::endl;
    Tree<int> b(t);
    return 0;
}
