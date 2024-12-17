class Solution {
public:
    int maximumScore(int a, int b, int c) {
       int score = 0;
    while (true) {
        // Sort the piles in descending order
        if (a < b) swap(a, b);
        if (a < c) swap(a, c);
        if (b < c) swap(b, c);

        // If two piles are empty, the game ends
        if (b == 0) break; 

        // Take stones from the two largest piles
        a--;
        b--;
        score++;
    }
    return score;
    }
};