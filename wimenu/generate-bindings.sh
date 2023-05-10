#!/bin/sh
set -eou pipefail;
echo 'char binding_spec[] =';
sed -e 's/.*/  \"&\\n\"/';
echo ';';
