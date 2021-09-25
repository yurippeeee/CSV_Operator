#
#　　変数定義
#

#コンパイラとコンパイラオプション
COMPILER = g++ 
BUILD_OPTION = -static -c -o 
LINK_OPTION = -static -o

#オブジェクトファイル
OBJROOT = ../build/obj
OBJECTS = $(TESTSOURCES) $(SOURCES)

#テストプログラム
TESTSOURCES = test.cpp
TESTSRCOBJ = $(OBJROOT)/test.o

#csvソフトのソースプログラム
SRCROOT = ../csv_operator/src
SOURCES = $(SRCROOT)/csv.cpp
SRCOBJ = $(OBJROOT)/csv.o

#ターゲット実行ファイル
TARGETSROOT = ../build/bin
TARGETS = $(TARGETSROOT)/test.exe


#
#　コンパイルと実行
#

#テストを実行
run:
	$(TARGETS)

#リンク
$(TARGETS): $(OBJECTS) 
	$(COMPILER) $(LINK_OPTION) $(TARGETS) $(OBJECTS)

#テストプログラムのコンパイル
$(TESTSRCOBJ): $(TESTSOURCES)
	$(COMPILER) $(BUILD_OPTION) $@ $>

#csvソフトのソースのコンパイル
$(SRCOBJ): $(SOURCES)
	$(COMPILER) $(BUILD_OPTION) $@ $>