#include <bits/stdc++.h>
using namespace std;

struct Contestant {
    string name;
    int totalPoints;
    int totalPenalty;
};

bool compareContestants(const Contestant& a, const Contestant& b) {
    if (a.totalPoints != b.totalPoints) {
        return a.totalPoints > b.totalPoints; 
    }

    if (a.totalPenalty != b.totalPenalty) {
        return a.totalPenalty < b.totalPenalty;
    }

    return a.name < b.name;
}

int main() {
    int N;
    cin >> N;

    vector<Contestant> contestants;

    for (int i = 0; i < N; i++) {
        string s;
        int a, b, c, d;
        cin >> s >> a >> b >> c >> d;

        int totalP = a + c;
        int totalPen = b + d;

        contestants.push_back({s, totalP, totalPen});
    }

    sort(contestants.begin(), contestants.end(), compareContestants);

    for (int i = 0; i < N; i++) {
        cout << contestants[i].name << endl;
    }

    return 0;
}