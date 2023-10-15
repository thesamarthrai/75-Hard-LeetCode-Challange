class Solution {
public:
    bool judgeCircle(string moves) {
        int c1, c2, c3, c4;
        c1 = 0;
        c2 = 0;
        c3 = 0;
        c4 = 0;
        for (int i = 0; i < moves.size(); i++) {
            if (moves[i] == 'U') {
                c1++;
            }
            if (moves[i] == 'D') {
                c2++;
            }
            if (moves[i] == 'L') {
                c3++;
            }
            if (moves[i] == 'R') {
                c4++;
            }
        }

        return (c1 == c2 && c3 == c4);
    }
};
