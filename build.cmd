@pushd %~dp0
@call node-gyp configure build
@if not exist "%~dp0\mercury.node" (
	mklink mercury.node build\Release\mercury.node
)
@popd
