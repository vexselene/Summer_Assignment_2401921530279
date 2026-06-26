/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if (!root) return "#";
        return to_string(root->val) + "," + 
               serialize(root->left) + "," + 
               serialize(root->right);
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        int i = 0;
        return deserialize(data, i);
    }
    
private:
    TreeNode* deserialize(string& data, int& i) {
        if (i >= data.length()) return nullptr;
        
        int j = i;
        while (j < data.length() && data[j] != ',') j++;
        string token = data.substr(i, j - i);
        i = j + 1;
        
        if (token == "#") return nullptr;
        
        TreeNode* node = new TreeNode(stoi(token));
        node->left = deserialize(data, i);
        node->right = deserialize(data, i);
        
        return node;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));