#ifndef TWITTER_H
#define TWITTER_H
#include <iostream>
using namespace std;

struct Profile
{
    string username;
    int age;
    string state;

    friend ostream& operator << (ostream& out, Profile& user)
    {
        out << user.username;
        return out;
    }

    friend bool operator == (string lhs, Profile rhs )
    {
        if(lhs == rhs.username){ return true; }
        else { return false; }
    }
};

template<class T>
class Twitter
{
public:
    Twitter();
    virtual ~Twitter();
    void addFollower(T user);
    void removeFollower(string userToRemove);
    void printFollowers();

private:
    T followers[10];
    int top;
};

#endif // TWITTER_H
