**Question1**
<blockquote>

     Given a contiguous sequence of numbers in which each number repeats twice, there is exactly one missing number. Find the missing number.

    eg: 11122333 : Missing number 2
    11122233344455666 Missing number 5
</blockquote>

**********
**Question2**
<blockquote>

    Given a compressed string in which a number followed by [] indicate how many times those characters occur, decompress the string

    Eg. : a3[b2[c1[d]]]e will be decompressed as abcdcdbcdcdbcdcde.
    Assume the string is well formed and number will always be followed by a [].

</blockquote>

************
**Question3**
<blockquote>
    Given a tree representation of a html parsed output, wherein every block is a node in the tree, find if two html docs contain the same text.
    
</blockquote>   

 ```C++
        struct Node {
        string value;
        bool isMetadata;
        vector<Node*> children;
        };
```

*************

