// 函数名称: sub_491590
// 虚拟地址: 0x491590
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_491590(char** arg1)
{
    // 第一条实际指令: char** var_c = arg1
    char** var_c = arg1
    int32_t* i = arg1[1]
    
    while (i != 0)
        char** edi_1 = *i
        i = i[1]
        
        if (edi_1[2] != 0)
            sub_491590()
            edi_1[2] = 0
        
        sub_491400(edi_1)
    
    int32_t* i_1 = arg1[1]
    
    while (i_1 != 0)
        int32_t* i_2 = i_1
        i_1 = i_1[1]
        sub_45d050(i_2, 0xc)
    
    arg1[3] = 0
    arg1[1] = 0
    arg1[2] = 0
    return sub_4912a0(arg1)
}
