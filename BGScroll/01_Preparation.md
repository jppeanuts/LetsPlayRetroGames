## 前準備
1. プロジェクトの作成

	```
	・「File → New → Project… → Empty Project」を選択し「Go」ボタンを押す。
	・１番目の画面「Next >」を押す。
	・２番目の画面
		Project title → BGScroll
		Folder to create project in → C:¥sgdk151¥projects¥
		「Next >」を押す。
	・３番目の画面
		Compiler → Sega Genesis Compiler
		「Create “Debug” configuration」チェックを外す
		「Create “Release” configuration」チェックを付ける
		「”Release” options」
			Output dir → out¥
			Objects output dir → out¥
		「Finish」を押す。
	```
	
1. カスタ厶Makefileの指定

	```
	・画面左側「BGScroll」プロジェクトを右クリックし、「Properties…」を選択する。
		Makefile → C:¥sgdk151¥makefile.gen
		「This is a custom Makefile」チェックを付ける
	```
	
1. 「main.c」の作成

	```
	・「File → New → File… → C/C++ source」を選択し「Go」ボタンを押す。
	・１番目の画面「Next >」を押す。
	・２番目の画面「C」を選択して「Next >」を押す。
	・３番目の画面
		「Filename with full path」の「…」ボタンを押す。
		保存場所「C:¥sgdk151¥projects¥BGScroll」を確認する。
		「src」フォルダを作成。
		「src」フォルダに入って下の「ファイル名」欄に、
			ファイル名 → main.c
		と入力して「保存」ボタンを押す。
		
		「Add file to active project」とその下の「Release」にチェックを付ける。
		「Finish」を押す。
	```
