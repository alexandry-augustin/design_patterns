#!/bin/bash

FNAME="README"
asciidoctor -b docbook $FNAME.adoc
pandoc -f docbook -t markdown_strict $FNAME.xml -o ../$FNAME.md
rm $FNAME.xml
