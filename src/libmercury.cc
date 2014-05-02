/*  $Id$

node.js addon for Mercury

Author:        Sebastian Godelet
E-mail:        sebastian.godelet+github@gmail.com
Copyright (C): 2014, Sebastian Godelet

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#include <v8.h>
#include <node.h>
#include <string.h>
#include <stdlib.h>
#include "mercury_binding_int.h"
#include "mercury_binding.mh"

using namespace v8;
using namespace node;

#define LOG 1

#ifdef LOG
#define QLOG2(f, a1) if (obj->cb_log) obj->cb_log((f), (a1))
#else
#define QLOG2(_1, _2) while (false) 
#endif

Handle<Value> Initialise(const Arguments& args) {
	void *stack_bottom;
	int rval;
	HandleScope scope;
	/* initialise Mercury */
	mercury_init(0, nullptr, &stack_bottom);
	rval = 0;
	return scope.Close(Number::New(rval));
}

// TODO: Handle<Value> Finalise 
// return mercury_terminate();

extern "C" void init(Handle<Object> target) {
	target->Set(String::NewSymbol("initialise"),
		FunctionTemplate::New(Initialise)->GetFunction());
}

NODE_MODULE(libmercury, init)
