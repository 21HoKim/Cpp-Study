double f(double x) {
	return x * x;
}
double g(double z) {
	return z * z * z;
}
double h(double y) {
	return y * y * y * y;
}
/*void get_data(double *x,double *y) {
	std::cout << "두 수를 입력하세요 : ";
	std::cin >> *x >> *y;
	return;
}*/
void get_data(double& x, double& y) {
	std::cout << "두 수를 입력하세요 : ";
	std::cin >> x >> y;
	return;
}
void ch(double &a, double &b) {
	double temp;
	temp = a;
	a = b;
	b = temp;
}