class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int score = 0;
    while (true) {
        if (a == 0 && b == 0) break;
        if (a == 0 && c == 0) break;
        if (b == 0 && c == 0) break;

        if (a >= b && a >= c) {
            if (b >= c) {
                a--;
                b--;
            } else {
                a--;
                c--;
            }
        } else if (b >= a && b >= c) {
            if (a >= c) {
                b--;
                a--;
            } else {
                b--;
                c--;
            }
        } else { //c is largest
            if (a >= b) {
                c--;
                a--;
            } else {
                c--;
                b--;
            }
        }
        score++;
    }
    return score;
    }
};