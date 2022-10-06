# Exercise 10 - Understanding Commits

1. Look at your commit log

        git log --oneline

        Output:

        0a370f8 (HEAD -> main) This is a multi-line commit message
        5df0e35 Adding clothing.txt
        d580c89 Committing all up to Exercise 12-12
        543a084 Changes to /equipment files
        1cac293 Exercise 8-1
        551adeb commit furniture.txt only
        6671c8d more appliances and fruits added, updated exercise 7
        36a548b vegetable and equipment changes, exercise file changes
        ad5709d Added vegetables file and equipment folder
        e78fdc6 Added more fruit to the list
        e77507a First commit
        5f4920c (origin/main, origin/HEAD) 10/4/22
        87a8477 updating for fall 2022
        88cf350 renamed for style
        0b46806 exercises through 10
        07af1e7 adding README
        f51751e adding #5
        837a23a initial commit

2. Choose a commit hash

        543a084

3. See what type of object that hash names

        git cat-file -t 543a084

        Output:

        commit

4. Examine the contents of that commit closely

        git cat-file -p 543a084

        Output:

        tree 0f7398396b128cd59be2f4fb24fb0b195bddd1a2
        parent 1cac29371eea5274a52bc7164ee895950df72a3f
        author Brandon Iledan <iledanb@gmail.com> 1665017627 -0700
        committer Brandon Iledan <iledanb@gmail.com> 1665017627 -0700

        Changes to /equipment files

5. Find the parent's hash in the commit log

        parent 1cac29371eea5274a52bc7164ee895950df72a3f


6. Look at the contents of the tree

        git cat-file -p 0f7398396b128cd59be2f4fb24fb0b195bddd1a2

        Output:

        100644 blob 00ee51cbab22ca55af8a2359bf7fceb2957e1dec    README.md
        040000 tree f2e708392c9888cb111bc6a11060d8dbd2dcbb3b    equipment
        100644 blob 1f4e827da67fcbde8788495573e646258e1f3ac9    exercise01.md
        100644 blob 106fcbe720e37ee5447b6d56ab263929e2bd6897    exercise02.md
        100644 blob 878769d874de8b76a350864513e8e1484a027a76    exercise03.md
        100644 blob 0158e88ffa4215a1f6229c00210495d3a7f0b7e6    exercise04.md
        100644 blob 83311de48efce2921eb7dd6a82b040681ac5a6eb    exercise05.md
        100644 blob 0de65eb4b5281652cb61b6a3829e56d64a5a4cc4    exercise06.md
        100644 blob c9d62da610584fb46f7ea992b12c04f4762d1b46    exercise07.md
        100644 blob c624a89cdf3af9ca1cf4e712ecb28b8ca1f2f1a5    exercise08.md
        100644 blob 1bfceffc1508140d6a92a242cb05aa94fe5871dc    exercise09.md
        100644 blob 9d035070f05cc4efe3cddb63e49a8647b7f70b80    exercise10.md
        100644 blob 72d6db73ac0e2cb32c6c9636c4c02bc2468c2901    fruits.txt
        100644 blob 1361ad1c1464dece22234fecee42fa4d9eb9a730    vegetables.txt

7. Examine the contents of one of the blobs

        git cat-file f2e708392c9888cb111bc6a11060d8dbd2dcbb3b -p

        Output:

        100644 blob 244aebc2269859f1d43da5173fcaca6dffbdb61c    appliances.txt
        100644 blob f7123681fe7cc190324bbdd65062f408856288dd    furniture.txt

        commit furniture.txt only

8. What type of object does the parent hash represent?

        git cat-file -t 1cac29371eea5274a52bc7164ee895950df72a3f

        Output:

        commit

9. Examine the contents of the parent and its tree

        git cat-file -p 1cac29371eea5274a52bc7164ee895950df72a3f

        Output:

        tree 724686b425c3bc4790c4a509250e9808c5d522ee
        parent 551adeb697375ae48146faf6ee8b03bdaa69d933
        author Brandon Iledan <iledanb@gmail.com> 1665015768 -0700
        committer Brandon Iledan <iledanb@gmail.com> 1665015768 -0700

        Exercise 8-1

        git cat-file -p 724686b425c3bc4790c4a509250e9808c5d522ee

        100644 blob 00ee51cbab22ca55af8a2359bf7fceb2957e1dec    README.md
        040000 tree fd7f98ef023b27647e342d8de3c39f7f13975c3f    equipment
        100644 blob 1f4e827da67fcbde8788495573e646258e1f3ac9    exercise01.md
        100644 blob 106fcbe720e37ee5447b6d56ab263929e2bd6897    exercise02.md
        100644 blob 878769d874de8b76a350864513e8e1484a027a76    exercise03.md
        100644 blob 0158e88ffa4215a1f6229c00210495d3a7f0b7e6    exercise04.md
        100644 blob 83311de48efce2921eb7dd6a82b040681ac5a6eb    exercise05.md
        100644 blob 0de65eb4b5281652cb61b6a3829e56d64a5a4cc4    exercise06.md
        100644 blob c9d62da610584fb46f7ea992b12c04f4762d1b46    exercise07.md
        100644 blob c624a89cdf3af9ca1cf4e712ecb28b8ca1f2f1a5    exercise08.md
        100644 blob 1bfceffc1508140d6a92a242cb05aa94fe5871dc    exercise09.md
        100644 blob 9d035070f05cc4efe3cddb63e49a8647b7f70b80    exercise10.md
        100644 blob 72d6db73ac0e2cb32c6c9636c4c02bc2468c2901    fruits.txt
        100644 blob 1361ad1c1464dece22234fecee42fa4d9eb9a730    vegetables.txt

10. Do the trees you looked at have any matching hashes listed?
        Yes, the hashes are identical. The tree refers to the repository's heirarchy.