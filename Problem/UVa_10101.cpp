#include <iostream>
#include <iomanip> // 為了使用 setw 格式化輸出

using namespace std;

// 遞迴處理 Bangla 數字單位
void printBangla(long long n) {
    // 處理 kuti (一千萬, 10^7)
    if (n >= 10000000) {
        printBangla(n / 10000000);
        cout << " kuti";
        n %= 10000000;
    }
    // 處理 lakh (十萬, 10^5)
    if (n >= 100000) {
        printBangla(n / 100000);
        cout << " lakh";
        n %= 100000;
    }
    // 處理 hajar (一千, 10^3)
    if (n >= 1000) {
        printBangla(n / 1000);
        cout << " hajar";
        n %= 1000;
    }
    // 處理 shata (一百, 10^2)
    if (n >= 100) {
        printBangla(n / 100);
        cout << " shata";
        n %= 100;
    }
    // 處理最後剩下的個位與十位數
    if (n > 0) {
        cout << " " << n;
    }
}

int main() {
    // 優化 I/O 速度
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long num;
    int caseNum = 1;

    // 持續讀取直到 EOF
    while (cin >> num) {
        // 依照題目要求，Case number 需要靠右對齊佔 4 個字元
        cout << setw(4) << caseNum++ << ".";
        
        // 特例處理：如果輸入剛好是 0，直接印出 0
        if (num == 0) {
            cout << " 0";
        } else {
            // 否則進入遞迴處理
            printBangla(num);
        }
        cout << "\n";
    }

    return 0;
}