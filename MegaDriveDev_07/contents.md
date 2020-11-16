## メガドラ開発体験記（７）
Code::Blocksの初期設定（最初に１回だけ行う設定）のみを記載。


1. Code::Blocksのダウンロードとインストール（ブログ第６回の内容）。
1. Code::Blocksのメニューから「Settings → Compiler...」を選択する。
1. 画面上「Selected compiler」が「GNU GCC Compiler」になっていることを確認し、「Copy」ボタンを押す。新しいコンパイラの名前を聞かれるので、「Sega Genesis Compiler」と入力し「OK」を押す。
1. 「Selected compiler」が「Sega Genesis Compiler」になっていることを確認し、少し下の「Toolchain executables」タブを押す。以下、それぞれの「...」ボタンを押し、パスと実行ファイルを指定する。
	```
	Compiler's installation directory → C:¥sgdk151

	C compiler → gcc.exe
	C++ compiler → gcc.exe
	Linker for dynamic libs → gcc.exe
	Linker for static libs → ld.exe
	Debugger → GDB/CDB debugger: Default
	Resource compiler → bintos.exe
	Make program → make.exe
	```
・[Java Runtime Environment](https://www.java.com/ja/download/)を忘れずにインストールする。

・[Stephane-D氏のページ](https://github.com/Stephane-D/SGDK/wiki/Setup-SGDK-with-CodeBlocks)を参照（情報古く変更箇所あり）。
