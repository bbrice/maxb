/*
 * Copyright (C) 2018-2021, Brian Brice. All rights reserved.
 *
 * This file is part of maxb.
 *
 * maxb is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * maxb is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with maxb.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifdef _WIN32
#include "targetver.h"
#else
#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#endif

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <cstdlib>

#include <algorithm>
#include <chrono>
#include <future>
#include <random>
#include <string>
#include <memory>
#include <thread>
#include <vector>

#ifndef _WIN32
#include <pthread.h>
#include <sched.h>
#endif

#define ASIO_STANDALONE
#include "asio.hpp"
