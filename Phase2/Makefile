CCFLAGS=-I/usr/local/opt/flex/include
LDFLAGS=-L/usr/local/opt/flex/lib
IN_FILE=mini_l
OUT_EXEC=parser

all: exec

bison: $(IN_FILE).y
	bison -v -d --file-prefix=y $(IN_FILE).y

flex: $(IN_FILE).lex bison
	flex $(IN_FILE).lex

exec: flex bison
	gcc -o $(OUT_EXEC) y.tab.c lex.yy.c $(CCFLAGS) $(LDFLAGS) -lfl

clean:
	rm -f lex.yy.c y.tab.* y.output *.o parser
