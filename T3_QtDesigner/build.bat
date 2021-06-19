set PATH=C:\Qt\Qt5.12.11\5.12.11\mingw73_64\bin;C:/Qt/Qt5.12.11/Tools/mingw730_64\bin;%PATH%
uic welcome.ui -o ui_welcome.h
qmake -project "QT += widgets"
qmake
mingw32-make
pause