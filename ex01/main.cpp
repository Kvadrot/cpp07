/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 10:38:06 by ufo               #+#    #+#             */
/*   Updated: 2025/09/14 11:11:09 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ex01/main.cpp
#include <iostream>
#include <string>
#include "iter.hpp"

void print_int(int const &x) {
	std::cout << x << " ";
}

void print_string(std::string const &s) {
	std::cout << s << " ";
}

struct Point {
	int x;
	int y;
};

void print_point(Point const &p) {
	std::cout << "(" << p.x << "," << p.y << ") ";
}

static void title(const char *t) {
	std::cout << "\n=== " << t << " ===\n";
}

int main() {
	title("Ints");
	int ai[5] = {1, 2, 3, 4, 5};
	iter(ai, 5, print_int);
	std::cout << "\n";

	title("strings");
	std::string ss[3] = {"42", "cpp07", "ite4r"};
	iter(ss, 3, print_string);
	std::cout << "\n";

	title("Points");
	Point pts[2];
	pts[0].x = 0; pts[0].y = 1;
	pts[1].x = 5; pts[1].y = -2;
	iter(pts, 2, print_point);
	std::cout << "\n";

	return 0;
}