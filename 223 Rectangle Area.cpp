/*
Rectangle Area
Total Accepted: 18962 Total Submissions: 71642 Difficulty: Easy

Find the total area covered by two rectilinear rectangles in a 2D plane.

Each rectangle is defined by its bottom left corner and top right corner as shown in the figure.
Rectangle Area

Assume that the total area is never beyond the maximum possible value of int.

https://leetcode.com/problems/rectangle-area/
*/
28ms
int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int minx = max(A,E);
        int miny = max(B,F);
        int maxx = min(C,G);
        int maxy = min(D,H);
        int all = (C-A)*(D-B)+(G-E)*(H-F);
        int two=0;
        if(maxx>minx && maxy>miny) two = (maxx-minx)*(maxy-miny);
        return all-two;
    }