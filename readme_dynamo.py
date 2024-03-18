#!/usr/bin/python3
from os import popen
from os.path import isfile, isdir
from sys import argv


list_dir = popen("ls").read().splitlines()
dir_name = popen("basename $(pwd)").read().strip()
repo_owner = popen("git remote -v | grep 'origin.*fetch' | awk '{print $2}' | awk -F'[/:]' '{print $5}'").read().strip()
repo_name = popen("git remote -v | grep 'origin.*fetch' | awk '{print $2}' | awk -F'[/:]' '{print $6}' | awk -F'[.]' '{print $1}'").read().strip()
script_name = argv[0]
script_name = script_name.split('/')
new_script_name = script_name[1]


files_to_ignore = ['README.md', new_script_name]
filter = []
for item in list_dir:
    if item not in files_to_ignore:
        filter.append(item)

string1 = "Here, you'll find a collection of projects, Each project is organized into its own directory. Feel free to explore and learn from these projects."
filename = "README.md"
with open(filename, "w", encoding='UTF-8') as f:
    f.write("# {}{}{}{} # Project List:{}".format(dir_name, '\n' * 2, string1, '\n' * 3,'\n' * 2))
with open(filename, 'a', encoding='UTF-8') as f:
    number = 1
    for item in filter:
        if isdir(item):
            link_to_dir = "https://github.com/{}/{}/tree/master/{}".format(repo_owner, repo_name, item)
            f.write("{}. **{}** [link]({})\n".format(number, item, link_to_dir))
        else:
            link_to_file = "https://github.com/{}/{}/blob/master/{}".format(repo_owner, repo_name, item)
            f.write("{}. **{}** [link]({})\n".format(number, item, link_to_file))
        number += 1


print("""
|￣￣￣￣￣￣￣￣￣￣|
| README.MD created! |
|____________________|
    (\__/) ||
    (•ㅅ•) ||
    / 　 づ
""")
