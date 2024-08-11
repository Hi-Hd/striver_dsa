#include<iostream>
using namespace std;

void makeRectangle(int value){
    for(int i = 0; i < value; i++){
        cout<<("* * * *\n");
    }
    cout<<'\n';
}

void makeLowerTriangle(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout<<'\n';
    }
    cout<<'\n';
}

void makeNumberedLowerTriangle(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j<=i; j++){
            cout<<j<<' ';
        }
        cout<<'\n';
    }
    cout<<'\n';
}

void makeNumberedLowerTriangleRepeatingColoumn(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j<= i; j++){
            cout<<i<<' ';
        }
        cout<<'\n';
    }
    cout<<'\n';
}

void makeUpperTriangle(int n){
    for(int i = n; i > 0; i--){
        for(int j = i; j > 0; j--){
            cout<< "* ";
        }
        cout<<'\n';
    }
    cout<<'\n';
}

void makeNumberedUpperTriangle(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i + 1; j++){
            cout << j <<' ';
        }
        cout<<'\n';
    }
    cout<<'\n';
}

void makeTree(int n){
    for(int i = 0; i < n; i++){
        //first space
        for(int j = 0; j < n - 1 - i; j++){
            cout<<"  ";
        }
        //printing stars
        for(int j = 0; j < 2*i +1; j++){
            cout<<"* ";
        }
        //printing space
        for(int j = 0; j < n - 1 - i; j++){
            cout<<"  ";
        }
        cout<<'\n';
    }
    cout<<'\n';
}

void makeInvertedTree(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << "  ";
        }
        for(int j = 0; j < (2 * (n-i)) - 1; j++){
            cout<< "* ";
        }
        for(int j = 0; j < i; j++){
            cout << "  ";
        }
        cout<<'\n';
    }
    cout<<'\n';
}

void makeDiamond(int n){
    makeTree(n);
    makeInvertedTree(n);
}

void makeCombinedTriangle(int n){
    for(int i = 1; i <= 2*n - 1; i++){
        int stars = i;
        if(i > n) stars = 2*n - i;
        for(int j = 1; j <= stars; j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    cout<<"\n";
}

void makeBinaryLowerTriangle(int n){
    int start = 1;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0) start = 1;
        else start = 0;
        for(int j = 0; j <= i; j++){
            cout<<start<<" ";
            start = 1 - start;
        }
        cout<<"\n";
    }
    cout<<"\n";
}

void makeMirrorNumber(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<j<<" ";
        }
        for(int j = 1; j <= 2*(n - i); j++){
            cout<<"  ";
        }
        for(int j = i; j >= 1; j--){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
}

void makeCounterLowerTriangle(int n){
    int count = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<"\n";
    }
    cout<<"\n";
}

void makeAlphabeticalLowerTriangle(int n){
    for(int i = 65; i <= 65 + n - 1; i++){
        for(int j = 65; j <= i; j++){
            cout<<char(j)<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
}

void makeAlphabeticalRepeatingLowerTriangle(int n){
    char alphabet = 'A';
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout<<alphabet<<" ";
        }
        alphabet++;
        cout<<"\n";
    }
    cout<<"\n";
}

void makeAlphabetictree(int n){
    for(int i = 0; i < n; i++){
        //first space
        for(int j = 0; j < n - 1 - i; j++){
            cout<<"  ";
        }
        //printing characters
        char ch = 'A';
        int breakpoint = (2*i + 1) / 2;
        for(int j = 1; j<= 2*i + 1; j++){
            cout << ch << " ";
            if(j <= breakpoint) ch++;
            else ch--;
        }
        
        //printing space
        for(int j = 0; j < n - 1 - i; j++){
            cout<<"  ";
        }
        cout<<'\n';
    }
    cout<<'\n';
}

void makeInverseAlphabeticLowerTriangle(int n){
    for(int i = 1; i <= n; i++){
        for(char ch = ('A' + n - i); ch <= 'A' + n - 1; ch++){
            cout<<ch<<' ';
        }
        cout<<'\n';
    }
    cout<<'\n';
}

void makeVoidDiamond(int n){
    int iniS = 0;
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n-i;j++){
            cout<<"*";
        }
        for(int j = 0; j < iniS; j++){
            cout<<" ";
        }
        for(int j = 1; j <= n-i;j++){
            cout<<"*";
        }
        iniS += 2;
        cout<<"\n";
    }
    iniS = 8;
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= i + 1;j++){
            cout<<"*";
        }
        for(int j = 0; j < iniS; j++){
            cout<<" ";
        }
        for(int j = 1; j <= i + 1;j++){
            cout<<"*";
        }
        iniS -= 2;
        cout<<"\n";
    }
    cout<<"\n";
}

void makeButterfly(int n){
    for(int i = 0; i < n; i++){
        //stars 1
        for(int j = 0; j <= i; j++){
            cout<<"*";
        }

        //gaps
        for(int j = 0; j < 2*(n-i-1); j++){
            cout<<" ";
        }

        //star 2
        for(int j = 0; j <= i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i = n - 1; i > 0; i--){
        //stars 1
        for(int j = 0; j < i; j++){
            cout<<"*";
        }

        //gaps
        for(int j = 0; j < 2*(n-i); j++){
            cout<<" ";
        }

        //star 2
        for(int j = 0; j < i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"\n";
}

int main(){
    int n;
    cin >> n;
    makeRectangle(n);    
    makeLowerTriangle(n);
    makeNumberedLowerTriangle(n);
    makeNumberedLowerTriangleRepeatingColoumn(n);
    makeUpperTriangle(n);
    makeNumberedUpperTriangle(n);
    makeTree(n);
    makeInvertedTree(n);
    makeDiamond(n);
    makeCombinedTriangle(n);
    makeBinaryLowerTriangle(n);
    makeMirrorNumber(n);
    makeCounterLowerTriangle(n);
    makeAlphabeticalLowerTriangle(n);
    makeAlphabeticalRepeatingLowerTriangle(n);
    makeAlphabetictree(n);
    makeInverseAlphabeticLowerTriangle(n);
    makeVoidDiamond(n);
    makeButterfly(n);

    return 0;
}