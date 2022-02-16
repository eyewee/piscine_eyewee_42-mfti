#!/bin/sh
find .  "*.sh" | sed 's:./::g' | cut -d '.' -f1
