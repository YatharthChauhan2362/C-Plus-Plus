// Abstract Base Class & Pure Virtual Functions in C++
// This program was created by Yatharth Chauhan

#include <iostream>
using namespace std;

class YC
{
protected:
    string title;
    float rating;

public:
    YC(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0;
};
class YCVideo : public YC
{
    float videoLength;

public:
    YCVideo(string s, float r, float vl) : YC(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videoLength << " minutes" << endl;
    }
};
class YCText : public YC
{
    int words;

public:
    YCText(string s, float r, int wc) : YC(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "No of words in this text tutorial is: " << words << " words" << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;

    // for Yatharth Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    YCVideo djVideo(title, rating, vlen);

    // for Yatharth Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    YCText djText(title, rating, words);

    YC *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}