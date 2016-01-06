#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>


#include "codegen/il2cpp-codegen.h"

extern "C" void t1_381_marshal(const t1_381& unmarshaled, t1_381_marshaled& marshaled);
extern "C" void t1_381_marshal_back(const t1_381_marshaled& marshaled, t1_381& unmarshaled);
extern "C" void t1_381_marshal_cleanup(t1_381_marshaled& marshaled);
