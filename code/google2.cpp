//
// Created by Raymond Li on 2019-04-11.
//

#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <list>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

/*
 * Given a screen with a given width, height and supported min/max font size, determine the max font a given string can be displayed in.
Word or character can’t be broken. Imagine a method getWidth(char c, int fontSize) and getHeight(int fontSize) are given
 */

int maxFont (string inputs, int min, int max, int width, int height) {
    int l = min;
    int r = max;
    while (l + 1 < r) {
        int mid = l  + (r - l) / 2;
        if (canFit(input,  width, height, mid)) left = mid;
        else right = mid;
        if (canFit(input, width, height, left)) return left;
        if (canFit(input, width, height, right)) return right;
        return 0;
    }
}

bool canFit(string input, int width, int height, int font) {
    int rows = height / getHeight(font);
    int i = 0; int j = 0;
    int l = input.length();
    int remain = width;
    //get max value for input
    for (char a : input) {
        int w = getWidth(a, font);
        if (a == ' ') {
            if (j > width) return false;
            if (j > remain) {
                remain = width;
                j = 0;
                i ++;
                if (i == height) return false;
            }
            else remain -= w;
        }
        else j += w;
    }
}

int getHeight (int font) {
    return font;
}

int getWidth(char a , int font) {
    return 1.5 *  font;
}