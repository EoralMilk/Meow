#pragma once

// 用于Application，对于一个应用程序项目来说，它可以直接include <Meow.h>并且实现Application的子类。引擎将会创建一个Application子类的实例并Run

#include "Meow/Application.h"
#include "Meow/Log.h"

// -------------EntryPoint-------------
// 这个头文件中实际包含了main函数，也就是作为程序的入口而存在
#include "Meow/EntryPoint.h"
// ------------------------------------
