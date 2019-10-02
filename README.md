# Generate-Powerset
• The power set of S is the set of all possible subsets of S.

• The amount of elements in S is less than or equal to 10.

宣告 vector<string> S(10) 來存入input，再創一個容量為10的 vector<bool> X ，
將其初始化為 {0,0,0,0,0,0,0,0,0,0} ，X.at(n) 對照到 S.at(n)，
如果 X.at(n) 等於1則在這個 subset 中 S.at(n) 存在，若為零則不存在。
Ｘ一開始全為0，呼叫兩次 Combination() ，一次 X.at(0) 等於1，一次讓它等於0，
這兩次再各呼叫兩次 Combination() ，直到 X.at(n-1)（n = input 個數）時將結果對照Ｓ印出來，
最後可得2^n組 subset 生成。
  

--input--

wq s

a b c

cbg y e tq

--output--

{} {s} {wq } {wq s}


{} {c} {b } {b c} {a } {a c} {a b } {a b c}


{} {tq} {e } {e tq} {y } {y tq} {y e } {y e tq} {cbg } {cbg tq} {cbg e } {cbg e tq} {cbg y } {cbg y tq} {cbg y e } 
{cbg y e tq}
