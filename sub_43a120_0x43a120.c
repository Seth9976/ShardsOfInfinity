// 函数名称: sub_43a120
// 虚拟地址: 0x43a120
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_43a120(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_28
    int32_t var_28
    int32_t eax
    char const* const ecx
    
    if (arg1 != 0)
        uint32_t edx = zx.d(arg1.w)
        
        if (edx u< data_5bcd80)
            void* esi_1 = data_5bcd7c
            eax = edx * 0x568
            
            if (*(eax + esi_1 + 0x564) == arg1)
                int32_t result = 0
                int32_t ebx = 0xffffffff
                int32_t* i_1 = nullptr
                void* esi_2 = esi_1 + edx * 0x568
                sub_445070(&data_5bcd7c, &i_1)
                
                for (int32_t* i = i_1; i != 0xffffffff; i = i_1)
                    if (*i == 0 && i[2] == *(esi_2 + 8) && i[3] == *(esi_2 + 0xc))
                        int32_t eax_4 = i[4]
                        int32_t eax_5 = eax_4 - *(esi_2 + 0x10)
                        
                        if (eax_4 - *(esi_2 + 0x10) s< 0 && arg2 == 0)
                        label_43a1cf:
                            int32_t eax_6
                            int32_t edx_1
                            edx_1:eax_6 = sx.q(eax_5)
                            int32_t eax_8 = (eax_6 ^ edx_1) - edx_1
                            
                            if (result == 0 || eax_8 s< ebx)
                                ebx = eax_8
                                result = i[0x159]
                        else if (eax_5 s> 0 && arg2 == 1)
                            goto label_43a1cf
                    
                    sub_445070(&data_5bcd7c, &i_1)
                
                return result
        
        char const* const var_24_3 = "DataArray<struct ShGfx>::DataArrayGet"
        var_28 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_24 = "DataArray<struct ShGfx>::DataArrayGet"
        var_28 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\dataarray.h", var_28, 
        "DataArray<struct ShGfx>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
