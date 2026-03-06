// 函数名称: ___acrt_lowio_set_os_handle
// 虚拟地址: 0x5378db
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___acrt_lowio_set_os_handle(int32_t arg1, HANDLE arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    if (arg1 s>= 0 && arg1 u< data_65a978)
        int32_t ebx_2 = arg1 s>> 6
        int32_t ecx_1 = (arg1 & 0x3f) * 0x30
        
        if (*(ecx_1 + (&data_65a778)[ebx_2] + 0x18) == 0xffffffff)
            int32_t edi
            int32_t var_14_1 = edi
            
            if (sub_52f17c() == 1)
                if (arg1 == 0)
                    SetStdHandle(STD_INPUT_HANDLE, arg2)
                else if (arg1 == 1)
                    SetStdHandle(STD_OUTPUT_HANDLE, arg2)
                else if (arg1 == 2)
                    SetStdHandle(STD_ERROR_HANDLE, arg2)
            
            *(ecx_1 + (&data_65a778)[ebx_2] + 0x18) = arg2
            return 0
    
    *__errno() = 9
    *___doserrno() = 0
    return 0xffffffff
}
