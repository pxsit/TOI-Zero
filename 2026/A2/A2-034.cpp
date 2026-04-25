/*
 * Author : Piyaphat Jaiboon
 * Date : 24/04/2026
 */

#include <bits/stdc++.h>
using namespace std;

// maximum N is 32769

/* Logic : simple way to find prime range is to use Algorithm called :
 *                "Sieve of Eratosthenes"
 *  resource : https://www.geeksforgeeks.org/dsa/sieve-of-eratosthenes
 *             https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html
 */

vector<bool> isprime;
void sieve(int n) {
  isprime.assign(n + 5, true);
  isprime[0] = isprime[1] = false;
  for (int i = 2; i * i <= n; i++) {
    if (isprime[i]) {
      for (int p = i * i; p <= n; p += i) {
        isprime[p] = false;
      }
    }
  }
}

int main() {
  int n;
  cin >> n;
  sieve(n);
  // In case N is a prime number , print primes range [ 2, n]
  if (isprime[n]) {
    cout << "Yes\n";
    for (int i = 2; i <= n; i++)
      if (isprime[i])
        cout << i << " ";
  } else {
    cout << "No\n";
  }

  return 0;
}
