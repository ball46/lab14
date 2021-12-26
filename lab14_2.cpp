#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void updateImage(bool a[][M],int b,int c,int d){
    for(;;){
        double h = pow((),2);
        double i = pow((),2);
        double j = sqrt((h+i));
        if(j <= (b-1)) a[c][d] = 1 ;
        else a[c][d] = 0 ;
    }
}

void showImage(const bool e[][M]){
    cout << "------------------------------------------------------------------------\n";
    for(int f = 0; f < N; f++){
        cout << '|';
        for(int g = 0; g < M; g++){
            if(e[f][g] == 0) cout << " ";
            if(e[f][g] == 1) cout << "*";
        }
        cout << '|' << endl;
    }
    cout << "------------------------------------------------------------------------\n";
}

