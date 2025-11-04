#include <string>
#include <vector>
using namespace std;

int solution(vector<string> babbling) {
    const vector<string> tok = {"aya","ye","woo","ma"};
    int ans = 0;

    for (const string& w : babbling) {
        size_t pos = 0;
        bool used[4] = {false,false,false,false};
        bool ok = true;

        while (pos < w.size()) {
            bool matched = false;
            for (int i = 0; i < 4; ++i) {
                const string& t = tok[i];
                if (!used[i] &&
                    pos + t.size() <= w.size() &&
                    w.compare(pos, t.size(), t) == 0) {
                    used[i] = true;
                    pos += t.size();
                    matched = true;
                    break;
                }
            }
            if (!matched) { ok = false; break; }
        }
        if (ok && pos == w.size()) ++ans;
    }
    return ans;
}
