NAME     =	Office

SOURSE   =  main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

OBJ      =	$(SOURSE:%.cpp=%.o)

DEP      =	$(SOURSE:%.cpp=%.d)

CPPFLAGS =	-MMD -Wall -Wextra -Werror -std=c++98 -g
all      :	$(NAME)

$(NAME)  :	$(OBJ) 
			c++ $(CPPFLAGS) $(OBJ) -o $@

%.o 	 :	%.c
			c++ $(CPPFLAGS) -c $< -o $@

-include $(DEP)

clean	 : 
			rm -f $(OBJ) $(DEP)
		
fclean	 :	clean
			rm -f $(NAME)


re		 :	fclean all

.PHONY 	 :	all clean fclean re 
