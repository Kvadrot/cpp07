/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 10:38:06 by ufo               #+#    #+#             */
/*   Updated: 2025/09/15 10:54:30 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <iostream>
#include <string>
#include "Array.hpp"

static void title(const char *t) {
	std::cout << "\n=== " << t << " ===\n";
}

int main() {
	// test 0: default
	title("default ctor");
	Array<int> a0;
	std::cout << "size: " << a0.size() << "\n";

	// test 1: sized int
	title("sized int");
	Array<int> ai(5);
	std::size_t i = 0;
	while (i < ai.size()) {
		ai[i] = static_cast<int>(i * 10);
		i = i + 1;
	}
	i = 0;
	while (i < ai.size()) {
		std::cout << ai[i] << " ";
		i = i + 1;
	}
	std::cout << "\n";

	// test 2: copy ctor
	title("copy ctor");
	Array<int> ac(ai);
	std::cout << "ac[2]: " << ac[2] << "\n";
	ai[2] = 999;
	std::cout << "ai[2] changed to 999, ac[2] still: " << ac[2] << "\n";

	// test 3: assignment operator
	title("assign operator");
	Array<int> asg;
	asg = ai;
	std::cout << "asg size: " << asg.size() << "\n";
	std::cout << "asg[2]: " << asg[2] << "\n";

	// test 4: string type
	title("string array");
	Array<std::string> ss(3);
	ss[0] = "hello";
	ss[1] = "array";
	ss[2] = "templates";
	std::size_t j = 0;
	while (j < ss.size()) {
		std::cout << ss[j] << " ";
		j = j + 1;
	}
	std::cout << "\n";

	// test 5: out of range
	title("out of range");
	try {
		std::cout << ai[10] << "\n";
	} catch (std::exception &e) {
		std::cout << "caught exception: " << e.what() << "\n";
	}

	// test 6: const access
	title("const access");
	const Array<std::string> css(ss);
	std::cout << css[1] << "\n";
	// css[1] = "nope"; // should not compile

	return 0;
}