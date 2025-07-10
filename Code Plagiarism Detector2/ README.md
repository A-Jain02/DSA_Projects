# Code Plagiarism Detector

A simple Python tool that detects code plagiarism using sequence matching algorithms.

## Features
- Compares multiple code submissions (C++/Python)
- Reports similarity percentage
- Lightweight and easy to extend

## How to Use

1. Place code submissions inside the `submissions/` folder.
2. Run:
```bash
python3 main.py
```
3. Output will show similarity percentages.

## Example
```
Similarity between submissions/code1.cpp and submissions/code2.cpp: 87.45%
```

## Skills Demonstrated
- File I/O
- String comparison algorithms
- Application of `difflib.SequenceMatcher` for real-world DSA problems
