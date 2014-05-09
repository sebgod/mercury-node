NPM := npm

.PHONY: all
all: test
 
.PHONY: install
install:
	$(NPM) install --production

.PHONY: dev
dev:
	$(NPM) install

.PHONY: test
test: dev
	$(NPM) test

.PHONY: publish
publish: dev
	$(NPM) publish
