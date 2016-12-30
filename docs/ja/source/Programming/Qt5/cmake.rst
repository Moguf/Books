CMakeの書き方
===============




.. code-block:: cmake
          
   cmake_minimum_required(VERSION 2.8)
   project(project_name)

   # 対応するビルドディレクトリからインクルードファイルを探す。
   set(CMAKE_INCLUDE_CURRENT_DIR ON)
   
   # コンパイラーの指定。
   set(CMAKE_CXX_COMPILER /usr/bin/g++ )
   
   # パッケージをパスを指定して読み込む。
   # cmakeのパッケージの定義はinlucdeとlibsを含むディレクトリのこと。
   # export QTDIR='/home/user/Qt/5.7/clang_64'
   set(CMAKE_PREFIX_PATH $ENV{QTDIR})
   
   # mocファイルを自動で追加する。
   set(CMAKE_AUTOMOC ON)
   
   include_directories(${Qt5Widgets_INCLUDE_DIRS})
