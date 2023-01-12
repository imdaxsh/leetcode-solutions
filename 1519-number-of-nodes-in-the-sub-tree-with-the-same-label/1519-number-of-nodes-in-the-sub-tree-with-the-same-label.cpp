class Solution {
public:
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {        
        response.resize(n);
        node2edges.resize(n);
        Labels = &labels;
        // Save edges in more usable data structure, to get the list of possible next nodes in the constant time
        for (const auto& edge: edges) {
            node2edges[edge[0]].push_back(edge[1]);
            node2edges[edge[1]].push_back(edge[0]);
        }
        // Start with root node (ID 0) and parentNodeId == -1 which is mean that any nextNode is acceptable for the root
        dfs(0, -1);
        // std::move just to save some memory on response.
        return std::move(response);
    }
private:
    void dfs(int nodeId, int parentNodeId) {
        // nodeLabelId is an ASCII code of symbol - 97, because a == 97, b == 98, c == 99, etc, z == 122
        int nodeLabelId = int(Labels->at(nodeId)) - 97;
        // save to temporary variable amount of nodes with label same as is for current node.
        // If this count will be increased after visiting next nodes -- this will be number of nodes with same label in subtree
        int before = labelCount[nodeLabelId];
        // Count this node as well
        ++labelCount[nodeLabelId];
        // Visit all possible nextNodes
        for (const auto& nextNodeId: node2edges[nodeId]) {            
            // except the one we have came from
            if (nextNodeId == parentNodeId) {
                continue;
            }
            dfs(nextNodeId, nodeId);
        }
        // set the result for the current node: everything that was added after we saved the "before" variable.
        response[nodeId] = labelCount[nodeLabelId] - before;
    }
    
private:
    vector<int> response;
    vector<vector<int>> node2edges;
    string *Labels;
    int nodeLabelId = 0;
    // Array to save count of nodes of label, where is labelCount[0] -- count for 'a' and labelCount[25] -- count for 'z'
    int labelCount[26];
};