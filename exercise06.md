# Exercise 6 - Committing a change (full cycle)

1. Look at git status and ensure you have a clean working directory

        git status

        Output:

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

2. Open your `fruits.txt` file  in VS Code, your favorite code editor

3. Add some lines to the file

        apple
        banana
        tomato

4. Save and exit the editor

5. Look at git status

        git status

        Output:

        On branch main
        Your branch is ahead of 'origin/main' by 1 commit.
        (use "git push" to publish your local commits)

        Changes not staged for commit:
        (use "git add <file>..." to update what will be committed)
        (use "git restore <file>..." to discard changes in working directory)
        modified:   exercise02.md
        modified:   exercise03.md
        modified:   exercise04.md
        modified:   exercise05.md
        modified:   fruits.txt

        no changes added to commit (use "git add" and/or "git commit -a")

6. Add the file to the index

        git add fruits.txt

7. Check status

        git status

        Output:

        On branch main
        Your branch is ahead of 'origin/main' by 1 commit.
        (use "git push" to publish your local commits)

        Changes to be committed:
        (use "git restore --staged <file>..." to unstage)
        modified:   fruits.txt

        Changes not staged for commit:
        (use "git add <file>..." to update what will be committed)
        (use "git restore <file>..." to discard changes in working directory)
        modified:   exercise02.md
        modified:   exercise03.md
        modified:   exercise04.md
        modified:   exercise05.md
        modified:   exercise06.md

8. Commit the changes (short commit message included on command line)

        git commit -m "Added more fruit to the list"

9. Check status

        git status

        Output:
        
        On branch main
        Your branch is ahead of 'origin/main' by 2 commits.
        (use "git push" to publish your local commits)

        Changes not staged for commit:
        (use "git add <file>..." to update what will be committed)
        (use "git restore <file>..." to discard changes in working directory)
        modified:   exercise02.md
        modified:   exercise03.md
        modified:   exercise04.md
        modified:   exercise05.md
        modified:   exercise06.md

        no changes added to commit (use "git add" and/or "git commit -a")

10. Which of the steps could be omitted?

        git status can be omitted.

11. Why might it be a bad idea to omit them?

        You might lose track of changes and forget to commit them, or commit an incomplete or erroneous file.

12. Repeat the above steps to add a new file with the name `vegetables.txt`

13. Create a subdirectory named `equipment` and a new file named `appliances.txt` in that subdirectory

14. Repeat the above steps to commit the new file and directory

15. Repeat the above steps 1-9, adding data to each of your files a few lines at a time, until you can easily do the steps without referring to the steps. You may want to add vegetables to the vegetables file, and appliances to the appliances - or vice versa