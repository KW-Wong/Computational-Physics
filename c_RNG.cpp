#include <iostream>
#include <cmath>
using namespace std;

int recursive_rand(int c, int rnd, int p, int count)
{
    if (count > 0)
    {   rnd = (c*rnd)%p;
        cout << " " << rnd;
        count--;
        return recursive_rand(c, rnd, p, count);
    }
    else{
        cout<< " ";
        return 0;
    }
}

int main(int argc, char **argv){
    int c = 3;
    int p = 31;
    int rnd = 2;
    cout<<"C-RNG: ";
    recursive_rand(c,rnd,p, 100);
    cout<< "\n";

    int i = 1;
    cout<<"rand(): ";
    while (i<=10){
    cout  << " "<< rand()%p+rnd;
    i++;
    }
    cout<< "\n";

    i = 1;
    cout<<"drand48(): ";
    while (i<=10){
    cout  << " "<< int( drand48()*p+rnd);
    i++;
    }
    cout<< "\n";

    return 0;
}
