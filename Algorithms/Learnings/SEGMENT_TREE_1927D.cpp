#include <bits/stdc++.h>
using namespace std;

struct Node {
    int value;
    int index;
};

class MaxSegmentTree {
    private:
        vector<Node> tree;
        int n;

        Node buildTreeUtil(const vector<int>& arr, int start, int end, int treeNode) {
            if (start == end) {
                tree[treeNode].value = arr[start];
                tree[treeNode].index = start;
                return tree[treeNode];
            }

            int mid = (start + end) / 2;
            Node left = buildTreeUtil(arr, start, mid, 2 * treeNode + 1);
            Node right = buildTreeUtil(arr, mid + 1, end, 2 * treeNode + 2);

            tree[treeNode] = (left.value > right.value) ? left : right;

            return tree[treeNode];
        }

        Node queryUtil(int left, int right, int start, int end, int treeNode) {
            if (left > end || right < start) {
                Node nullNode;
                nullNode.value = INT_MIN;
                nullNode.index = -1;
                return nullNode;
            }

            if (left <= start && right >= end) {
                return tree[treeNode];
            }

            int mid = (start + end) / 2;
            Node leftQuery = queryUtil(left, right, start, mid, 2 * treeNode + 1);
            Node rightQuery = queryUtil(left, right, mid + 1, end, 2 * treeNode + 2);

            return (leftQuery.value > rightQuery.value) ? leftQuery : rightQuery;
        }

    public:
        MaxSegmentTree(const vector<int>& arr) {
            n = arr.size();
            int height = ceil(log2(n));
            int maxSize = 2 * pow(2, height) - 1;
            tree.resize(maxSize);

            buildTreeUtil(arr, 0, n - 1, 0);
        }

        Node query(int left, int right) {
            return queryUtil(left, right, 0, n - 1, 0);
        }
};

class MinSegmentTree {
    private:
        vector<Node> tree;
        int n;

        Node buildTreeUtil(const vector<int>& arr, int start, int end, int treeNode) {
            if (start == end) {
                tree[treeNode].value = arr[start];
                tree[treeNode].index = start;
                return tree[treeNode];
            }

            int mid = (start + end) / 2;
            Node left = buildTreeUtil(arr, start, mid, 2 * treeNode + 1);
            Node right = buildTreeUtil(arr, mid + 1, end, 2 * treeNode + 2);

            tree[treeNode] = (left.value < right.value) ? left : right;

            return tree[treeNode];
        }

        Node queryUtil(int left, int right, int start, int end, int treeNode) {
            if (left > end || right < start) {
                Node nullNode;
                nullNode.value = INT_MAX;
                nullNode.index = -1;
                return nullNode;
            }

            if (left <= start && right >= end) {
                return tree[treeNode];
            }

            int mid = (start + end) / 2;
            Node leftQuery = queryUtil(left, right, start, mid, 2 * treeNode + 1);
            Node rightQuery = queryUtil(left, right, mid + 1, end, 2 * treeNode + 2);

            return (leftQuery.value < rightQuery.value) ? leftQuery : rightQuery;
        }

    public:
        MinSegmentTree(const vector<int>& arr) {
            n = arr.size();
            int height = ceil(log2(n));
            int maxSize = 2 * pow(2, height) - 1;
            tree.resize(maxSize);

            buildTreeUtil(arr, 0, n - 1, 0);
        }

        Node query(int left, int right) {
            return queryUtil(left, right, 0, n - 1, 0);
        }
};

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];

    MinSegmentTree minSegTree(arr);
    MaxSegmentTree maxSegTree(arr);

    cout << endl;
    
    int q; cin >> q;
    while (q--) {
        int left, right; cin >> left >> right;
        left--;
        right--;

        Node minResult = minSegTree.query(left, right);
        Node maxResult = maxSegTree.query(left, right);
        if (minResult.value == maxResult.value) cout << "-1 -1" << endl;
        else cout << minResult.index + 1 << " " << maxResult.index + 1 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
