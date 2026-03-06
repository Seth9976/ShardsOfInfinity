// 函数名称: sub_450d30
// 虚拟地址: 0x450d30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_450d30(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4, char* arg5)
{
    // 第一条实际指令: void* result = data_65acf4
    void* result = data_65acf4
    
    if (arg3 != 0)
        uint32_t esi_1 = zx.d(arg3.w)
        
        if (esi_1 u< *(result + 4))
            void* edi_2 = esi_1 * 0x4c + *result
            
            if (*(edi_2 + 0x48) == arg3)
                int32_t var_10_1 = arg2
                return sub_450a70(sub_450c90(result, arg4, edi_2 + 0x3c), arg4, edi_2 + 0x3c, arg5)
    
    return result
}
