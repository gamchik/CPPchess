CC=g++
executable=chess


${executable} : *.cpp *.h
	${CC} -std=c++20 *.cpp -o ${executable}

style : *.cpp *.h
	clang-format --style=google -i *.h *.cpp

clean : 
	rm ${executable}
