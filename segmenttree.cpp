class segtree {
public:
    vector<lli> tree;
    lli n;

    segtree(lli size) {
        n = size;
        tree.resize(4 * n, 0);
    }

    void build(vector<lli>& arr, lli node, lli start, lli end) {
        if (start == end) {
            tree[node] = arr[start];
        } else {
            lli mid = (start + end) / 2;
            build(arr, 2 * node, start, mid);
            build(arr, 2 * node + 1, mid + 1, end);
            tree[node] = tree[2 * node] + tree[2 * node + 1];
        }
    }

    void update(lli node, lli start, lli end, lli idx, lli value) {
        if (start == end) {
            tree[node] += value;
        } else {
            lli mid = (start + end) / 2;
            if (start <= idx && idx <= mid) {
                update(2 * node, start, mid, idx, value);
            } else {
                update(2 * node + 1, mid + 1, end, idx, value);
            }
            tree[node] = tree[2 * node] + tree[2 * node + 1];
        }
    }

    lli query(lli node, lli start, lli end, lli l, lli r) {
        if (r < start || end < l) {
            return 0;
        }
        if (l <= start && end <= r) {
            return tree[node];
        }
        lli mid = (start + end) / 2;
        lli p1 = query(2 * node, start, mid, l, r);
        lli p2 = query(2 * node + 1, mid + 1, end, l, r);
        return p1 + p2;
    }

    void build(vector<lli>& arr) {
        build(arr, 1, 0, n - 1);
    }

    void update(lli idx, lli value) {
        update(1, 0, n - 1, idx, value);
    }

    lli query(lli l, lli r) {
        return query(1, 0, n - 1, l, r);
    }
};
