// 函数名称: ?write_character@?$string_output_adapter@D@__crt_stdio_output@@QBE_NDQAH@Z
// 虚拟地址: 0x5229cd
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __thiscall?write_character@?$string_output_adapter@D@__crt_stdio_output@@QBE_NDQAH@Z(int32_t* arg1, char arg2, int32_t* arg3)
{
    // 第一条实际指令: void* ecx = *arg1
    void* ecx = *arg1
    int32_t* result
    
    if (*(ecx + 8) != *(ecx + 4))
        *arg3 += 1
        void* eax_2 = *arg1
        *(eax_2 + 8) += 1
        int32_t* eax_3
        eax_3.b = arg2
        ***arg1 = eax_3.b
        result = *arg1
        *result += 1
        result.b = 1
    else
        if (*(ecx + 0xc) == 0)
            *arg3 = 0xffffffff
        else
            *arg3 += 1
        
        result.b = (*arg1)[3].b
    
    return result
}
