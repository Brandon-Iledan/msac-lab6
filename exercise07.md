# Exercise 7 - More than one changed file

1. Ensure you have a clean working directory

        git status

        Output:

        On branch main
        Your branch is ahead of 'origin/main' by 4 commits.
        (use "git push" to publish your local commits)

        nothing to commit, working tree clean


2. Edit one of your `fruits.txt`, add a few items

        blueberry
        strawberry
        etc.

3. Edit `appliances.txt` and add a few items

        dishwasher
        dryer
        etc.

4. Look at git status, paste the output here

        git status

        Output:

        On branch main
        Your branch is ahead of 'origin/main' by 4 commits.
        (use "git push" to publish your local commits)

        Changes not staged for commit:
        (use "git add <file>..." to update what will be committed)
        (use "git restore <file>..." to discard changes in working directory)
        modified:   equipment/appliances.txt
        modified:   fruits.txt

        no changes added to commit (use "git add" and/or "git commit -a")

5. Can you commit both of the changed files in a single commit?

        Yes, by using the -A flag for "all"

6. After you do so, check that you have a clean working directory by running `git status`, and pasting the output here

        Output:
        
        On branch main
        Your branch is ahead of 'origin/main' by 5 commits.
        (use "git push" to publish your local commits)

        nothing to commit, working tree clean

7. Create a new file `equipment/furniture.txt`. Add content to both `vegetables.txt` and `furniture.txt`

8. How can you commit just one of the changed files?

        git add equipment/furniture.txt
        git commit -m 'commit furniture.txt only' equipment/furniture.txt

9. Check your `git status`

        Output:

        On branch main
        Your branch is ahead of 'origin/main' by 6 commits.
        (use "git push" to publish your local commits)

        Changes not staged for commit:
        (use "git add <file>..." to update what will be committed)
        (use "git restore <file>..." to discard changes in working directory)
        modified:   exercise07.md
        modified:   vegetables.txt

        no changes added to commit (use "git add" and/or "git commit -a")

10. What does red text mean in the output of `git status`?

        There is a modified file in the local repository that is not staged to be committed.

11. What does green text mean in the output of `git status`?

        A modified file that is staged to be committed.

12. How can you make a single file show in both red and green in the output of `git status`?

        Stage a modified file, modify it again, then stage it again. The version that was first modified will be staged and green, but the last modification will be red and not staged.