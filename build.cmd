@pushd %~dp0
node-gyp configure build
@if not exists mercury.node (
	mklink mercury.node build\Release\mercury.node
)
@popd
