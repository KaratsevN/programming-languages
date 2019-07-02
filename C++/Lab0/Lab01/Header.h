#pragma once
//double change_input(double **A, int n, int m);
//double keyboard_input(double **A, int n, int m);
double file_input(double **A, int &n, int &m, char buffer[]);
double write_matr(double **A, int n, int m);
double sort_by_bubble(double **A, int n, int m);
double sort_by_inserts(double **A, int n, int m);
double file_output(double **A, int n, int m);
