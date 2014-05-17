NPM := npm
JAVAC := javac

.PHONY: all
all: test
 
.PHONY: install
install:
	$(NPM) install --production

.PHONY: dev
dev:
	$(NPM) install

.PHONY: compile-test
compile-test: dev
	cd test/src && $(JAVAC) com/nearinfinity/nodeJava/MyClass.java

.PHONY: test
test: compile-test
	$(NPM) test

.PHONY: publish
publish: dev
	$(NPM) publish
