// 函数名称: sub_46ef90
// 虚拟地址: 0x46ef90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_46ef90(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c
    int32_t var_c
    int32_t eax
    char const* const ecx
    
    if (arg1 != 0)
        uint32_t edx_1 = zx.d(arg1.w)
        
        if (edx_1 u< data_5c99a4)
            int32_t esi_1 = data_5c99a0
            eax = edx_1 * 0x1008
            
            if (*(eax + esi_1 + 0x1004) == arg1)
                int32_t ecx_1 = 0
                void* edx_3 = edx_1 * 0x1008 + esi_1
                int32_t esi_2 = data_5cea2c
                int32_t result
                
                if (esi_2 s> 0)
                    do
                        result = (&data_5cda2c)[ecx_1] << 4
                        
                        if (*(result + &data_5c99f0) == edx_3)
                            return result
                        
                        ecx_1 += 1
                    while (ecx_1 s< esi_2)
                
                result = *(edx_3 + 0x6a8)
                (&data_5cda2c)[esi_2] = result
                data_5cea2c += 1
                return result
        
        char const* const var_8_1 = "DataArray<struct UI2>::DataArrayGet"
        var_c = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_8 = "DataArray<struct UI2>::DataArrayGet"
        var_c = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\dataarray.h", var_c, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
