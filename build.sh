#!/bin/sh
node-gyp configure build
[ -r mercury.node ] || ln -s build/Release/mercury.node mercury.node
