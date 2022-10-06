# Exercise 8 - Viewing changes before committing

1. Ensure your working directory is clean

2. Add text to any one of your files

3. Delete different text from another of your files

4. Look at `git status`

        Output:

        On branch main
        Your branch is ahead of 'origin/main' by 7 commits.
        (use "git push" to publish your local commits)

        Changes not staged for commit:
        (use "git add <file>..." to update what will be committed)
        (use "git restore <file>..." to discard changes in working directory)
        modified:   equipment/appliances.txt
        modified:   equipment/furniture.txt

        no changes added to commit (use "git add" and/or "git commit -a")


5. View all the changes you've made

        git diff

        Output:

        diff --git a/equipment/appliances.txt b/equipment/appliances.txt
        index a803246..244aebc 100644
        --- a/equipment/appliances.txt
        +++ b/equipment/appliances.txt
        @@ -2,5 +2,4 @@ boiler
         chiller
         transmedium toaster oven
         dishwasher
        -electric kettle
        -coffee grinder
        \ No newline at end of file
        +electric kettle
        \ No newline at end of file
        diff --git a/equipment/furniture.txt b/equipment/furniture.txt
        index c7b774b..f712368 100644
        --- a/equipment/furniture.txt
        +++ b/equipment/furniture.txt
        @@ -1,3 +1,4 @@
         futon
         couch
        -Herman Miller Aeron Chair
        \ No newline at end of file
        +Herman Miller Aeron Chair
        +side table
        \ No newline at end of file


6. Does the following command return anything?

        git diff --staged

        There was no output.

7. Add one of your changed files to the index

        git add equipment/furniture.txt

8. What do these commands show?

        git diff
                diff --git a/equipment/appliances.txt b/equipment/appliances.txt
                index a803246..244aebc 100644
                --- a/equipment/appliances.txt
                +++ b/equipment/appliances.txt
                @@ -2,5 +2,4 @@ boiler
                 chiller
                 transmedium toaster oven
                 dishwasher
                -electric kettle
                -coffee grinder
                \ No newline at end of file
                +electric kettle
                \ No newline at end of file

        git diff --staged
                diff --git a/equipment/furniture.txt b/equipment/furniture.txt
                index c7b774b..f712368 100644
                --- a/equipment/furniture.txt
                +++ b/equipment/furniture.txt
                @@ -1,3 +1,4 @@
                 futon
                 couch
                -Herman Miller Aeron Chair
                \ No newline at end of file
                +Herman Miller Aeron Chair
                +side table
                \ No newline at end of file


9. Add the other changed file to the index

        git add equipment/appliances.txt

10. What do these commands show?

        git diff
        git diff --staged

11. Commit the changes

12. Check that your working directory is clean

13. Create a new file named `clothing.txt`

14. Does the new untracked file show up in git diff?

        git diff

15. Add and commit the new file
