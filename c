[33mcommit 3307d5b946d778cc67eaaea764681d034d11ff8d[m[33m ([m[1;36mHEAD -> [m[1;32mmain[m[33m)[m
Author: Larry Gagnon <lgagnon@recursiveir.com>
Date:   Mon May 1 07:37:55 2023 -0400

    updated May 1 7:37am

[1mdiff --git a/InClassPracticals/Module 10_Unsupervised Learning/1/Activities/.ipynb_checkpoints/Ins_demo1_clustering-checkpoint.ipynb b/InClassPracticals/Module 10_Unsupervised Learning/1/Activities/.ipynb_checkpoints/Ins_demo1_clustering-checkpoint.ipynb[m
[1mnew file mode 100644[m
[1mindex 0000000..c542136[m
[1m--- /dev/null[m
[1m+++ b/InClassPracticals/Module 10_Unsupervised Learning/1/Activities/.ipynb_checkpoints/Ins_demo1_clustering-checkpoint.ipynb[m	
[36m@@ -0,0 +1,46 @@[m
[32m+[m[32m{[m
[32m+[m[32m "cells": [[m
[32m+[m[32m  {[m
[32m+[m[32m   "cell_type": "code",[m
[32m+[m[32m   "execution_count": null,[m
[32m+[m[32m   "id": "7f6b3dcb-9a43-4936-be83-76a5c908e0e4",[m
[32m+[m[32m   "metadata": {},[m
[32m+[m[32m   "outputs": [],[m
[32m+[m[32m   "source": [[m
[32m+[m[32m    "\n",[m
[32m+[m[32m    "from sklearn.datasets import make_blobs\n",[m
[32m+[m[32m    "import maplotlib.pyplot as plt\n",[m
[32m+[m[32m    "\n",[m
[32m+[m[32m    "\n",[m
[32m+[m[32m    "\n",[m
[32m+[m[32m    "\n",[m
[32m+[m[32m    "\n",[m
[32m+[m[32m    "\n",[m
[32m+[m[32m    "\n",[m
[32m+[m[32m    "\n",[m
[32m+[m[32m    "\n"[m
[32m+[m[32m   ][m
[32m+[m[32m  }[m
[32m+[m[32m ],[m
[32m+[m[32m "metadata": {[m
[32m+[m[32m  "kernelspec": {[m
[32m+[m[32m   "display_name": "Python 3 (ipykernel)",[m
[32m+[m[32m   "language": "python",[m
[32m+[m[32m   "name": "python3"[m
[32m+[m[32m  },[m
[32m+[m[32m  "language_info": {[m
[32m+[m[32m   "codemirror_mode": {[m
[32m+[m[32m    "name": "ipython",[m
[32m+[m[32m    "version": 3[m
[32m+[m[32m   },[m
[32m+[m[32m   "file_extension": ".py",[m
[32m+[m[32m   "mimetype": "text/x-python",[m
[32m+[m[32m   "name": "python",[m
[32m+[m[32m   "nbconvert_exporter": "python",[m
[32m+[m[32m   "pygments_lexer": "ipython3",[m
[32m+[m[32m   "version": "3.9.13"[m
[32m+[m[32m  }[m
[32m+[m[32m },[m
[32m+[m[32m "nbformat": 4,[m
[32m+[m[32m "nbformat_minor": 5[m
[32m+[m[32m}[m
[1mdiff --git a/InClassPracticals/Module 10_Unsupervised Learning/1/Activities/02-Ins_Kmeans/README.md b/InClassPracticals/Module 10_Unsupervised Learning/1/Activities/02-Ins_Kmeans/README.md[m
[1mnew file mode 100644[m
[1mindex 0000000..79c53ab[m
[1m--- /dev/null[m
[1m+++ b/InClassPracticals/Module 10_Unsupervised Learning/1/Activities/02-Ins_Kmeans/README.md[m	
[36m@@ -0,0 +1,5 @@[m
[32m+[m[32m## Instructor Demo[m
[32m+[m
[32m+[m[32m---[m
[32m+[m
[32m+[m[32m© 2022 edX Boot Camps LLC. Confidential and Proprietary. All Rights Reserved.[m
[1mdiff --git a/InClassPracticals/Module 10_Unsupervised Learning/1/Activities/02-Ins_Kmeans/Resources/service_ratings.csv b/InClassPracticals/Module 10_Unsupervised Learning/1/Activities/02-Ins_Kmeans/Resources/service_ratings.csv[m
[1mnew file mode 100644[m
[1mindex 0000000..c70fc16[m
[1m--- /dev/null[m
[1m+++ b/InClassPracticals/Module 10_Unsupervised Learning/1/Activities/02-Ins_Kmeans/Resources/service_ratings.csv[m	
[36m@@ -0,0 +1,184 @@[m
[32m+[m[32mmobile_app_rating,personal_banker_rating[m
[32m+[m[32m3.5,2.4[m
[32m+[m[32m3.65,3.14[m
[32m+[m[32m2.9,2.75[m
[32m+[m[32m2.93,3.36[m
[32m+[m[32m2.89,2.62[m
[32m+[m[32m2.61,2.51[m
[32m+[m[32m3.31,3.12[m
[32m+[m[32m3.76,3.07[m
[32m+[m[32m3,3.17[m
[32m+[m[32m0.88,3[m
[32m+[m[32m3.3,2.83[m
[32m+[m[32m2.92,2.17[m
[32m+[m[32m4.25,3[m
[32m+[m[32m3.33,2.7[m
[32m+[m[32m3.96,2[m
[32m+[m[32m3.75,3.12[m
[32m+[m[32m2.75,2.65[m
[32m+[m[32m3.41,3.09[m
[32m+[m[32m2.93,3.43[m
[32m+[m[32m2.33,2.72[m
[32m+[m[32m4.33,2.5[m
[32m+[m[32m3.67,2.77[m
[32m+[m[32m3,2.89[m
[32m+[m[32m3.68,2.93[m
[32m+[m[32m2.87,3.02[m
[32m+[m[32m3.81,2.38[m
[32m+[m[3