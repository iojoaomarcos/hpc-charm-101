CHARMDIR = "/home/ubuntu/environment/charm-v7.0.0/"
CHARMC = $(CHARMDIR)/bin/charmc $(OPTS)


default: all
all: cblasmatmul


cblasmatmul : main.o cblasmatmul.o 
	$(CHARMC) -language charm++ -o cblasmatmul main.o cblasmatmul.o

main.o : main.C main.h main.decl.h main.def.h cblasmatmul.decl.h
	$(CHARMC) -o main.o main.C

main.decl.h main.def.h : main.ci
	$(CHARMC) main.ci

cblasmatmul.o : cblasmatmul.C cblasmatmul.h cblasmatmul.decl.h cblasmatmul.def.h main.decl.h
	$(CHARMC) -o cblasmatmul.o cblasmatmul.C

cblasmatmul.decl.h cblasmatmul.def.h : cblasmatmul.ci
	$(CHARMC) cblasmatmul.ci


clean:
	rm -f main.decl.h main.def.h main.o
	rm -f cblasmatmul.decl.h cblasmatmul.def.h cblasmatmul.o
	rm -f cblasmatmul charmrun
