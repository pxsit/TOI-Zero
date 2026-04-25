#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll n, k;
const ll mxn = (ll)1e5 + 5;
ll c[mxn];

ll m[mxn]; // for counting frequency

ll solve() {

  ll l = 1, r = 1;
  ll ans = 0;
  ll diff_c = 0; // count different color

  /*
   *  Logic : extend Right side of window
   *          check different color is Greater or Equal to K
   *          if even extend the Right side more , number of different color
   * will remain Greater or Equal to K So try to reduce Window's Left side by
   * increasing Left index Then just check if number of different color is still
   * more K Otherwise , extend more Window's Right side
   * */

  while (r <= n) {

    m[c[r]]++;
    // if encouter color c[r] for the first time in (Interval Left-Right of
    // window ) , it mean it's a new color
    if (m[c[r]] == 1)
      diff_c++;

    // if different color is still Greater or Equal K
    // reduce left size;

    while (diff_c >= k) {
      // lost frequency of number c[l] by moving to the next Left index
      m[c[l]]--;
      if (m[c[l]] == 0)
        diff_c--;
      ++l;
    }

    /* since array c[Left to Right]
     * there is sub-array
     * c[1, Right] , c[2, Right], c[3, Right], c[ Left - 1, Right]
     * those have different Greater or K color
     *
     * So if we do a bit math , the number of sub-array is Left - 1
     */
    ans += (l - 1);
    r++; // extend window
  }

  return ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  cin >> n >> k;
  for (size_t i = 1; i <= n; i++)
    cin >> c[i];
  cout << solve() << endl;
}
