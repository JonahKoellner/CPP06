# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/02 20:28:05 by jonahkollne       #+#    #+#              #
#    Updated: 2024/01/03 13:55:03 by jkollner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


name = Indentify
cc = c++
cflags = -Wall -Werror -Wextra -std=c++98
src = main.cpp
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
