#include <iostream>
#include <vector>

template<typename T, typename K>
class Tree {
	private:
		struct Node {
			T key;
			K value;
			Node * left;
			Node * right;
		};
		Node * root;
		void deleteNode(Node * node)
		{
			if(NULL == node) {
				return;
			}
			deleteNode(node->left);
			deleteNode(node->right);
			delete node;
		}

		void _add(Node* node, T key, K value)
		{
			if (node->key == key) {
				node->value = value;
                return;
			}
			if ( node->key > key) {
				if (NULL == node->left) {
					node->left = new Node;
					node->left->key = key;
					node->left->value = value;
					node->left->right = NULL;
					node->left->left = NULL;
					return;
				} 
				_add(node->left, key, value);
			} else {
				if (NULL == node->right) {
					node->right = new Node;
					node->right->key = key;
					node->right->value = value;
					node->right->right = NULL;
					node->right->left = NULL;
					return;
				} 
				_add(node->right, key, value);
			
			}
		}
	public:
		Tree() : root{NULL} {}
		~Tree() 
		{
			deleteNode(root);
		}

		void add(T key, K value) {
			if (NULL == root) {
				root = new Node;
				root->key = key;
				root->value = value;
				root->right = NULL;
				root->left = NULL;
			}
			_add(root, key, value);
		}

		bool search(T key) {
			if (NULL == root) {
				return false;
			}
			Node * p = root;
			while (NULL != p) {
				if (p->key == key) {
					return true;
				}
				if (p->key > key) {
					p = p->left;
					continue;
				}
				p = p->right;
			}
			return false;
		}

		K getValue(T key) 
		{
			Node * p = root;
			while (NULL != p) {
				if (p->key == key) {
					return p->value;
				}
				if (p->key > key) {
					p = p->left;
					continue;
				}
				p = p->right;
			}
			K k;
			return k;
		}
		void remove(T key)
		{
			Node * p = root;
			Node * parent= root;
			while (NULL != p) {
				if (p->key == key) {
					break;
				}
				parent = p;
				if (p->key > key) {
					p = p->left;
					continue;
				}
				p = p->right;
			}
			if(NULL == p){
				return;
			}
			if (p == parent) {
				Node * tmp = root;
				if (NULL != root->left) {
					root = root->left;
					if (NULL == root->right) {
						root->right = tmp->right;
					}
					Node * ptr = root->right;
					while (NULL != ptr->right) {
						ptr = ptr->right;
					}	
					ptr->right = tmp->right;
				} else {
                    std::cout << root << "   "<< root->right<< "\n";
					root = root->right;
				}
				delete tmp;
                std::cout << root->key << " ------ " << std::endl;
			} else {
				Node * tmp = p;
				if (p == parent->left) {
					if(NULL == p->left){
						parent->left = p->right;
						return;
					}
					parent->left = p->left;
					Node * ptr = parent->left;
					while (NULL != ptr->right) {
						ptr = ptr->right;
					}	
					ptr->right = tmp->right;
				} else {
					if(NULL == p->left){
						parent->right = p->right;
						return;
					}
					parent->right = p->left;
					Node * ptr = parent->right;
					while (NULL != ptr->right) {
						ptr = ptr->right;
					}	

					ptr->right = tmp->right;
				}
				delete tmp;
			
			}

		}


};

bool isInVector(const std::vector<int>& v, int i){
    std::vector<int>::const_iterator begin;
    for(begin = v.begin(); begin < v.end(); begin++){
        if(*begin == i){
            return true;
        }
    }
    return false;
}

class Graph {
	private:
		Tree<int, std::vector<int>> data;
		std::vector<int> vertices;
	public:
		Graph() {}
		~Graph() {}
		void addEdge(int v1, int v2)
        {
                if(data.search(v1)){
                    std::vector<int> v = data.getValue(v1);
                    if(!isInVector(v, v1)){
                        v.push_back(v2);
                        data.add(v1, v);
                    }
                }else {
                    std::vector<int> v;
                    v.push_back(v2);
                    data.add(v1, v);
                    
                }
                
                if(data.search(v2)){
                    std::vector<int> v = data.getValue(v2);
                    if(!isInVector(v, v2)){
                        v.push_back(v1);
                        data.add(v2, v);
                    }
                }else {
                    std::vector<int> v;
                    v.push_back(v1);
                    data.add(v2, v);
                    
                }
                if (!isInVector(vertices, v1)) {
                    vertices.push_back(v1);
                }
                if (!isInVector(vertices, v2)) {
                    vertices.push_back(v2);
                }

        }
		void addVertex(int);
		void printGraph()
        {
            for (std::vector<int>::const_iterator begin = vertices.begin(); begin < vertices.end(); ++begin) {
                if (!data.search(*begin)) continue;
                std::cout << *begin << " -> ";
                std::vector<int> n = data.getValue(*begin);
                    for (int i = 0; i < n.size(); ++i) {
                        std::cout << n[i] << "  ";
                    }
                std::cout<<std::endl;
            }
        }
        void removeVertex(int v) 
        {
            if (data.search(v)) {
                std::vector<int> n = data.getValue(v);
                for (int i = 0; i < n.size(); ++i) {
                    for(std::vector<int>::const_iterator begin = vertices.begin(); begin < vertices.end(); ++begin){
                            data.remove(n[i]);
                    }
                    
                }
                data.remove(v);
            }
        }
};


int main()
{
    Graph g;
    g.addEdge(5, 2);
    g.addEdge(1, 5);
    g.addEdge(1, 6);
    g.addEdge(1, 7);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    g.addEdge(1, 4);
    g.addEdge(6, 5);
    g.printGraph();
    std::cout << "---------------1-----------\n"; 
    g.removeVertex(1);
    std::cout << "---------------2-----------\n"; 
    g.printGraph();
    std::cout << "---------------3-----------\n"; 
	return 0;
}
