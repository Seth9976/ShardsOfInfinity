// 函数名称: __free_osfhnd
// 虚拟地址: 0x537a9b
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__free_osfhnd(int32_t arg1)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_10 = edi
    
    if (arg1 s>= 0 && arg1 u< data_65a978)
        int32_t edi_2 = arg1 s>> 6
        int32_t ebx_1 = (arg1 & 0x3f) * 0x30
        int32_t eax_3 = (&data_65a778)[edi_2]
        
        if ((*(ebx_1 + eax_3 + 0x28) & 1) != 0 && *(ebx_1 + eax_3 + 0x18) != 0xffffffff)
            if (sub_52f17c() == 1)
                if (arg1 == 0)
                    int32_t var_14_3 = 0
                    SetStdHandle(STD_INPUT_HANDLE, nullptr)
                else if (arg1 == 1)
                    int32_t var_14_2 = 0
                    SetStdHandle(STD_OUTPUT_HANDLE, nullptr)
                else if (arg1 == 2)
                    int32_t var_14_1 = 0
                    SetStdHandle(STD_ERROR_HANDLE, nullptr)
            
            *(ebx_1 + (&data_65a778)[edi_2] + 0x18) = 0xffffffff
            return 0
    
    *__errno() = 9
    *___doserrno() = 0
    return 0xffffffff
}
