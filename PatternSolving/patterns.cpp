/* 
Pattern-1
*****
*****
*****
***** 
***** 
*/

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

// int i = 1;
 
//  while (i<=n){
//     int j = 1 ;
//     while(j<=n){
//         cout << "*";
//         j = j+1;
//     }
//     cout<<endl;
//     i=i+1;
//  }
// }

/* 
Pattern-2 
11111
22222
33333
44444
55555
*/

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int i=1;
//     while(i <= n) {

//         int j=1;
//         while(j<=n){
//             cout << i;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }


/* 
Pattern-3
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4

*/

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int i =1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout << j;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }


/* 
Pattern-4

4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1

*/

// #include <iostream>
// using namespace std;

// int main() {
//     int n ;
//     cin >> n;

//     int i=1;
//     while(i<=n){
//         int j =1;
//         while(j<=n){
//             cout << n - j + 1;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }


/* 
Pattern-5

1 2 3
4 5 6
7 8 9

*/

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

// int i=1;
// int count = 1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout << count << "   ";
//         count = count + 1;
//         j++;
//     }
//     cout << endl;
//     i++;
// }

// }

/* 
Pattern-6

1 2 3
3 4 5 
4 5 6 

*/

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout << i + j - 1;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

/* 
Pattern-7

*
**
***
****
*****

*/

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int i = 1;

//     while(i<=n){
//         int j =1;
//         while(j<=i){
//             cout << " * ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }


/* 
Pattern-8

1 
2 2
3 3 3
4 4 4 4

*/

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int i=1;
 
//     while(i<=n){
//         int j=1;

//         while(j<=i){
//             cout << i << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     }


/* 
Pattern-9

1 
2 3
4 5 6
7 8 9 10

*/

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int i=1;
//     int count = 1;

//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout << count << " ";
//             count = count + 1;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

/* 
Pattern-10

1 
2 3
3 4 5
4 5 6 7
5 6 7 8 9

*/

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int i=1;
 
//     while(i<=n){
//        int j = 1;
//        while(j<=i){
//         cout << i + j - 1 << " ";
//         j++; 
//        }
//        cout << endl;
//        i++;
//     }
// }

// -----> OR || OR <------

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int i=1;
 
//     while(i<=n){
//        int j = 1;
//        int row = i;
//        while(j<=i){
//         cout << row << " ";
//         row = row + 1;
//         j++; 
//        }
//        cout << endl;
//        i++;
//     }
// }

/* 
Pattern-11

1 
2 1
3 2 1
4 3 2 1
5 4 3 2  1

*/

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout << i - j + 1 << " ";
//             j++;
//         }
//         cout << endl;
//         i++;

//     }
// }

/* 
Pattern-12

A A A A A 
B B B B B 
C C C C C 
D D D D D 
E E E E E 

*/

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int i=1;

//     while(i<=n){
//         int j=1;
        
//     while(j<=n){
//         char ch = 'A' + i - 1;
//         cout << ch << " ";
//         j++;
//     }
//     cout << endl;
//     i++;
//     }
   
// }


/* 
Pattern-13

A B C D E
A B C D E
A B C D E
A B C D E
A B C D E

*/

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             char ch = 'A' + j - 1;
//             cout << ch << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }


/* 
Pattern-14

A B C D 
E F G H
I J K L
M N O P

*/

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int i = 0; 
//     char start = 'A';
//     while (i<=n)
//     {
//         int j=1;
//         while(j<=n){
//             cout << start << " ";
//             start = start + 1;
//             j++;
//         }
//         cout << endl;
//         i++;
//     } 
// }

/* 
Pattern-15

A B C D 
B C D E
C D E F
D E F G
E F G H

*/

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i<=n){
//         int j=1;
       
//         while(j<=n){
//              char ch = 'A' + i + j - 2;
//             cout << ch << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

/* 
Pattern-16

A  
B B
C C C 
D D D D

*/

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int i=1;
//     while(i <= n) {
//         int j=1;
//         while(j<=i){
//             char ch = 'A' + i - 1;
//             cout << ch << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

/* 
Pattern-17

A  
B C
D E F 
G H I J

*/

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     char start = 'A';
//     while(i <= n){ 
//         int j=1;
//         while(j<=i){
//             cout << start << " ";
//             start = start + 1;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }


/* 
Pattern-18

A  
B C
C D E 
D E F G 

*/

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             char ch = 'A' + i + j - 2;
//             cout << ch << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }


/* 
Pattern-19

D  
C D
B C D 
A B C D  

*/

// #include <iostream>
// using namespace std;

// int main(){

//     int n;
//     cin >> n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         char ch = 'A' + n - i;
//         while(j<=i){
//             cout << ch << " ";
//             j++;
//             ch++;
//         }
//         cout << endl;
//         i++;
//     }
// }

/* 
Pattern-20

      *
     **
    ***
   **** 
  *****

*/

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int i=1;

//     while(i<=n){
//         int space = n - i;
//         while(space){
//             cout << " ";
//             space = space - 1;
//         }

//         int j=1;
//         while(j<=i){
//             cout << "*";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

/* 
Pattern-21 (NOT DONE)

  *****
  ****
  ***
  ** 
  *

*/

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             char ch = '*' ;
//             cout << ch << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }


/*
Pattern-21

  *****
  ****
  ***
  ** 
  *

*/

/*
Pattern-22

  1 1 1 1 1
    2 2 2 2
      3 3 3
        4 4
          5

*/

/*
Pattern-22

  1 2 3 4 5
    2 3 4 5
      3 4 5
        4 5
          5

*/

/*
Pattern-23

          1
        2 2
      3 3 3
    4 4 4 4
  5 5 5 5 5
    
*/

/*
Pattern-24

          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
  1 2 3 4 5 4 3 2 1
    
*/

// #include <iostream>
// using namespace std;

// int main(){
//   int n;
//   cin >> n;

//   int i=1;
//   while(i<=n){
//     // Print all the spaces
//     int space = n-i;
//     while(space){
//       cout << " ";
//       space = space -1;
//     }

//     // Print the 1st triangle pyramid
//     int j=1;
//     while(j<=i){
//       cout << j;
//       j++; 
//     }

//     // Print the 2nd triangle pyramid
//      int start = i-1;
//     while(start){
//       cout << start;
//       start =  start - 1;
//     }
//     cout << endl;
//     i++;
   
//   }
// }


/*
Pattern-24 ( NOT DONE )

  1 2 3 4 5 5 4 3 2 1
  1 2 3 4 * * 4 3 2 1
  1 2 3 * * * * 3 2 1
  1 2 * * * * * * 2 1
  1 * * * * * * * * 1    
    
*/

#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n; 

  int i=1;
  while(i<=n){
    // Print 1st triangle
    int j=1;
    while (j<=n){
     cout << j << " ";
      j++;
    }

    // Print 2nd triangle (star)
    int start = n-i+1;
    while(start){
      cout << "*";
      start = start - 1;
    }

    // Print 3rd triangle
    cout << endl;
    i++;
  }
}

/**
  	https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white
  https://img.shields.io/badge/JavaScript-323330?style=for-the-badge&logo=javascript&logoColor=F7DF1E
  	https://img.shields.io/badge/next.js-000000?style=for-the-badge&logo=nextdotjs&logoColor=white
  https://img.shields.io/badge/Node.js-339933?style=for-the-badge&logo=nodedotjs&logoColor=white
  https://img.shields.io/badge/React-20232A?style=for-the-badge&logo=react&logoColor=61DAFB
  	https://img.shields.io/badge/Redux-593D88?style=for-the-badge&logo=redux&logoColor=white
  	https://img.shields.io/badge/MongoDB-4EA94B?style=for-the-badge&logo=mongodb&logoColor=white
  https://img.shields.io/badge/MySQL-005C84?style=for-the-badge&logo=mysql&logoColor=white
 * 
 * 
 * 
 * 
*/