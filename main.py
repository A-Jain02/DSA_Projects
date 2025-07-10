import difflib
import os

def read_code(file_path):
    with open(file_path, 'r') as f:
        return f.read()

def calculate_similarity(code1, code2):
    seq_matcher = difflib.SequenceMatcher(None, code1, code2)
    return seq_matcher.ratio() * 100

def check_plagiarism(file1, file2):
    code1 = read_code(file1)
    code2 = read_code(file2)
    similarity = calculate_similarity(code1, code2)
    print(f"Similarity between {file1} and {file2}: {similarity:.2f}%")

if __name__ == "__main__":
    folder = "submissions"
    files = [os.path.join(folder, f) for f in os.listdir(folder) if f.endswith(".cpp") or f.endswith(".py")]

    for i in range(len(files)):
        for j in range(i + 1, len(files)):
            check_plagiarism(files[i], files[j])