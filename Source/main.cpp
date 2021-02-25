#include <iostream>

std :: string line(int v = 50, char c = '-');

int main(){
    int c{0};
    std :: cout << line(38) << "\n";
    std :: cout << "Welcome to the best bank in the world!\nAre you an adm or a client?\n";
    std :: cout << "Choose 0 for adm or choose 1 for user: ";
    std :: cin >> c;
    system("pause");
    return 0;
}

std :: string line(int v, char c){
    std :: string r;
    for(int x{0}; x < v; x++){
        r += c;
    }
    return r;
}