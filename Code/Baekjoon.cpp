#include <iostream>

using namespace std;

int main(int argc, const char* argv[]) {

    int a[100][100] = { 0 };

    int n, x, y, cnt = 0;
    cin >> n;

    while (n--)
    {
        cin >> x >> y;
        for (int i = y; i < y + 10; i++) {
            for (int j = x; j < x + 10; j++) {
                if (a[i][j])
                    continue;
                a[i][j] = 1;
                cnt++;
            }
        }
    }

    cout << cnt;

	return 0;
}


// 문제별 순서대로
#pragma region arithmetic / condition 
/*int a, b;
   cin >> a;
   cin >> b;
   printf("%.9f\n", (double)a / b);
   ---------------------------------
   int a, b;
    cin >> a;
    cin >> b;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;
    -------------------------------
    string id;
    cin >> id;

    id += "??!";
    cout << id;
    --------------------------------
    int a;
    int b;
    int c;

    cin >> a;
    cin >> b;
    cin >> c;

    cout << (a + b) % c << endl;
    cout << ((a % c) + (b % c)) % c << endl;
    cout << (a * b) % c << endl;
    cout << ((a % c) * (b % c)) % c << endl;
    --------------------------------
    cout << a * (b % 10) << endl;
    cout << a * (b % 100 / 10) << endl;
    cout << a * (b / 100) << endl;
    cout << a * b << endl;
    --------------------------------
    long a,b,c;

    cin >> a >> b >> c;

    cout << a + b + c << endl;
    --------------------------------
    cout << "\\    /\\" << endl;
    cout << " )  ( ')" << endl;
    cout << "(  /  )" << endl;
    cout << " \\(__)|" << endl;
    --------------------------------
    cout << "|\\_/|" << endl;
    cout << "|q p|   /}" << endl;
    cout << "( 0 )\"\"\"\\" << endl;
    cout << "|\"^\"`    |" << endl;
    cout << "||_/=\\\\__|" << endl;
    --------------------------------
    int a;

    cin >> a ;

    if (a <= 100 && a >= 90)
        cout << "A";
    else if (a < 90 && a >= 80)
        cout << "B";
    else if (a < 80 && a >= 70)
        cout << "C";
    else if (a < 70 && a >= 60)
        cout << "D";
    else
        cout << "F";
    --------------------------------
    if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0))
        cout << 1 << endl;
    else
        cout << 0 << endl;
    --------------------------------
    if (a > 0 && b > 0)
        cout << 1;
    else if (a < 0 && b > 0)
        cout << 2;
    else if (a < 0 && b < 0)
        cout << 3;
    else if (a > 0 && b < 0)
        cout << 4;
    --------------------------------
    int totalMin = 60 * a + b;
    totalMin += c;

    int h = (totalMin / 60) % 24;
    int m = totalMin % 60;

    cout << h << " " << m << endl;
    --------------------------------
    if (a != b && b != c && a != c) {
        int max;
        if (a > b) {
            if (c > a)
                max = c;
            else
                max = a;
        }
        else {
            if (c > b)
                max = c;
            else
                max = b;
        }
        cout << max * 100;
    }
    else {
        if (a == b && a == c)
            cout << 10000 + a * 1000;
        else {
            if (a == b || a == c)
                cout << 1000 + a * 100;
            else
                cout << 1000 + b * 100;
        }
    }*/
#pragma endregion

#pragma region Repeat
/*--------------------------------
for (int i = 1; i < 10; i++) {
	cout << ("%d", n) << " * " << ("%d", i) << " = " << (n * i) << endl;
}
--------------------------------
int n, a, b;
cin >> n;

for (int i = 0; i < n; i++) {
    cin >> a >> b;
	cout << a + b << "\n";
}
--------------------------------
int n;
int sum = 0;
cin >> n;

for (int i = 1; i < n + 1; i++) {
	sum += i;
}
cout << sum << endl;
--------------------------------
int n, a, b;
    int sum;
    int ssum = 0;
    cin >> sum;
    cin >> n;

    for (int i = 1; i < n + 1; i++) {
        cin >> a >> b;
        ssum += a * b;
    }
    if (sum == ssum)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
--------------------------------
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n, a, b;
cin >> n;

for (int i = 1; i < n + 1; i++) {
    cin >> a >> b;
    cout << "Case #" << i << ": " << a + b << "\n";
}
--------------------------------
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b;
    cin >> n;

    for (int i = 1; i < n + 1; i++) {
        cin >> a >> b;
        cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << "\n";
    }
--------------------------------
int n;
cin >> n;

for (int i = 1; i < n + 1; i++) {
    for (int j = 0; j < n - i; j++)
        cout << " ";
    for (int j = 0; j < i; j++)
        cout << "*";
    cout << "\n";
}
--------------------------------
int a, b;

while (true) {
    cin >> a >> b;
    cout << a + b << "\n";
}
--------------------------------
int a, b;

while (!(cin >> a >> b).fail()) {
    cout << a + b << "\n";
}
*/
#pragma endregion

#pragma region array
/*
int n, x;
int arr[101];

cin >> n;

for (int i = 0; i < n; i++)
    cin >> arr[i];
cin >> x;

int count = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] == x)
        count++;
}
cout << count;
--------------------------------
int n, x;

cin >> n >> x;

int arr[10000];

for (int i = 0; i < n; i++)
    cin >> arr[i];

for (int i = 0; i < n; i++)
{
    if (arr[i] < x)
        cout << arr[i] << " ";
}
--------------------------------
ios_base::sync_with_stdio(0);

int n;
cin >> n;

int arr[1000001];

for (int i = 0; i < n; i++)
    cin >> arr[i];

int min = 0;
int max = 0;

for (int i = 0; i < n; i++)
{
    if (arr[i] < arr[i + 1])
        max = arr[i + 1];

    else if (arr[i] > arr[i + 1])
        min = arr[i];
}
cout << min << " " << max;

return 0;
--------------------------------
ios_base::sync_with_stdio(0);

int n;
cin >> n;

int min = 1000001;
int max = -1000001;

int input;

for (int i = 0; i < n; i++) {
    cin >> input;

    if (input < min)
        min = input;
    if (input > max)
        max = input;
}

cout << min << " " << max;

return 0;
--------------------------------
ios_base::sync_with_stdio(0);

int max = -1;
int index = 0;
int arr[9];

for (int i = 0; i < 9; i++)
    cin >> arr[i];

for (int i = 0; i < 9; i++)
{
    if (arr[i] > max) {
        max = arr[i];
        index = i;
    }
}
cout << max << "\n" << index + 1;

return 0;
--------------------------------
ios_base::sync_with_stdio(0);

int n, m;
int arr[101] = { 0, };
int a, b, c;

cin >> n >> m;

for (int i = 0; i < m; i++) {
    cin >> a >> b >> c;
    for (int k = a; k <= b; k++)
        arr[k] = c;
}
for (int i = 1; i <= n; i++)
    cout << arr[i] << ' ';

return 0;
--------------------------------
ios_base::sync_with_stdio(0);

int arr[100];

int a, b, c, d, temp;
cin >> a >> b;

for (int i = 0; i < a; i++)
    arr[i] = i + 1;
for (int i = 0; i < b; i++)
{
    cin >> c >> d;
    temp = arr[c - 1];
    arr[c - 1] = arr[d - 1];
    arr[d - 1] = temp;
}
for (int i = 0; i < a; i++)
    cout << arr[i] << " ";

return 0;
--------------------------------
ios_base::sync_with_stdio(0);

int arr[31] = { 0, };
int a;

for (int i = 0; i < 28; i++)
{
    cin >> a;
    arr[a] = 1;
}

for (int i = 1; i < 30 + 1; i++)
{
    if (!arr[i])
    {
        cout << i << "\n";
    }
}
--------------------------------
int count[42] = {};

int v;

for (int i = 0; i < 10; i++)
{
    cin >> v;
    count[v % 42]++;
}

int result = 0;

for (int v : count) {
    if (v > 0)
        result++;
}
cout << result;
--------------------------------
int n;

cin >> n;
int arr[1000] = { };
int max = -1;
double result = 0;

for (int i = 0; i < n; i++)
{
    cin >> arr[i];
    if (arr[i] > max)
        max = arr[i];
    result += arr[i];
}
result = (result / max * 100) / n;
cout << result << "\n";
--------------------------------
*/
#pragma endregion

#pragma region String
/*
string s;
int i;

cin >> s >> i;

cout << s[i - 1];
--------------------------------
string s;

cin >> s;

cout << s.length();
--------------------------------
string s;
int num;

cin >> num;

for (int i = 0; i < num; i++)
{
cin >> s;
int index = s.length();
cout << s[0] << s[index - 1] << "\n";
}
--------------------------------
char s;

cin >> s;
cout << int(s);
--------------------------------
int count;
char ch;

cin >> count;

int sum = 0;

for (int i = 0; i < count; i++)
{
    cin >> ch;
    sum += ch - 48;
}
cout << sum;
--------------------------------
int arr[26] = { 0, };

string s;

cin >> s;

for (char i = 'a'; i < 'z'+1; i++)
{
    cout << (int)s.find(i) << " ";
}
--------------------------------
int t;
cin >> t;
for (int i = 0; i < t; i++)
{
    int r;
    string p;
    cin >> r;
    cin >> p;

    for (int j = 0; j < p.length(); j++)
    {
        for (int k = 0; k < r; k++)
        {
            cout << p[j];
        }
    }
    cout << "\n";
}
--------------------------------
string s;
int count = 1;

getline(cin, s);

if (s.length() == 1 && s[0] == ' ') {
    cout << 0;
    return 0;
}

for (int i = 1; i < s.length() - 1; i++)
{
    if (s[i] == ' ')
        count++;
}

cout << count;
--------------------------------
string a, b;
cin >> a >> b;

string bigger;

for (int i = 2; i >= 0; i--) {
    if (a[i] > b[i]) {
        bigger = a;
        break;
    }
    else if (a[i] < b[i]) {
        bigger = b;
        break;
    }
}

cout << bigger[2] << bigger[1] << bigger[0];
--------------------------------
int timer = 0;
string s;

cin >> s;

for (int i = 0; i < s.size(); i++) {
    timer += ((int)s[i] - 65) / 3 + 3;

    if (s[i] == 'S' || s[i] == 'V' || s[i] == 'Y' || s[i] == 'Z')
        timer--;
}

cout << timer;
--------------------------------

*/
#pragma endregion

#pragma region Hard
/*
cout << "         ,r'\"7" << "\n";
cout << "r`-_   ,'  ,/" << "\n";
cout << " \\. \". L_r\'" << "\n";
cout << "   `~\\/" << "\n";
cout << "      |" << "\n";
cout << "      |" << "\n";
--------------------------------
int king = 1;
int queen = 1;
int rook = 2;
int bishop = 2;
int knight = 2;
int pawn = 8;

int _king, _queen, _rook, _bishop, _knight, _pawn;

cin >> _king;
cin >> _queen;
cin >> _rook;
cin >> _bishop;
cin >> _knight;
cin >> _pawn;

cout << king - _king << " ";
cout << queen - _queen << " ";
cout << rook - _rook << " ";
cout << bishop - _bishop << " ";
cout << knight - _knight << " ";
cout << pawn - _pawn;
--------------------------------
int num;

cin >> num;

for (int i = 1; i <= num ; i++)
{
for (int j = 0; j < num - i; j++)
    cout << " ";
for (int k = 0; k < 2 * i - 1; k++)
    cout << "*";
cout << "\n";
}

for (int i = 1; i < num; i++)
{
for (int j = 0; j < i; j++)
    cout << " ";
for (int k = 0; k < 2 * num - (2 * i + 1); k++)
    cout << "*";
cout << "\n";
}
--------------------------------
string name;
cin >> name;

int len = name.length();

int cnt = 0;

for (int i = 0; i < len / 2; i++) {
    if (name[i] != name[name.length() - 1 - i]) {
        cout << '0' << "\n";
        return 0;
    }
}
cout << "1";
--------------------------------
int cnt[26] = { 0, };
int max = -1;
char res;

string s;

cin >> s;

for (int i = 0; i < s.length(); i++)
{
    if (s[i] >= 'a' && s[i] <= 'z')
        s[i] = s[i] - 'a' + 'A';

    if (++cnt[s[i] - 'A'] > max)
    {
        max = cnt[s[i] - 'A'];
        res = s[i];
    }
}

int check = 0;

for (int i = 0; i < 26; i++)
    if (max == cnt[i])
        check++;

if (check == 1) cout << res;
else cout << "?";
--------------------------------

--------------------------------
int num;
string word;
int count = 0;

cin >> num;
for (int i = 0; i < num; i++)
{
    cin >> word;

    bool alphabet[26] = { false, };
    alphabet[(int)(word[0]) - 97] = true;

    for (int i = 1; i < word.size(); i++)
    {
        if (word[i] == word[i - 1])
        {
            continue;
        }

        else if (word[i] != word[i - 1] && alphabet[(int)(word[i]) - 97] == true)
        {
            count++;
            break;
        }

        else
            alphabet[(int)(word[i]) - 97] = true;
    }
}
cout << num - count;
--------------------------------
string name;
double avg = 0;
float sumGrade = 0;
double score[20];
float grade[20];
string input;

for (int i = 0; i < 20; i++)
{
    cin >> name >> grade[i] >> input;
    if (input == "A+")
        score[i] = 4.5;
    else if (input == "A0")
        score[i] = 4.0;
    else if (input == "B+")
        score[i] = 3.5;
    else if (input == "B0")
        score[i] = 3.0;
    else if (input == "C+")
        score[i] = 2.5;
    else if (input == "C0")
        score[i] = 2.0;
    else if (input == "D+")
        score[i] = 1.5;
    else if (input == "D0")
        score[i] = 1.0;
    else if (input == "F")
        score[i] = 0.0;
    else if (input == "P") {
        score[i] = 0.0;
        grade[i] = 0;
    }

    avg += (score[i] * grade[i]);
    sumGrade += grade[i];
}

avg = avg / sumGrade;
cout << avg;
--------------------------------
*/
#pragma endregion

#pragma region Matrix
/*
int row, column;
int a[101][101], b[101][101];

cin >> row >> column;
for (int i = 1; i <= row; i++)
{
    for (int j = 1; j <= column; j++)
        cin >> a[i][j];
}

for (int i = 1; i <= row; i++)
{
    for (int j = 1; j <= column; j++)
        cin >> b[i][j];
}

for (int i = 1; i <= row; i++)
{
    for (int j = 1; j <= column; j++)
        cout << a[i][j] + b[i][j] << ' ';
    cout << "\n";
}
--------------------------------
int a, x, y;
int max = -1;

for (int i = 1; i <= 9; i++)
{
    for (int k = 1; k <= 9; k++)
    {
        cin >> a;

        if (max <= a) {
            max = a;
            x = i;
            y = k;
        }
    }
}

cout << max << "\n";
cout << x << ' ' << y;
--------------------------------
string word[5];

for (int i = 0; i < 5; i++)
    cin >> word[i];

for (int i = 0; i < 15; i++)
{
    for (int j = 0; j < 5; j++)
    {
        if (i < word[j].size())
        {
            cout << word[j][i];
        }
    }
}
cout << endl;
--------------------------------
int a[100][100] = { 0 };

int n, x, y, cnt = 0;
cin >> n;

while (n--)
{
    cin >> x >> y;
    for (int i = y; i < y + 10; i++) {
        for (int j = x; j < x + 10; j++) {
            if (a[i][j])
                continue;
            a[i][j] = 1;
            cnt++;
        }
    }
}

cout << cnt;
--------------------------------
*/
#pragma endregion

