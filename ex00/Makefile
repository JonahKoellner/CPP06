# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/02 20:28:05 by jonahkollne       #+#    #+#              #
#    Updated: 2024/01/02 20:55:51 by jonahkollne      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


name = ScalarConversion
cc = c++
cflags = -Wall -Werror -Wextra -std=c++98
src = main.cpp ScalarConverter.cpp
obj = ${src:.cpp=.o}

all: ${name}

${name}: ${obj}
	${cc} ${cflags} ${obj} -o ${name}

%.o: %.cpp
	$(cc) $(cflags) $< -c -o $@

clean:
	rm -f ${obj}

fclean: clean
	rm -f ${name}

re:	fclean all

.PHONY: all re clean fclean
