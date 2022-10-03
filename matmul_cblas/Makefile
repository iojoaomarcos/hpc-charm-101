-include ../../common.mk

CHARMDIR = "/home/ubuntu/environment/charm-v7.0.0/"
CHARMC = $(CHARMDIR)/bin/charmc $(OPTS)
LIBS = -llapack -lblas -lgfortran
BLASPATH ="/home/ubuntu/environment/try/cblas_install/"

CXX=$(CHARMC)
CXXFLAGS=$(OPTS)

BINARY=matmul

all: $(BINARY)

$(BINARY): matmul.o
	$(CHARMC) -o $@ $^ $(OPTS) -L $(BLASPATH)-l $(LIBS)

matmul.o: matmul.C matmul.decl.h
matmul.decl.h: matmul.ci
	$(CHARMC) $<

test: $(BINARY)
	$(call run, +p4 ./matmul 50 5 )

testp: $(BINARY)
	$(call run, +p$(P) ./matmul $$(( $(P) * 10 ))  5 )

clean:
	rm -f *.o *.decl.h *.def.h $(BINARY) charmrun
