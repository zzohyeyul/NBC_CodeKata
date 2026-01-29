using namespace std;

long long solution(int price, int money, int count) {
    long long total = 1LL * price * count * (count + 1) / 2;
    long long 부족 = total - money;
    return (부족 > 0) ? 부족 : 0;
}