NPM := npm

.PHONY: install
install:
	$(NPM) install

.PHONY: all
all: install
 
