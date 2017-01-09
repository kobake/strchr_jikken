# strchr_jikken

独自 my_strchr を最適化無しでコンパイルするのはライブラリ関数 strchr と比較する上ではフェアではないので my_strchr は「-O3」を付けてビルドするようにしてあります。
計測用の main.cpp については最適化が走ると計測にならないので「-O0」としています。

## ビルド方法
```
$ ./make.sh
```

## 実行方法
```
$ ./a.out foo x
```

## 実行結果例（AmazonLinux）
```
$ ./a.out foo x
------ my_strchr ------
-1
0.461797 sec

------ strchr ------
-1
0.564303 sec

------ my_strchr ------
-1
0.464565 sec

------ strchr ------
-1
0.564523 sec

------ my_strchr ------
-1
0.472045 sec

------ strchr ------
-1
0.569555 sec

------ my_strchr ------
-1
0.463899 sec

------ strchr ------
-1
0.563620 sec

------ my_strchr ------
-1
0.461405 sec

------ strchr ------
-1
0.562088 sec

------ my_strchr ------
-1
0.463260 sec

------ strchr ------
-1
0.566668 sec

------ my_strchr ------
-1
0.463257 sec

------ strchr ------
-1
0.562774 sec

------ my_strchr ------
-1
0.489988 sec

------ strchr ------
-1
0.570823 sec

------ my_strchr ------
-1
0.464985 sec

------ strchr ------
-1
0.567993 sec

------ my_strchr ------
-1
0.465068 sec

------ strchr ------
-1
0.562574 sec
```

my_strchr のほうが微妙に速いという結果になってしまった。。OS X での結果も知りたい。