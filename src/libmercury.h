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

#ifndef NODE_LIBMERCURY_H_
#define NODE_LIBMERCURY_H_

#include <v8.h>
#include <node.h>

using namespace v8;
using namespace node;

Handle<Value> Initialise(const Arguments& args);

#endif /* NODE_LIBMERCURY_H_ */