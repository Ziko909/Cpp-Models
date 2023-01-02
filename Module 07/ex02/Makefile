################################# Variables ####################################
# ******************************** Colors *************************************
DFL                             := \033[0;0m
RED                             := \033[0;31m
GREEN                   		:= \033[0;32m
YELLOW                  		:= \033[0;33m
BLUE                    		:= \033[0;34m
PURPLE                  		:= \033[0;35m
CYAN                    		:= \033[0;36m


# ******************************** Directories ********************************
OBJDIR                  		:= obj
SRCDIR                  		:= src

# ******************************** Directories ********************************
INC								:= Include

# *********************************** Files ***********************************
NAME                    		:= Array
SRC                             := $(SRCDIR)/main.cpp
OBJ                             := $(SRC:%.cpp=$(OBJDIR)/%.o)

# ******************************** Compiler ***********************************
CXX                            	:= c++
CXXFLAGS                  		:= -Wall -Wextra -Werror -std=c++98 

# ******************************** Shell cmd **********************************
RM                             	:= rm -rf
MD                              := mkdir -p

#################################################################################

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "$(YELLOW) Building $(PURPLE) $(NAME) $(DFL)";sleep 1;
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o : %.cpp $(INC)
	@$(MD) $(dir $@)
	@echo "$(GREEN) The Object file $(CYAN) $< $(GREEN): was generated $(DFL)";
	@$(CXX) -I $(INC) $(CXXFLAGS) -c $< -o $@

clean :
	@$(RM) $(OBJDIR)

fclean : clean
	@$(RM) $(NAME)

re : fclean all