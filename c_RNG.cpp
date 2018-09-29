#include <iostream>
#include <cmath>
using namespace std;

int recursive_prime(int c, int rnd, int p, int count)
{
    if (count > 0)
    {   rnd = (c*rnd)%p;
        cout << " " << rnd;
        count--;
        return recursive_prime(c, rnd, p, count);
    }
    else{
        cout<< " ";
        return 0;
    }
}

int main(int argc, char **argv){
    int c = 3;
    int p = 55;
    int rnd = 2;
    cout<<"C-RNG: ";
    recursive_prime(c,rnd,p, 10);
    cout<< "\n";

    int i = 1;
    cout<<"rand(): ";
    while (i<10){
    cout  << " "<< rand()%p+rnd;
    i++;
    }
    cout<< "\n";

    i = 1;
    cout<<"drand48(): ";
    while (i<10){
    cout  << " "<< int( drand48()*p+rnd);
    i++;
    }
    cout<< "\n";

    return 0;
}
