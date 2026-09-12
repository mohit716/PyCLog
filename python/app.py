import subprocess

result = subprocess.run(
    ["./c/analyzer.exe"],
    capture_output=True,
    text=True
)

print("Python received:")
print(result.stdout)