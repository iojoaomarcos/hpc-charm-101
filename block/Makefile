CHARMDIR = "/home/ubuntu/environment/charm-v7.0.0/"
CHARMC = $(CHARMDIR)/bin/charmc $(OPTS)


default: all
all: main


main.o : main.cpp main.h main.decl.h main.def.h
	$(CHARMC) -o main.o main.C

main.decl.h main.def.h : main.ci
	$(CHARMC) main.ci


clean:
	rm -f main.decl.h main.def.h main.o charmrun