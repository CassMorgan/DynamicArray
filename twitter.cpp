#include "twitter.h"

template<class T>
Twitter<T>::Twitter()
{
    top = -1;
}

template<class T>
Twitter<T>::~Twitter(){}

template<class T>
void Twitter<T>::addFollower(T user)
{
    ++top;
    followers[top] = user;
}

template<class T>
void Twitter<T>::removeFollower(string userName)
{
    for(int i = 0; i < top + 1; ++i)
    {
        if(userName == followers[i])
        {
            for(int j = i; j < top + 1; ++j)
            {

                followers[j] = followers[j + 1];
            }
        }
    }
	cout<<endl << userName << " was removed from as a follower" <<endl;
	printFollowers();
}

template<class T>
void Twitter<T>::printFollowers()
{
    cout<< "Your current followers are: " <<endl;
    for(int i = 0; i <= top; ++i)
    {
        cout<< followers[i] <<endl;
    }
}
