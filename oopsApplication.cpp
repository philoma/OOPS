#include <bits/stdc++.h>
using namespace std;
class boy
{
    int h, w;

public:
    boy(int H, int W)
    {
        h = H;
        w = W;
    }
    void getH()
    {
        cout << h << endl;
    }

    void getW()
    {
        cout << w << endl;
    }

    void setH(int H)
    {
        h = H;
    }

    void setW(int W)
    {
        w = W;
    }
    bool check(int pswrd)
    {
        if (pswrd == 12345)
            return 1;

        return 0;
    }
    void print()
    {
        cout << "enter password" << endl;
        int password;
        cin>>password;
        bool pass = check(password);
        if (pass)
            cout << "height is: " << h << " wight is: " << w << endl;
    }
};
int main()
{
    int h, w;
    cout << "enter h and w" << endl;
    cin >> h >> w;
    boy raju(h, w); // constructor ko private me nhi public me define krte he
    cout << "height is: ";
    raju.getH();
    cout << "weight is: ";
    raju.getW();

    cout << "enter new h";
    int h1;
    cin >> h1;
    raju.setH(h1);
    raju.getH();
    cout << "enter the w";
    int w2;
    cin >> w2;
    raju.setW(w2);
    raju.getW();

    // privacy, real time application
    raju.print();

    return 0;
}
