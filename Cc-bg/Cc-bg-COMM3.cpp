#include <iostream>

using namespace std;

bool close(int dx, int dy, int r) {
  return dx*dx + dy*dy <= r*r;
}

int main() {
  int t, x[3], y[3], r, a, b, c, d, e, f;
  cin >> t;
  while (t--) {
    cin >> r >> a >> b >> c >> d >> e >> f;
    int num = close(a-c,b-d,r)+close(a-e,b-f,r)+close(c-e,d-f,r);
    (num >= 2)?cout << "yes"<<endl:cout << "no" << endl;
  }
}

