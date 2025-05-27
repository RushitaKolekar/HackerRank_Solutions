HackerRank Home
HackerRank
|
Prepare
Certify
Compete
Apply
Search
 
All Contests  MountBlue Job Challenge  Sales by Match
Sales by Match
Problem
Submissions
Leaderboard
There is a large pile of socks that must be paired by color. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.

Example


There is one pair of color  and one of color . There are three odd socks left, one of each color. The number of pairs is .

Function Description

Complete the sockMerchant function in the editor below.

sockMerchant has the following parameter(s):

int n: the number of socks in the pile
int ar[n]: the colors of each sock
Returns

int: the number of pairs
Input Format

The first line contains an integer , the number of socks represented in .
The second line contains  space-separated integers, , the colors of the socks in the pile.

Constraints

 where 
Sample Input

STDIN                       Function
-----                       --------
9                           n = 9
10 20 20 10 10 30 50 10 20  ar = [10, 20, 20, 10, 10, 30, 50, 10, 20]
Sample Output

3
Explanation

sock.png

There are three pairs of socks.

Submissions: 71711
Max Score: 10
Rate This Challenge:

    
More
 
1
#include <bits/stdc++.h>
2
​
3
using namespace std;
4
​
5
string ltrim(const string &);
6
string rtrim(const string &);
7
vector<string> split(const string &);
8
​
9
/*
10
 * Complete the 'sockMerchant' function below.
11
 *
12
 * The function is expected to return an INTEGER.
13
 * The function accepts following parameters:
14
 *  1. INTEGER n
15
 *  2. INTEGER_ARRAY ar
16
 */
17
​
18
int sockMerchant(int n, vector<int> ar) {
19
​
20
}
21
​
22
int main()
23
{
24
    ofstream fout(getenv("OUTPUT_PATH"));
25
​
26
    string n_temp;
27
    getline(cin, n_temp);
28
​
29
    int n = stoi(ltrim(rtrim(n_temp)));
30
​
31
    string ar_temp_temp;
32
    getline(cin, ar_temp_temp);
33
​
34
    vector<string> ar_temp = split(rtrim(ar_temp_temp));
35
​
36
    vector<int> ar(n);
37
​
38
    for (int i = 0; i < n; i++) {
39
        int ar_item = stoi(ar_temp[i]);
40
​
41
        ar[i] = ar_item;
42
    }
43
​
44
    int result = sockMerchant(n, ar);
45
​
46
    fout << result << "\n";
47
​
48
    fout.close();
49
​
50
    return 0;
51
}
52
​
53
string ltrim(const string &str) {
54
    string s(str);
55
​
56
    s.erase(
57
        s.begin(),
58
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
59
    );
60
​
61
    return s;
62
}
63
​
64
string rtrim(const string &str) {
65
    string s(str);
66
​
67
    s.erase(
68
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
69
        s.end()
70
    );
71
​
72
    return s;
73
}
74
​
75
vector<string> split(const string &str) {
76
    vector<string> tokens;
77
​
78
    string::size_type start = 0;
79
    string::size_type end = 0;
80
​
81
    while ((end = str.find(" ", start)) != string::npos) {
82
        tokens.push_back(str.substr(start, end - start));
83
​
84
        start = end + 1;
85
    }
86
​
87
    tokens.push_back(str.substr(start));
88
​
89
    return tokens;
90
}
91
​
Line: 1 Col: 1
Run Code Submit CodeUpload Code as File 
Test against custom input
Interview Prep | Blog | Scoring | Environment | FAQ | About Us | Support | Careers | Terms Of Service | Privacy Policy |

There is a large pile of socks that must be paired by color. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.

Example


There is one pair of color  and one of color . There are three odd socks left, one of each color. The number of pairs is .

Function Description

Complete the sockMerchant function in the editor below.

sockMerchant has the following parameter(s):

int n: the number of socks in the pile
int ar[n]: the colors of each sock
Returns

int: the number of pairs
Input Format

The first line contains an integer , the number of socks represented in .
The second line contains  space-separated integers, , the colors of the socks in the pile.

Constraints

 where 
Sample Input

STDIN                       Function
-----                       --------
9                           n = 9
10 20 20 10 10 30 50 10 20  ar = [10, 20, 20, 10, 10, 30, 50, 10, 20]
Sample Output

3
Explanation

sock.png

There are three pairs of socks.