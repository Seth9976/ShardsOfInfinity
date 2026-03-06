// 函数名称: sub_43e800
// 虚拟地址: 0x43e800
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_43e800(char arg1)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.b = arg1
    void* eax = sub_443fc0()
    
    if (eax != 0 && ebx.b == 0)
        return eax
    
    void* ecx = data_5c2e98
    
    if (*(ecx + 0x618) == 0xffffffff)
        ecx = data_5c2e9c
        
        if (*(ecx + 0x618) == 0xffffffff)
            int32_t ecx_1 = data_5bcaec
            int32_t var_f4
            char const* const var_f0
            char* ecx_2
            
            if (ecx_1 != 0)
                uint32_t edx_1 = zx.d(ecx_1.w)
                
                if (edx_1 u< data_5bcd80)
                    int32_t esi_1 = data_5bcd7c
                    eax = edx_1 * 0x568
                    
                    if (*(eax + esi_1 + 0x564) == ecx_1)
                        void* eax_2 = edx_1 * 0x568 + esi_1
                        int32_t var_dc = 1
                        int128_t xmm0 = *(eax_2 + 0x508)
                        *(eax_2 + 0x4fc) = 0
                        __builtin_memcpy(eax_2 + 0xa0, eax_2 + 0x108, 0x68)
                        int128_t var_d8 = xmm0
                        void var_74
                        __builtin_memcpy(&var_74, &var_dc, 0x68)
                        int32_t var_c = 6
                        int32_t var_8 = 0
                        __builtin_memcpy(eax_2 + 0x170, &var_74, 0x70)
                        *(eax_2 + 0x4f0) = 1
                        data_5bcaec = 0
                        return eax_2
                
                var_f0 = "DataArray<struct ShGfx>::DataArrayGet"
                var_f4 = 0x6d
                ecx_2 = "DataArrayTryToGet(id) != NULL"
            else
                var_f0 = "DataArray<struct ShGfx>::DataArrayGet"
                var_f4 = 0x6c
                ecx_2 = "id != DATAID_NULL"
            
            sub_44e4d0(eax, &data_5559b1, ecx_2, "c:\ax2017\engine\dataarray.h", var_f4, var_f0)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    return sub_413580(ecx, 0xffffffff)
}
