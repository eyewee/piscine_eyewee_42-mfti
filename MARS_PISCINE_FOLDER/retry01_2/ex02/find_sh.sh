#!/bin/sh
find . -type f -name "*.sh" | sed 's:./::g' | cut -d '.' -f1
