# Exercise 4 - Adding files

1. Look git status for your directory, and paste the contents below

        git status

        Output:

        On branch main
        Your branch is up to date with 'origin/main'.

        Changes not staged for commit:
        (use "git add <file>..." to update what will be committed)
        (use "git restore <file>..." to discard changes in working directory)
        modified:   exercise02.md
        modified:   exercise03.md

        no changes added to commit (use "git add" and/or "git commit -a")

2. Using VS Code, the command line, or your favorite code editor, create a new file named `fruits.txt`.

3. Check your git status, and paste the contents here

        git status

        Output:

        On branch main
        Your branch is up to date with 'origin/main'.

        Changes not staged for commit:
        (use "git add <file>..." to update what will be committed)
        (use "git restore <file>..." to discard changes in working directory)
        modified:   exercise02.md
        modified:   exercise03.md
        modified:   exercise04.md

        Untracked files:
        (use "git add <file>..." to include in what will be committed)
        fruits.txt

        no changes added to commit (use "git add" and/or "git commit -a")

4. Add the new file to your index

        git add fruits.txt

5. Check git status again, and paste the contents below

        git status

        Output:

        On branch main
        Your branch is up to date with 'origin/main'.

        Changes to be committed:
        (use "git restore --staged <file>..." to unstage)
        new file:   fruits.txt

        Changes not staged for commit:
        (use "git add <file>..." to update what will be committed)
        (use "git restore <file>..." to discard changes in working directory)
        modified:   exercise02.md
        modified:   exercise03.md
        modified:   exercise04.md
