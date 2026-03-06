// 函数名称: ??$free_environment@D@@YAXQAPAD@Z
// 虚拟地址: 0x52eb51
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void??$free_environment@D@@YAXQAPAD@Z(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    int32_t i = *arg1
    int32_t edi
    int32_t var_c_1 = edi
    int32_t* edi_1 = arg1
    
    for (; i != 0; i = *edi_1)
        __free_base(i)
        edi_1 = &edi_1[1]
    
    __free_base(arg1)
}
