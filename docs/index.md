--- 
title: "Rcpp과 RcppEigen 튜토리얼"
author: "김현성"
date: "2021-08-08"
site: bookdown::bookdown_site
documentclass: book
bibliography: [book.bib, packages.bib]
biblio-style: apalike
link-citations: yes
description: "C++로 R 연산속도 높이기"
---

# 들어가며 {.unnumbered}

R은 통계를 전공하는 사람들이 가장 많이 사용하는 계산 언어 중 하나이다.
R을 사용함에 있어 가장 답답한 부분 중 하나는 반복문(for문, while문)이 매우 매우 느리다는 것이다.
이러한 문제를 해결하는 방법 중 하나는 컴파일 언어인 C/C++ 또는 Fortran을 이용하는 것이지만, 이를 단기간에 배우는 것은 쉽지 않다.

R에는 컴파일 언어인 C/C++을 사용하기 편리하도록 만들어진 `Rcpp`이라는 패키지가 있다.
또한 C++에서 선형대수 라이브러리인 Eigen, Armadillo 또한 사용할 수 있도록 각각 `RcppEigen`, `RcppArmadillo`를 제공하고 있다.

여기서는 **Rcpp**과 선형대수 연산을 위한 **RcppEigen**을 사용하는 방법에 대해 정리해본다.
필자도 C++을 전문적으로 배운 경험은 없으며, R 프로그래밍을 하며 연산속도 향상을 위해 부분적으로 C++을 사용하는 방법 위주로 정리해보려 한다.




