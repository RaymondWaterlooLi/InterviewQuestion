//
// Created by Raymond Li on 2019-02-06.
//


#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;


struct Interval {
     int start;
     int end;
     Interval() : start(0), end(0) {}
     Interval(int s, int e) : start(s), end(e) {}
};

struct MyCompare {
    bool operator () (const Interval& l, const Interval& r) {
        return l.start< r.start;
    }
}mycom;

vector<Interval> merge(vector<Interval>& intervals) {
    vector<Interval> res;
    if (intervals.size() < 2)
        return intervals;
    sort(intervals.begin(), intervals.end(), mycom);
    int start = intervals[0].start;
    int end = intervals[0].end;
    for (int i = 1; i < intervals.size(); ++i) {
        if (intervals[i].start <= end) {
            end = max(intervals[i].end, end);
        }
        else {
            Interval lol(start,end);
            res.push_back(lol);
            start = intervals[i].start;
            end = intervals[i].end;
        }
    }
    Interval lol(start,end);
    res.push_back(lol);
    return res;
}
