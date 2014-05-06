NPM := npm

.PHONY: all
all: install test
 
.PHONY: install
install:
	$(NPM) install --production

.PHONY: dev
dev:
	$(NPM) install

.PHONY: test
test:
	$(NPM) test

