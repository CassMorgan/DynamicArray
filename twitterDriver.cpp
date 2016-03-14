#include <iostream>
#include "twitter.h"
#include "twitter.cpp"
#include <string>

using namespace std;

int main()
{
    Twitter<string> account1;
    Twitter<Profile> account2;

    Profile follower1, follower2, follower3, follower4, follower5, follower6;

    follower1.age = 22;
    follower1.state = "Michigan";
    follower1.username = "MI22";

    follower2.age = 32;
    follower2.state = "California";
    follower2.username = "CA32";

    follower3.age = 42;
    follower3.state = "New York";
    follower3.username = "NY42";

    follower4.age = 52;
    follower4.state = "Florida";
    follower4.username = "FL52";

    follower5.age = 62;
    follower5.state = "Illinois";
    follower5.username = "IL62";

    follower6.age = 72;
    follower6.state = "Arizona";
    follower6.username = "AZ72";

    account1.addFollower(follower1.username);
    account1.addFollower(follower2.username);
    account1.addFollower(follower3.username);
    account1.addFollower(follower4.username);
    account1.addFollower(follower5.username);
    account1.addFollower(follower6.username);

    cout<< "Twitter<string> followers are: " <<endl;
    account1.printFollowers();

    cout<< "Twitter<Profile> followers are: " <<endl;
    account2.addFollower(follower4);
    account2.addFollower(follower5);
    account2.addFollower(follower6);
    account2.printFollowers();
    account1.printFollowers();

    account2.removeFollower("IL62");
    account1.removeFollower("NY42");


    return 0;
}
