#!/bin/bash
find . -name '*.cc' -or -name '*.h' | xargs python cpplint.py
