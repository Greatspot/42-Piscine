#!/bin/bash
id $FT_USER -G -n | tr ' ' ',' | tr -d '\n'
