<h3><span style="color:yellow">Prim Algorithm </span> </h3>

```c++
//We could also call this nearest neighbor algorithm
s = node // any arbitrary node
neighbor = min(dist(s, neighbor)) // find its not visited yet neighbor with shortest distance
if (neighbor == null) return; // all neighbor have been visited
path.add(neighbor)
s = neighbor
//repeat
```


<h3><span style="color:yellow">Kruskal’s algorithm </span> </h3>

```c++
    t = []
    t.push(s);
    s = node // any arbitrary node
    sort(s.neighbor)//sort by dist
    for (n : s.neighbor):
        if (t && n is acyclic):
            t.add(n);
    
```


<h3><span style="color:yellow">Dijkstra Algorithm </span> </h3>

```c++
    priority_queue<node> q;
    q.push(root)
    d[s] = 0
    d[v] = INT_MAX for v : G
    while (!q.empty()):
        v = q.pop();
        for (v,x) in E:
            if (d[v] + dist(v,x) < d[x]):
                d[x] = d[v] + dist(v,x)
                decrease-key(q,x); //update pirority queue
    
```

<h3><span style="color:yellow">Bellman-Ford </span> </h3>

```python
    for i (0,n):
        for (u,v) in E:
            if (d[u] + w(u,v) < d[v]):
                d[v] = w(u,v) + d[u]
                p[v] = u
    
```

<h3><span style="color:yellow">DFS </span> </h3>

```c++
visited[]
int time;
explore(node s) {
    for (c: s.neighbor && !visited[s]):
        visited[c] = true;
        start = time;
        time ++;
        explore(c);
        end = time;
        time ++:
}
```

<h3><span style="color:yellow">BFS </span> </h3>

```c++
    root : some node
    queue<node> q;
    q.push(root);
    visited[root] = true;
    while (!q.empty()):
        s = q.pop();
        for (n : s.neighbor):
            if (!visited[n]):
                visited[n] = true;
                dist[n]= dist[s] + 1;
                n.parent = s;
                q.push(n);
```

<h3><span style="color:yellow">Longest Consecutive String </span> </h3>

    Let D[i,j] be the length pf LCS for S[1,..,j] and T[1,..,j]

    D[i,j] = max {D[i-1,j-1] + lambda(S[i], T[j]), D[i-1,j], D[i, j-1]}
```c++

Backtracking:
    while (i >= 0 && j >=0):
        if (D[i,j] == D[i-1,j])
            i --;
        else if (D[i,j] == D[i,j-1])
            j--;
        else if (s[i] == t[j])
            cout << s[i];
            i --; j --;
        else 
            i --; j --;
```


<h3> <span style="color:yellow"> substring problem template  </span> </h3>

``` c++
map<int, int> p(length, 0);
int begin, end, counter = 0;
for () // initialize map p here
while (end < length) {
    if (p[s[end++]]-- ? ) counter ? ;
    while (!counter) {
        //increase begin to make it invalid 
        if (p[s[begin++]]++ ?) counter ?
    }
}
return ?;
```

<h3> <span style="color:yellow"> Three-Sum  </span> </h3>

```c++
FindSortedTwoSum (int *nums, int target, int pos, int * res) {
    int l = 0;
    int r = nums.size() - 1;
    while (l <= r) {
        int ss = nums[l] + nums[r];
        if (ss == target) {
            res += l, r;
        }
        else if (ss < target) {
            l ++;
        }
        else r --;
        if (l == i) l++;
        if (r == i) r--;
    }
}

 Three-sum (int * nums, int target) {
     sort(nums);
     for (int i = 0; i < nums.size(); ++i) {
         FindSortedTwoSum (nums, target - nums[i], i, res);
     }
 }

```


<h3> <span style="color:yellow"> Four-Sum  </span> </h3>

```c++
    FourSum(int* nums, int target)
    int *pairs // all pairs availabe in nums size n(n-1)/2 = nP2
    sort(pairs) // O(n^2logn)
    for (int k : pairs) { // takes O(logn)
        binary_search(target - k)
    }
```

