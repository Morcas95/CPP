#ifndef BRAIN_HPP
    #define BRAIN_HPP

    #include <iostream>
	#include <string>

    class Brain {
        public:
            Brain(void);
			Brain(const Brain &a);

			Brain& operator=(const Brain &a);

			~Brain(void);

            std::string ideas[100];
    };

#endif
