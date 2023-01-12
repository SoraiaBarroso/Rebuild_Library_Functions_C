int my_strcmp(char* param_1, char* param_2){
    for(int i = 0; i < 10; i++){
        if(param_1[i] == param_2[i]){
            return 0;
        }
        else if(param_1[i] < param_2[i]){
            return -1;
        }
        else if(param_1[i] > param_2[i]){
            return 1;
        }
    }
    return 0;
}