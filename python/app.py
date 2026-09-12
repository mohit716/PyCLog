import subprocess

result = subprocess.run(
    [r"./c/analyzer.exe",r"logs/sample.log"],
    capture_output=True,
    text=True
)


print(result.stdout)