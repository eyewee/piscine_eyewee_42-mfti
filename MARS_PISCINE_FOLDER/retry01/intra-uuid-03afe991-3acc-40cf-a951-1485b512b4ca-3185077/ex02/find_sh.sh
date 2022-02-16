#!/bin/sh
find . -type f "*.sh" | sed 's:./::g' | cut -d '.' -f1
