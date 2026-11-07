/* Dijkstra's algorithm: teaching skeleton
 * Only the control flow is left: loops, if/else conditions, returns.
 * Fill in every TODO. The graph is the directed example from the lecture.
 *
 * Expected output once every TODO is done:
 *   0: dist 0, path 0
 *   1: dist 3, path 0 -> 2 -> 1
 *   2: dist 1, path 0 -> 2
 *   3: dist 4, path 0 -> 2 -> 1 -> 3
 *   4: dist 7, path 0 -> 2 -> 1 -> 3 -> 4
 *
 * Compile and run:  gcc dijkstra_skeleton.c -o dijkstra && ./dijkstra
 */
#include <stdio.h>
#include <limits.h>

#define V 5
#define INF INT_MAX

/* returns the unfinished node with the smallest dist, or -1 if none is reachable */
int pickClosest(int dist[], int done[]) {
    int best = -1;
    for (int i = 0; i < V; i++) {
        if (!done[i] && dist[i] != INF) {
            if (best == -1 || dist[i] < dist[best]) {
                /* TODO: i is the closest so far, remember it */
            }
        }
    }
    return best;
}

void dijkstra(int g[V][V], int start, int dist[], int parent[]) {
    int done[V];

    for (int i = 0; i < V; i++) {
        /* TODO: dist = INF, parent = -1, not done yet */
    }
    /* TODO: the start is 0 away from itself */

    for (int step = 0; step < V; step++) {
        int u = pickClosest(dist, done);
        if (u == -1) {
            return;             /* every node left is unreachable */
        }
        /* TODO: mark u as done, dist[u] is final now */

        for (int v = 0; v < V; v++) {
            if (g[u][v] != 0 && !done[v]) {
                if (dist[u] + g[u][v] < dist[v]) {
                    /* TODO: shorter path through u, update dist[v] and parent[v] */
                } else {
                    /* old dist[v] is still better, nothing to do */
                }
            }
        }
    }
}

/* prints start -> ... -> v */
void printPath(int parent[], int v) {
    if (parent[v] == -1) {
        /* TODO: v is the start, print it */
    } else {
        /* TODO: print the path to parent[v] first, then " -> v" */
    }
}

int main(void) {
    /* g[u][v] = weight of edge u -> v, 0 = no edge */
    int g[V][V] = {
        /*        0  1  2  3  4 */
        /* 0 */ { 0, 4, 1, 0, 0 },
        /* 1 */ { 0, 0, 0, 1, 0 },
        /* 2 */ { 0, 2, 0, 5, 0 },
        /* 3 */ { 0, 0, 0, 0, 3 },
        /* 4 */ { 0, 0, 0, 0, 0 },
    };
    int dist[V], parent[V];

    /* TODO: run dijkstra from node 0 */

    for (int i = 0; i < V; i++) {
        if (dist[i] == INF) {
            /* TODO: print that i is unreachable */
        } else {
            /* TODO: print i, dist[i] and its path */
        }
    }
    return 0;
}
