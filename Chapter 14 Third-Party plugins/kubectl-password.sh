#!/bin/bash
# optional argument for reading /etc/shadow
if [[ "$1" == "shadow" ]]; then
  sudo cat /etc/shadow
  exit 0
fi

# optional argument to read the passwd file
if [[ "$1" == "password" ]]; then
  cat /etc/passwd
  exit 0
fi

echo "This plugin will read the password files"
