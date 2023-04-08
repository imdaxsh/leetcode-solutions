/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (node == nullptr) {
            return nullptr;
        }

        Node* clone = new Node(node->val);
        this->mapping.insert({node, clone});
        
        for (Node* child : node->neighbors) {
            if (this->mapping.find(child) != this->mapping.end()) {
                clone->neighbors.push_back(this->mapping[child]);
            } else {
                clone->neighbors.push_back(this->cloneGraph(child));
            }
        }

        return clone;
    }
private:
    unordered_map<Node*, Node*> mapping;
};