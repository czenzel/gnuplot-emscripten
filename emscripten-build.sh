#!/bin/bash
#
# GNUPlot Emscripten Build
# using Require.JS Functions
#
# Build Process Written by Christopher Zenzel (C) 2017
#
# Supported:
# Basic Terminals
#
# Not Supported:
# Readline (STDIN) Commands
# - All commands must be provided with -e or as a file
#

# Run Configure
emconfigure ./configure

# Run make with patched Makefiles
emmake make

# Create an Emscripten Build of GNUPlot
mkdir -p dist
cd dist

cp ../src/gnuplot gnuplot.bc
cp ../js/prefix.js .
cp ../js/postfix.js .

emcc -O2 --pre-js prefix.js --post-js postfix.js -o gnuplot.js gnuplot.bc

cd ..

