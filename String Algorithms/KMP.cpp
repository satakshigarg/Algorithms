#include <iostream>

using namespace std;

void computeLPS(char *pat, int M, int *lps) {
    int len = 0, int i = 1;
    while (len < M && i < M) {
        if (pat[i] == pat[M]) {
            lps[i] = len + 1;
            len += 1;
            i += 1;
        }
        else {
            if (len != 0) {
                len = lps[len - 1];
            }
            else {
                lps[i] = 0;
                i += 1;
            }
        }
    }
}

void kmpSearch (char* pat, char* txt) {
    int m = strlen(pat);
    int n = strlen(txt);
    int lps[m];
    computeLPS(pat, m, lps);
    
    int i = 0, int j = 0;
    while (i < n && j < m) {
        if (pat[j] == txt[i]) {
            i += 1;
            j += 1;
        }
        else {
            if (j != 0) {
                j = lps[j-1];
            }
            else {
                i += 1;
            }
        }
        
        if (j == m) {
            cout << i-j << endl;
            j = lps[j-1];
        }
    }
}
