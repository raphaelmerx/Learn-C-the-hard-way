# -g option for debugging. See man cc
CFLAGS=-Wall -g

# if you just run make, it will run the first command found here
# make clean all to clean AND run all
clean:
	rm -f ex10
all: ex10
