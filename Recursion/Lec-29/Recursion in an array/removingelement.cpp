#include <iostream>
using namespace std;

int removeElement(int ans[], int org[], int n, int idx, int pos) {
    if (idx == n) return pos; // final size of ans

    if (org[idx] != 1) {
        ans[pos] = org[idx];
        return removeElement(ans, org, n, idx + 1, pos + 1);
    }

    return removeElement(ans, org, n, idx + 1, pos);
}

int main() {
    int org[] = {0,2,3,4,5,6,4,21,1,2,1,1,1,1};
    int n = sizeof(org) / sizeof(org[0]);

    int ans[n];
    int newSize = removeElement(ans, org, n, 0, 0);

    for (int i = 0; i < newSize; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
//org ke liye indexing idx kar raha hai , aur ans ke liye pos kar raha hai