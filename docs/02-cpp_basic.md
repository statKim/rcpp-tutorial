# C++ 기초 문법 {#cpp_basic}

## 라이브러리 불러오기
`#include <라이브러리 이름>`을 통해 C++ 라이브러리를 불러올 수 있다. R에서 `library(패키지명)`을 사용하는 것과 비슷하다.
```
#include <RcppEigen.h>
#include <Rcpp.h>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
```


## 변수선언

### R에서 변수선언
```r
a <- 1       # 정수형
b <- 1.5     # 실수형
c <- TRUE    # 논리형
d <- "Rcpp"  # 문자형
```

### C++에서 변수선언
```cpp
int a = 1;        // 정수형
double b = 1.5;   // 실수형
bool c = true;    // 논리형
char d = "Rcpp";  // 문자형
```
C++에서는 항상 코드 줄의 마지막에 `;`(세미콜론)을 적어주어야 한다.

### 미리 선언 후 나중에 값 저장
```cpp
int a;
a = 100;
```

R에서는 변수의 자료형을 지정해주지 않더라도 자동으로 자료형을 변환해주는 반면, C/C++에서는 자료형을 확실히 정해주어야 한다.^[위의 4가지 뿐 아니라 실수의 자릿수 등을 더 디테일하게 정할 수 있는 자료형들이 존재하며 이는 많은 블로그들에서 확인할 수 있다.]



## if 문

### R에서의 if 문
```r
a <- 10
if (a < 5) {
  print("5보다 작다")
} else if (a < 8) {
  print("8보다 작다")
} else {
  print("8보다 크다")
}
```

### C++에서의 if 문
```cpp
int a = 10;
if (a < 5) {
  std::cout << "5보다 작다" << "\n";
} else if (a < 8) {
  std::cout << "8보다 작다" << "\n";
} else {
  std::cout << "8보다 크다" << "\n";
}
```
C++에서 print를 하기 위해서는 C++ 표준 템플릿 라이브러리(STL : Standard Template Library) 내의 `std::cout`을 이용해야 한다. (Rcpp 내의 `Rcpp::Rcout`을 이용해도 된다.)

여기서 `라이브러리::함수`는 라이브러리 내의 함수에 접근한다는 의미로 R에서도 동일하게 사용되는 방법이다.


## for 문

### R에서의 for 문
```r
for (i in 1:10) {
  print(i)
}
```

### C++에서의 for 문
```cpp
for (int i = 0; i < 10; i++) {
  std::cout << i << "\n";
}
```


## while 문
### R에서의 while 문
```r
n <- 0
while (n < 5) {
  print(n)
  n <- n + 1
}
```

### C++에서의 while 문
```cpp
int n = 0;
while (n < 5) {
  Rcpp::Rcout << n << "\n";
  n = n + 1;
}
```

