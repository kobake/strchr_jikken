# strchr_jikken

http://qiita.com/hnw/items/e76732387ab76a070d2b に触発されて書いた実験コード。

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

my_strchr のほうが微妙に速いという結果になってしまった。。

…と思ったけど与える文字列を変えるとやはり strchr のほうが速かった。

```
./a.out fooafsdfay0a098fa x
------ my_strchr ------
-1
1.244110 sec

------ strchr ------
-1
0.600406 sec

------ my_strchr ------
-1
1.251747 sec

------ strchr ------
-1
0.605782 sec

------ my_strchr ------
-1
1.243136 sec

------ strchr ------
-1
0.602312 sec

------ my_strchr ------
-1
1.241445 sec

------ strchr ------
-1
0.600969 sec

------ my_strchr ------
-1
1.254875 sec

------ strchr ------
-1
0.599676 sec

------ my_strchr ------
-1
1.244951 sec

------ strchr ------
-1
0.601812 sec

------ my_strchr ------
-1
1.241922 sec

------ strchr ------
-1
0.601259 sec

------ my_strchr ------
-1
1.249918 sec

------ strchr ------
-1
0.600177 sec

------ my_strchr ------
-1
1.244256 sec

------ strchr ------
-1
0.600446 sec

------ my_strchr ------
-1
1.242494 sec

------ strchr ------
-1
0.600585 sec
```

OS X での計測結果も知りたい。
