SRC = cbe.cpp component.cpp 
      

INCLUDES= -I ..

include ../config.inc
include ../common

CLEANFILES = cbe$(LIBEXT)

all: cbe$(LIBEXT)

###############################################################################

cbe$(LIBEXT): $(OBJ)
	$(LINKLIB)

