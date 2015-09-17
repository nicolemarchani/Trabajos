#include <iostream>
using namespace std;

int main(){

    int arr[4];
    cout << "Please enter 4 integers:" << endl;

    for(int i = 0; i < 4; i++)
        cin >> arr[i];
    cout << "Values in array are now:";
    for(int i = 0; i < 4; i++)
        cout << " " << arr[i];
    cout << endl;
    return 0;
}

#include <iostream>
using namespace std;

int sum(const int array[], const int length) {
    long sum = 0;
    for(int i = 0; i < length; sum += array[i++]);
    return sum;
 }

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    cout << "Sum: " << sum(arr, 7) << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int twoDimArray[2][4];
    twoDimArray[0][0] = 6;
    twoDimArray[0][1] = 0;
    twoDimArray[0][2] = 9;
    twoDimArray[0][3] = 6;
    twoDimArray[1][0] = 2;
    twoDimArray[1][1] = 0;
    twoDimArray[1][2] = 1;
    twoDimArray[1][3] = 1;

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 4; j++)
            cout << twoDimArray[i][j];
    cout << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {

    char helloworld[] = { 'H', 'e', 'l', 'l', 'o', ',', ' ',
                        'w', 'o', 'r', 'l', 'd', '!', '\0' };

    cout << helloworld << endl;
    return 0;
 }

#include <iostream>
#include <cctype>

using namespace std;

int main() {

    char messyString[] = "t6H0I9s6.iS.999a9.STRING";
    char current = messyString[0];
    for(int i = 0; current != '\0'; current = messyString[++i]) {
            if(isalpha(current))
                cout << (char)(isupper(current) ? tolower(current) : current);
            else if(ispunct(current))
                cout << ' ';
    }
    cout << endl;
    return 0;

}

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char fragment1[] = "I'm a s";
    char fragment2[] = "tring!";
    char fragment3[20];
    char finalString[20] = "";

    strcpy(fragment3, fragment1);
    strcat(finalString, fragment3);
    strcat(finalString, fragment2);

    cout << finalString;
    return 0;
}



