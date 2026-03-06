// 函数名称: sub_47a330
// 虚拟地址: 0x47a330
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_47a330(int32_t arg1, int32_t arg2, int32_t arg3, int128_t* arg4)
{
    // 第一条实际指令: if (arg3 != 0)
    if (arg3 != 0)
        uint32_t edx = zx.d(arg3.w)
        
        if (edx u< data_5c99a4)
            void* edi_1 = data_5c99a0
            int32_t eax_1 = *(edx * 0x1008 + edi_1 + 0x1004)
            
            if (eax_1 == arg3)
                if (edx u>= data_5c99a4 || eax_1 != arg3)
                    sub_44e4d0(eax_1, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                        "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
                    
                    if (IsDebuggerPresent() != 1)
                        sub_44e680()
                        noreturn
                    
                    breakpoint
                
                int128_t* ecx_1 = edi_1 + 0x6dc + edx * 0x1008
                *arg4 = *ecx_1
                arg4[1] = ecx_1[1]
                arg4[2] = ecx_1[2]
                arg4[3] = ecx_1[3]
                int32_t ecx_2 = ecx_1[5].d
                arg4[4] = ecx_1[4]
                arg4[5].d = ecx_2
                return arg4
    
    uint32_t var_5c[0x4]
    _memset(&var_5c, 0, 0x54)
    *arg4 = var_5c
    int128_t var_4c
    arg4[1] = var_4c
    int128_t var_3c
    arg4[2] = var_3c
    int128_t var_2c
    arg4[3] = var_2c
    int128_t var_1c
    arg4[4] = var_1c
    int32_t var_c
    arg4[5].d = var_c
    return arg4
}
