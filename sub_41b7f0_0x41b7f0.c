// 函数名称: sub_41b7f0
// 虚拟地址: 0x41b7f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_41b7f0(int32_t* arg1, uint32_t arg2, int32_t arg3, uint32_t arg4)
{
    // 第一条实际指令: uint32_t ebx = arg2
    uint32_t ebx = arg2
    
    if (arg1[1] == arg3 && *arg1 == ebx && arg1[2] == arg4 && arg1[3] == 0)
        int32_t ecx = arg1[8]
        
        if (ecx != 0)
            uint32_t eax_1 = zx.d(ecx.w)
            
            if (eax_1 u< data_5c99a4)
                uint32_t eax_4 = *(eax_1 * 0x1008 + data_5c99a0 + 0x1004)
                arg2 = eax_4
                
                if (eax_4 == ecx)
                    char const* const var_1c
                    int32_t var_18
                    char const* const var_14
                    char* ecx_1
                    
                    if (ecx != 0)
                        eax_4 = eax_1
                        
                        if (eax_4 u>= data_5c99a4 || arg2 != ecx)
                            var_14 = "DataArray<struct UI2>::DataArrayGet"
                            var_18 = 0x6d
                            ecx_1 = "DataArrayTryToGet(id) != NULL"
                            var_1c = "c:\ax2017\engine\dataarray.h"
                        else
                            eax_4 *= 0x1008
                            
                            if (*(eax_4 + data_5c99a0 + 4) == arg4)
                                int32_t esi_1 = arg1[8]
                                eax_4 = sub_47a240(arg4)
                                
                                if (eax_4 == esi_1)
                                    return esi_1
                                
                                var_14 = "UI2Selector::Lookup"
                                var_18 = 0x181
                                var_1c = "c:\ax2017\engine\ui2.h"
                                ecx_1 = "UI2GetHandle(arg_root, arg_name, arg_idx) == element"
                            else
                                var_14 = "UI2Selector::Lookup"
                                var_18 = 0x180
                                var_1c = "c:\ax2017\engine\ui2.h"
                                ecx_1 = "UI2DebugIndex(element) == arg_idx"
                    else
                        var_14 = "DataArray<struct UI2>::DataArrayGet"
                        var_18 = 0x6c
                        ecx_1 = "id != DATAID_NULL"
                        var_1c = "c:\ax2017\engine\dataarray.h"
                    
                    sub_44e4d0(eax_4, &data_5559b1, ecx_1, var_1c, var_18, var_14)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
    
    int32_t eax_6 = sub_47a240(arg4)
    arg1[8] = eax_6
    
    if (eax_6 == 0)
        return eax_6
    
    arg1[2] = arg4
    arg1[1] = arg3
    *arg1 = ebx
    arg1[3] = 0
    return eax_6
}
