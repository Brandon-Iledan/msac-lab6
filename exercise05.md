# Exercise 5 - Making your first commit

1. If you just completed Exercise 4, `git status` should show that you have "changes to be committed"

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

2. Commit the changes with the command

        git commit

3. Your editor will open automatically.  Read the text that is already there.

4. Enter your commit message, e.g.

        First commit

5. Save and exit from the editor

6. Check git status again, and paste the contents below.

        git status

        On branch main
        Your branch is ahead of 'origin/main' by 1 commit.
        (use "git push" to publish your local commits)

        Changes not staged for commit:
        (use "git add <file>..." to update what will be committed)
        (use "git restore <file>..." to discard changes in working directory)
        modified:   exercise02.md
        modified:   exercise03.md
        modified:   exercise04.md

        no changes added to commit (use "git add" and/or "git commit -a")