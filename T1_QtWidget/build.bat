set PATH=C:\Qt\Qt5.12.11\5.12.11\mingw73_64\bin;C:/Qt/Qt5.12.11/Tools/mingw730_64\bin;%PATH%
moc demo_widget.h -o moc_demo_widget.cpp
g++ -c demo_widget.cpp -I"C:\Qt\Qt5.12.11\5.12.11\mingw73_64\include" -o demo_widget.o
g++ -c moc_demo_widget.cpp -I"C:\Qt\Qt5.12.11\5.12.11\mingw73_64\include" -o moc_demo_widget.o
g++ -c main.cpp -I"C:\Qt\Qt5.12.11\5.12.11\mingw73_64\include" -o main.o
g++ moc_demo_widget.o demo_widget.o main.o -L"C:\Qt\Qt5.12.11\5.12.11\mingw73_64\lib" -lQt5Core -lQt5Gui -lQt5Widgets -o demo_widget
del *.o