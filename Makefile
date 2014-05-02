NPM := npm

.PHONY: all
all: install test
 
.PHONY: install
install:
	$(NPM) install

.PHONY: test
test:
	$(NPM) test

