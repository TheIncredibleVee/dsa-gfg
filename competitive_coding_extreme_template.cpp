/*

//////////////////////////////////////////////////
//                                              //
//          C++ Competitive Programming         //
//              Template by Cyberkid            //
//                                              //
//            Meet my Codechef Doggie           //
//                                              //
//      |\_/|                                   //
//      | @ @   Woof!                           //
//      |   <>              _                   //
//      |  _/\------____ ((| |))                //
//      |               `--' |                  //
//  ____|_       ___|   |___.'                  //
// /_/_____/____/_______|                       //
//                                              //
//      I am here to guard this code, woof!     //
//      Name : Cyberkid | Country : India       //
//                                              //
//////////////////////////////////////////////////


                              .:/`./:.
                           `:+/+: :+++/:`
                         `/+++++. +++++++.
                         /+++/++`.++++++++.
                       `/++++++/ -++++++++/`
                      .++++++++/ :+++++++++:
                     -+/////:::- :////++++++:
                    .-:-:-:-::. ..-.:----::/+.
                  `-.-.               `...::-.
                  `                          ..


                                                   ```
               `.--.                          --.` `-:
     `     `-:/+//++:`                        /+++/:-.`
         ``/++++/+++++-                      .-/.-++/++/-`
      `  -/.++++++++++/`                    `   -/-/++++/-`
`     ` -++::+++++++++                         -. -/`:++/.:
`    :`-+++:./++++++++.                           `  -//./:.
-`   o.++++:.-+/+++++++:.`                           ./:`-`:` ``
: `.-+/+++++.-///+++++++++:`                         `:   `:``
`   `/++++++/`////++////+++/-                        -`   -: /
    -+.+++:/:.-+/////::://///-                      .     .:`o.
    /+.++//`` `://+////:::/://-                   `.      `.`+-
   -++-++//-  `-///////:::::///`    .``-//:` ``. `.        ` //
  `////++++/.   -:://///://////:   -/-//+/-`:++:`.           ++`
  -:-` ...-.   ` .::://////////-` `::.:/:`-/++//.           -/+:
 `-.---`       -` :/:/:::///://-.``.-::. :+++++.               .
 `/:-````.     ``..://////::///-```/::..:+++++-              .:/`
  :---...`     .../.:+/////:///..`.:-`:/+/+++: .`          .-.:/
  `::-:.`.-`   .`.`:.-///--/::/ ``..-/-:////: -.           .-:/-
   -----://:-` `` `-/.::-:-:---````-://///::`-`      `.:+//-..:`

    Name : Cyberkid | Organization : Shadow Breakerz, India

*/

#include<bits/stdc++.h>
// #include <iostream>       // cin, cout
// #include<stdio>           // scanf, printf
// #include<stdlib.h>      // atoi, atoll, malloc, rand
// #include<iomanip>       // set, setprecision
// #include<math>            // sqrt, log2, pow, __gcd
// #include <string>     // strlen, strcpy, size, to_string
// #include <numeric>
// #include <array>
// #include <vector>    // push_back, pop_back, empty, clear, front, back, begin, end, size, at
// #include <list>      // erase
// #include <stack>
// #include <queue>
// #include <deque>
// #include <map>
// #include <unordered_map>
// #include <set>
// #include <unordered_set>
// #include <numeric>
// #include <algorithm>
// #include <cstdio>
// #include <cstdlib>
// #include <chrono>
// #include <cmath>
// #include <complex>
// #include <cstring>
// #include <ctime>
// #include <cassert>
// #include <limits.h>
// #include <bitset>
// #include <typeinfo>
// #include <fstream>       // open, fail
// #include <random>
// #include <utility>       // makepair,
using namespace std;

// optimizers
// #pragma GCC optimize ("O3")      // for CP
// #pragma GCC target ("sse4")      // for CP
// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")
// #pragma GCC optimization ("unroll-loops")

// shorthands
#define SS stringstream
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define N next
#define P prev
#define B begin
#define E end

// constants
// #define PI = 3.14159265358979323846
// #define mininfi -1000000007   //  10^9 + 7
// #define plusinfi 1000000007   //  10^9 + 7
// const long long int MIN_SIZE = -10000009;
const long long int MAX_SIZE = 10000009;

// range
#define all(x) x.begin(),x.end()
#define allr(c) c.rbegin(),c.rend()

// data types
typedef long long ll;
typedef long double ld;
typedef long long int li;

typedef stringstream ss;

typedef map<int, int> mi;
typedef map<li, int> ml;
typedef map<char, int> mc;
typedef map<string, int> ms;

typedef pair<int, int> pi;
typedef pair<li, int> pl;
typedef pair<char, int> pc;
typedef pair<string, int> ps;

typedef set<int> seti;
typedef set<li> setl;
typedef set<char> setc;
typedef set<string> sets;
typedef set<pi> spi;

typedef vector<int> vi;
typedef vector<li> vl;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<pi> vpi;

typedef map<int, int>::iterator miit;
typedef map<li, int>::iterator mlit;
typedef map<char, int>::iterator mcit;
typedef map<string, int>::iterator msit;

typedef set<int>::iterator siit;
typedef set<li>::iterator slit;
typedef set<char>::iterator scit;
typedef set<string>::iterator ssit;

typedef vector<int>::iterator viit;
typedef vector<li>::iterator vlit;
typedef vector<char>::iterator vcit;
typedef vector<string>::iterator vsit;

// loops
#define FOR(i, ini, lim, inc) for(ll i=ini; i<lim; i+=inc)
#define RFOR(i, ini, lim, inc) for(ll i=ini; i>lim; i-=inc)
// <=
#define REP(i, ini, lim) FOR(i, ini, lim+1, 1)
// >=
#define RREP(i, ini, lim) RFOR(i, ini, lim-1, 1)
// <    lesser
#define FO(i, ini, lim) FOR(i, ini, lim, 1)
// >    greater
#define RFO(i, ini, lim) RFOR(i, ini, lim, 1)

#define forr(x,y) for(int i = x; i < y; i++)
#define getarr(arr,beg,end) forr(beg,end) cin>>arr[i];
#define printarr(arr,beg,end) forr(beg,end) cout<<arr[i]<<" ";
#define getvec(arr,end) for(int i=0;i<end;i++) {int temp;cin>>temp;arr.push_back(temp);}
#define printvec(arr) for(auto it=arr.begin();it!=arr.end();it++) cout<<*it<<" ";

// #define all(x) x.begin(),x.end()
// #define allr(c) c.rbegin(),c.rend()
// #define forr(x,y) for(int i = x; i < y; i++)
// #define getarr(arr,beg,end) forr(beg,end) cin>>arr[i];
// #define printarr(arr,beg,end) forr(beg,end) cout<<arr[i]<<" ";
// #define print(word) cout << word << endl;
// #define input(num) string num; cin >> num;

// functions
vs parseStr(string line)
{   /*    STRING TO WORD INPUT    */
    SS ss(line);
    vs out_arr; string word;
    while (ss >> word)
        out_arr.PB(word);
    return out_arr;
}

vc parseChar(string line)
{   /*    STRING TO CHAR INPUT    */
    SS ss(line);
    vc out_arr; char letter;
    while (ss >> letter)
        out_arr.PB(letter);
    return out_arr;
}

vi parseInt(string line)
{   /*    STRING TO INT INPUT    */
    SS ss(line);
    vi out_arr; int num1;
    while (ss >> num1)
        out_arr.PB(num1);
    return out_arr;
}

bool mySortFunc(int num1, int num2)
{
    return num1 < num2;
}

bool sortbySecond(const pair<int, int> &a, const pair<int, int> &b)
{   /*    COMPARATOR FUNCTION FOR SORTING PAIRS USING 2ND VALUE    */
    return (a.second < b.second);
}

bool sortbyFirst(const pair<int, int> &a, const pair<int, int> &b)
{   /*    COMPARATOR FUNCTION FOR SORTING PAIRS USING 1ST VALUE    */
    return (a.first < b.first);
}

int sortbyEvenodd(int num1, int num2)
{
    return (num1 % 2 == 0) and (num2 % 2 == 1);
}
int binSearch(int in_arr[], int beg, int end, int key)
{   /*    BINARY SEARCH    */
    int mid = (beg + end) / 2;
    if (key < in_arr[mid])
        binSearch(in_arr, beg, mid - 1, key);
    if (key > in_arr[mid])
        binSearch(in_arr, mid + 1, end, key);
    if (key == in_arr[mid])
        return mid;
}

int getFactorial(int num1)
{   /*    FACTORIAL OF A NUMBER    */
    int factorial = 1;
    for (int i = 2; i <= num1; i++) {
        factorial = factorial * i;
    }
    return factorial;
}

int Bin2Sys(int num1, int numSys)
{   /*    CONVERT BINARY/OCTAL TO DECIMAL    */
    int out_dec = 0;
    int power = 1;
    while (num1 > 0)
    {
        int temp = num1 % 10;
        out_dec = out_dec + (temp * power);
        power = power * numSys; //numsys = 2,8
        num1 = num1 / 10;
    }
    return out_dec;
}

int Bin2Hex(string hexno)
{   /*    CONVERT HEXADECIMAL TO DECIMAL    */
    int out_dec = 0;
    int power = 1;
    int s = hexno.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (hexno[i] >= '0' and hexno[i] <= '9')
        {
            out_dec = out_dec + power * (hexno[i] - '0');
        }
        else if (hexno[i] >= 'A' and hexno[i] <= 'F')
        {
            out_dec = out_dec + power * (hexno[i] - 'A' + 10);
        }
        power = power * 16;
    }
    return out_dec;
}

int findGCD(int num1, int num2)
{   /*    GCD OF 2 NUMBERS    */
    return __gcd(num1, num2);
}

int findLCM(int num1, int num2)
{   /*    LCM OF 2 NUMBERS    */
    return (num1 * num2) / __gcd(num1, num2);
}

int maxArithSubArr(vector<int> arr, int n)
{   /*    maxArithmeticSubarray for an array arr[n]    */
    int maxLen = 0;
    for (int i = 0; i < n - 1;)
    {
        int j = i;
        int comm_diff = arr[i + 1] - arr[i];
        while (j < n - 1 && (arr[j + 1] - arr[j] == comm_diff))
            j++;
        int max_j = j;
        maxLen = max(maxLen, max_j - i + 1);
        i = max(i + 1, j);
    }
    return maxLen;
}

int MaxSumContSubArr(int arr[], int size)
{   /*    KADANE'S ALGORITHM FOR POSITIVE OR NEGATIVE ARRAYS    */
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;    //for global use
    int maxSum = 0, curSum = 0, lowSum = -1000000007;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > lowSum) { lowSum = arr[i]; x2 = i; y2 = i; }
        curSum = curSum + arr[i]; y1 = y1 + 1;
        if (curSum > maxSum) { maxSum = curSum; }
        if (curSum <= 0) { curSum = 0; x1 = i + 1; y1 = i + 1; }
    }
    if (maxSum <= 0) return lowSum; else return maxSum;
}

int findGCDarray(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
    {
        res = findGCD(arr[i], res);
        if (res == 1)
        {
            return 1;
        }
    }
    return res;
}

int findLCMarray(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
    {
        res = findLCM(arr[i], res);
    }
    return res;
}

vi sievePrime(int n)
{   /*    SIEVE OF ERATOSTHENES    */
    vi primes(n, 1);
    // primes.reserve(n);
    for (int i = 2; i * i <= n; i++)
    {
        if (primes[i] == 1)
        {
            for (int x = i * i; x <= n; x += i)
                primes[x] = 0;
        }
    }
    return primes;
}

vl modifiedSieve(li num1)
{   /*    MODIFIED SIEVE OF ERATOSTHENES WITH O(N)    */
    vl spf(MAX_SIZE), myprimes, isprime(MAX_SIZE, true);    //for global use
    isprime[0] = isprime[1] = false;
    for (li i = 2; i < num1; i++)
    {
        if (isprime[i])
        {
            myprimes.push_back(i);
            spf[i] = i;
        }
        for (li j = 0; (j < (int)myprimes.size() && (i * myprimes[j]) < num1 && myprimes[j] <= spf[i]) ; j++)
        {
            isprime[i * myprimes[j]] = false;
            spf[i * myprimes[j]] = myprimes[j];
        }
    }
    return myprimes;
}

vs getSubstr(string str1)
{   /*    GENERATE ALL SUBSTRINGS    */
    int n = str1.size();
    vs out_str;
    for (int end = 0; end < n; end++) {
        for (int beg = 0; beg <= end; beg++) {
            string temp = "";
            for (int x = beg; x <= end; x++) {
                temp = temp + str1[x];
            } out_str.push_back(temp);
        }
    }
    return out_str;
}

int multiply(int x, int res[], int res_size)
{   /*    AUXILIARY FUNCTION FOR factorial()    */
    int carry = 0;
    for (int i = 0; i < res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry  = prod / 10;
    }
    while (carry)
    {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}

void factorial(int n)
{   /*    FOR PRINTING VERY BIG FACTORIAL NUMBERS    */
    int res[500];   // maximum number of digits in factorial
    res[0] = 1;
    int res_size = 1;
    for (int x = 2; x <= n; x++)
        res_size = multiply(x, res, res_size);
    for (int i = res_size - 1; i >= 0; i--)
        printf("%d", res[i]);
}

void swap(int* a, int* b)
{   /* AUXILIARY FUNCTION FOR quickSort()   */
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high)
{   /* AUXILIARY FUNCTION FOR quickSort()   */
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{   /* O(n log n) SORT FUNCTION TO SORT AN ARRAY    */
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// templates
template <typename T>
void inpA (T arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

template <typename T>
void inpV (vector<T> &vec, int n)
{
    vec.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i] ;
    }
}

template <typename T, size_t SIZE>
void outA (const T (&array)[SIZE])
{
    for (size_t i = 0; i < SIZE; i++)
        std::cout << array[i] << " ";
}

template <typename T>
void outV (const vector<T> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " " ;
    }
    cout << endl ;
}

template <typename T>
void outAptr(const T array[], size_t SIZE)
{
    /*  SIZE = sizeof(array_name) / sizeof(int)  */
    /*  SIZE = sizeof(array) / sizeof(array[0])  */
    for (size_t i = 0; i < SIZE; i++)
    {
        cout << array[i] << " ";
    }
}

template<class T>
bool ckmin(T& a, const T& b)
{
    return b < a ? a = b, 1 : 0;
}

template<class T>
bool ckmax(T& a, const T& b)
{
    return a < b ? a = b, 1 : 0;
}

template<typename T>
void printv(vector<T> &v)
{
    if (v.empty()) return;
    for (T &i : v) cout << i << " ";
    cout << endl;
}

template<typename T>
void printl(list<T> &l)
{
    if (l.empty()) return;
    for (T &i : l) cout << i << " ";
    cout << endl;
}

template<typename T, size_t N>
void printa(array<T, N> &a)
{
    for (T &i : a) cout << i << " ";
    cout << endl;
}

template<typename T1, typename T2>
void printp(pair<T1, T2> &p)
{
    cout << p.first << " " << p.second << "\n";
}

template<typename T>
void prints(T &s)
{
    if (s.empty()) return;
    for (auto x : s) cout << x << " ";
    cout << "\n";
}

template<typename T>
void printm(T &m)
{
    if (m.empty()) return;
    for (auto x : m) printp(x);
}

// structures
struct hp
{   /*    HASH PAIR STRUCTURE    */
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash2 = hash<T2> {}(p.second);
        auto hash1 = hash<T1> {}(p.first);
        return hash2 ^ hash1;
    }
};

struct node
{   /*    NODES    */
    int data;
    node* link;
};

typedef node* nodePtr;

class Node
{   /*    NODES    */
public:
    int data;
    Node* next;
};

void node2Beg(Node** head_ref, int new_data)
{   /*    INSERT NODE AT BEGINNING    */
    Node* new_node = new Node();
    new_node -> data = new_data;
    new_node -> next = (*head_ref);
    (*head_ref) = new_node;
}

void node2End(Node** head_ref, int new_data)
{   /*    INSERT NODE AT END    */
    Node* new_node = new Node();
    Node *last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    return;
}

void node2Pos(int posins, Node** head_ref, int new_data)
{   /*    INSERT NODE AFTER GIVEN POSITION    */
    if (*head_ref == NULL)
    {
        cout << "the given previous node cannot be NULL";
        return;
    }
    int poscnt = 0;
    Node* atpos = *head_ref;
    Node* new_node = new Node();
    new_node -> data = new_data;
    while (poscnt != posins)
    {
        atpos = atpos -> next;
        poscnt = poscnt + 1;
    }
    new_node -> next = atpos -> next -> next;
    atpos -> next = new_node;
}

void printNodes(Node* node)
{
    while (node != NULL)
    {
        cout << node -> data << " ";
        node = node -> next;
    }
}

// BITMASKING
void displaySubset(int subset)
{   /*    REPRESENTING EACH SUBSET AS A NUMBER AND PRINTING IT    */
    for (int bit_no = 0; bit_no <= 9; bit_no++)
    {
        if ((subset & (1 << bit_no)) != 0)
        {
            cout << bit_no + 1 << " ";
        }
    }
}

void addSubset(int& subset, int x)
{   /*    ADD AN ELEMENT x (not present) TO THE SUBSET    */
    subset = (subset ^ (1 << (x - 1)));
}

void removeSubset(int& subset, int x)
{   /*    REMOVE AN ELEMENT x (present) FROM THE SUBSET    */
    subset = (subset ^ (1 << (x - 1)));
}

void dijkstra()
{   // SHORTEST PATH ALGORITHM

    // vertices, weight of edges
    int n, m; cin >> n >> m;
    vi dist(n + 1, MAX_SIZE);
    vector<vpi> graph(n + 1);

    // adding all nodes to graph
    for (li i = 0; i < m; i++)
    {
        int u, v, w; cin >> u >> v >> w;
        graph[u].PB({v, w});
        graph[v].PB({u, w});
    }

    // to traverse from 1 to n
    li temp, src = 1, dest = n; dist[src] = 0;

    // weight of edges, vertices
    spi s; s.insert({0, src}); li flag = 0;
    while (!s.empty()) {

        auto x = *(s.B());
        s.erase(x);
        for (auto it : graph[x.S])
        {
            // dijkstra single source shortest path algorithm
            // if (d(u) + c(u,v) < d(v)) then d[v] = d(u) + c(u,v)
            // d(u) = dist[x.S]     c(u, v) = it.S      d(v) = dist[it.F]
            // cout << "dist[it.F]: " << dist[it.F] << "\t";
            // cout << "dist[x.S]: " << dist[x.S] << "\t";
            // cout << "it.S: " << it.S << endl;
            if ((dist[it.F] > dist[x.S] + it.S) and flag == 0)
            {
                s.erase({dist[it.F], it.F});
                dist[it.F] = dist[x.S] + it.S;
                s.insert({dist[it.F], it.F});
                flag = 1;
            }
            else
            {
                if (it.S - dist[x.S] < 0)
                    temp = 0;
                else
                    temp = it.S - dist[x.S];
                if ((dist[it.F] > dist[x.S] + temp) and flag == 1)
                {
                    s.erase({dist[it.F], it.F});
                    // d(v) = [c(u, v) - d(u)] + d(u)
                    // if (dist[it.F] > temp + dist[x.S])
                    dist[it.F] = temp + dist[x.S];
                    // if (dist[it.F] < 0)
                    //     dist[it.F] = 0;
                    s.insert({dist[it.F], it.F});
                }
            }
        }
    }
    // cout << endl;
    // for (li i = 1; i <= n; i++)
    // {
    if (dist[n] < MAX_SIZE)
    {
        cout << dist[n];
    }
    else
        cout << "NOT POSSIBLE";
    // }
}


int solve(int i, int mask, int& n)
{   /*    DYNAMIC PROGRAMMING WITH BITMASKING    */
    int dp[21][1 << 21]; int cost[21][21];    //for global use
    if (i == n)
        return 0;    // BASE CASE
    if (dp[i][mask] != -1)
    {
        return dp[i][mask];    // MEMOIZATION
    }
    int answer = INT_MAX;
    for (int j = 0; j < n; j++)
    {
        if (mask & (1 << j))
        {   // RECURSION
            answer = min(answer, cost[j][i] + solve(i + 1, (mask ^ (1 << j)), n));
        }
    }
    dp[i][mask] = answer;
    return dp[i][mask];
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL); cout.tie(NULL);
    // YOUR CODE HERE

    // int Set = 15;   // bitmask is 1111 which is {1, 2, 3, 4}
    // removeSubset(Set, 2);    //element must be present already
    // removeSubset(Set, 4);
    // addSubset(Set, 5);   //element should not be present already
    // addSubset(Set, 7);
    // displaySubset(Set);

    // cout << "hello";
    // printvec(mya);

    int tcs = 1; cin >> tcs;
    int tc = tcs; while (tcs--)
    {
        int n; cin >> n;    // number of elements to get
        vi mya;
        getvec(mya, n);
        cout << "Case #" << tc - tcs << ": ";
        cout << maxArithSubArr(mya, n) << "\n";
    }
}


/*

//----INPUT----

4
7
10 7 4 6 8 10 11
4
9 7 5 3
9
5 5 4 5 5 5 4 5 6
10
5 4 3 2 1 2 3 4 5 6

//----OUTPUT----

4
4
3
6

*/


/*                  NOTES

// FORMAT SPECIFIER
char - %c
32 bit int - %d
64 bit long - %ld
32 bit float - %f
64 bit float - %lf
long long int - %I64d

// BITWISE OPERATORS
& - bitwise and
| - bitwise or
^ - bitwise xor
~ - one's complement
<< - left shift
>> - right shift

int booly(int a, int b, string op)
{
    if (op == "AND") { if (a + b == 2) return 1; }
    if (op == "OR") { if (a + b >= 1) return 1; }
    if (op == "NOT") { if (a + b == 1) return 1; }
    return 0;
}

MEMORY INITILIZATION
memset(dp, -1, sizeof(dp));

//SWAPPING TRICK
to swap 2 numbers without a new variable, run this expression
a = (a + b) - (b = a);

//MODULO TRICKS
n % 9 will give the sum of all digits of n
eg. 56789 = (5+6+7+8+9) => 35 = (3 + 5) = 8
56789 % 9 = 8 // because of divisibility rule
1089 = (1+8+9) => 18 = (1+8) = 9
if n % 9 == 0 then ans is 9 else ans is n % 9
modulo operator can be used in circular data structures eg. rings, clocks
eg. to move from 3 to 2 in a 12 hr clock it takes 12 - 3 + 2 steps

// POWER USING BITWISE SHIFT
a << n ===> a * 2^n
a >> n ===> a / 2^n

//TERNIARY OPERATOR
Condition ? x : y

// IMPORTANT FUNCTIONS
// to know the memory size needed by a variable
sizeof(variable_name);
// to get a line of input, spaces allowed
getline(cin, string_name);
// to know the number of elements in vector
vector_name.size();
// returns an iterator pointing to first element in vector
vector_name.begin();
// returns an iterator pointing to last element in vector
vector_name.end();
// converts string form of integer to integer values
stoi(integer_as_string);
// sorts with default < or with optional 'comp_func'
sort(beg_itr, end_itr, comp_func);
// populates container like { incr, ++incr, ++incr, ...}
iota(beg_itr, end_itr, incr);

// cast - convert one datatype to another
eg (int)3.14

// LAMBDA EXPRESSIONS
// [capture clause] (parameters) -> return-type { method definition };

// RANGE BASED FOR LOOP
// declaration and initialization done at same time
// to get all elements 'x' for an array 'a'
for (auto& x : a) cin >> x;
// to print all elements 'i' for an array 'a'
for (auto i : a) cout << i << " ";
for (auto i : {5,6,7,8}) cout << i << " ";
for (auto i : "hello") cout << c << " ";
for (auto i : hp) cout << hp.F << " " << hp.S << endl;

// FOR_EACH FOR LOOP
// to apply a function 'myfunc' to each element in array
for_each(beg_itr, end_itr, myfunc)

// STREAMS
ostream& is output stream type

// SORTING NOTES
sort default comparator function is { x1 < x2 }
sort priority is { int > CAPS > small } for strings

// ASCII VALUES
'A' -> 65, 'Z' -> 90,
'a' -> 96, 'z' -> 122,
'0' -> 48, '9' -> 57,
INT_MAX -> 2,147,483,647 (10^10),
LLONG_MAX -> 9,223,372,036,854,775,807 (10^19)

// RANDOM FUNCTION
rand()

// POINTERS AND REFERENCES
& - refers to the address of a variable
* - pointer to a variable (dereference)
. - usedto access members of a structure
-> - used to access members of a structure
using a pointer pointing to it

// BITMASKING
bitmasking technique can be used to efficiently store subsets
the position of bits in bitmask represent elements in the set
the bit is turned on if element present is set else it is off
for eg. consider sequence of numbers from 1 to 4
the set is {1, 2, 3, 4} represented as 1111
then the subset {1, 2} is represented as 1100
then the subset {2, 4} is represented as 0101
XOR operation can be used to insert and delete in sets
AND operation can be used to display the set

// DYNAMIC PROGRAMMING
dp(i, Set) = dist(i, j) + dp(j, Set - {j})

// BINARY TREES
// to declare/represent nodes of a binary tree
struct Node
{
    int data;
    struct* left;
    struct* right;
    Node (int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
// to create nodes of a binary tree
struct Node* root = new Node(1);
// the tree will now look like
             1
            / \
          NULL NULL
root->left = new Node(2);
root->right = new Node(3);
// 2 and 3 become left and right children of 1
                    1
                  /    \
                 2       3
               /  \     /  \
            NULL NULL  NULL NULL
root->left->left = new Node(4);
// 4 becomes the left child of 2
               1
            /     \
           2       3
          / \     / \
         4  NULL NULL NULL
        / \
     NULL NULL

*/