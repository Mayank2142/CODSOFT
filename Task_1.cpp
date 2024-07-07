#include <iostream>
using namespace std; 
int main()
{
    int ran_num=rand()%100+1;
    int gs;
    for (gs=0;gs!=ran_num;++gs)
    {
        cin >> gs;
        if (gs>ran_num)
        {
            cout << "Your guess is too high."<< endl;
        }
        else if (gs<ran_num)
        {
            cout << "Your guess is too low."<< endl;
        }
        else
        {
            cout << "You are correct."<<endl;
            break;
        }
    }
    return 0;
}
