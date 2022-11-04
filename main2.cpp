#include <bits/stdc++.h>
#include "quadtree.h"
using namespace std;

int main()
{
    QuadTree<int> tree;
    int n;
    srand(time(NULL));
    for(int i=0 ; i<50 ; ++i)
    {
        int x = 1 + rand() % (100);
        int y = 1 + rand() % (100);
        int value = 1 + rand() % (1000);
        tree.insert(x,y,value);
    }
    tree.graph("quadtree2.dot");
}