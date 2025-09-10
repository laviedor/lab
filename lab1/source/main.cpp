#define GLM_ENABLE_EXPERIMENTAL 
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtx/string_cast.hpp>

int main()
{
	//Q1.
	glm::ivec3 p(1.0f, 4.0f, -5.0f);
	glm::vec3 v(5.0f, 1.0f, 4.0f);

	p += v;
	std::cout << glm::to_string(p) << std::endl;

	//Q2
	glm::vec3 v1(1.0f, 0.0f, 0.0f);
	glm::vec3 v2(0.0f, 1.0f, 0.0f);
	glm::vec3 v3 = v1 + v2;
	std::cout << glm::to_string(v3) << std::endl;

	//Q3
	glm::vec3 v4(0.0f, 1.0f, 0.0f);
	glm::vec3 result = v4 * 2.0f;
	std::cout << glm::to_string(result) << std::endl;

	//Q$
	glm::vec3 start(8.0f, 2.0f, 5.0f);
	glm::vec3 end(1.0f, -1.0f, 4.0f);
	glm::vec3 v5= end - start;
	std::cout << glm::to_string(v5) << std::endl;

	//Q5
	glm::vec3 v6(1.0f, 3.0f, 4.0f);
	v6 = normalize(v6);
	std::cout << glm::to_string(v6) << std::endl;;

	//Q6
	glm::vec3 v7(1.0f, -1.0f, 4.0f);
	glm::vec4 v8(v7, 0.0f);
	std::cout << glm::to_string(v8) << std::endl;
	return 0;
}