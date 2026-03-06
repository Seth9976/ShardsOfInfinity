// 函数名称: sub_421250
// 虚拟地址: 0x421250
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_421250(uint32_t arg1)
{
    // 第一条实际指令: uint32_t ebx = arg1
    uint32_t ebx = arg1
    void* result = sub_472550(ebx, sub_41fc40)
    void* ecx_1 = data_65aabc
    char const* const var_30_1
    int32_t var_2c_1
    char const* const var_28_8
    char* ecx_2
    
    if (ecx_1 != 0)
        int32_t ecx_3 = *(ecx_1 + 0x424)
        int32_t edi_1 = data_5bb2bc
        int32_t eax_2 = edi_1 * 6
        int32_t eax_3 = ecx_3 - eax_2 + 1
        
        if (eax_3 s> 6)
            eax_3 = 6
        
        result = sub_469bf0(eax_3, &data_5bb848, ebx, eax_3, 0xffffffff)
        
        if (edi_1 != 0)
            int32_t var_28_1 = 0xffffffff
            result = sub_469930(ebx)
        
        if (edi_1 s< ecx_3 s/ 6)
            int32_t var_28_2 = 0xffffffff
            result = sub_469930(ebx)
        
        uint32_t edi_2 = 0
        
        if (eax_3 s<= 0)
            return result
        
        while (true)
            if (edi_2 != 0 || edi_1 != edi_2)
                uint32_t eax_5 = sub_41b7f0(edi_2 * 0x24 + &data_e47e20, ebx, "tblFriends", edi_2)
                result = sub_47a240(edi_2)
                
                if (result != eax_5)
                    var_28_8 = "UI2Selector::LookupForce"
                    var_2c_1 = 0x157
                    var_30_1 = "c:\ax2017\engine\ui2.h"
                    ecx_2 = "UI2GetHandle(arg_root, arg_name, arg_idx) == retval"
                    break
                
                if (eax_5 != 0)
                    result = data_65aabc
                    
                    if (result == 0)
                        goto label_421272
                    
                    int32_t ecx_14 = (eax_2 - 1 + edi_2) << 4
                    void* eax_6 = result + ecx_14
                    sub_469cf0(eax_6 + 0x2c, &data_5bb898, eax_5, eax_6 + 0x2c, 0xffffffff)
                    sub_441db0(*(eax_6 + 0x30))
                    int32_t var_30_3 = 0xffffffff
                    result = sub_469930(eax_5)
                    
                    if (data_5bb2b8 == 1)
                        void* ebx_1 = data_65aabc
                        
                        if (ebx_1 == 0)
                            goto label_421272
                        
                        int32_t edx_7 = 0
                        void* eax_10 = sub_41b9a0() + 0x20
                        
                        while (*(eax_10 - 4) != 1 || *eax_10 != *(ebx_1 + ecx_14 + 0x28))
                            edx_7 += 1
                            eax_10 += 0x2c
                            
                            if (edx_7 s>= 5)
                                break
                        
                        int32_t var_28_6 = 0xffffffff
                        sub_469930(eax_5)
                        ebx = arg1
                    
                    int32_t eax_12 = sub_41ac90(*(eax_6 + 0x28))
                    
                    if (eax_12 != 1 && eax_12 != 2)
                        result = eax_12 - 3
                        
                        if (eax_12 != 3)
                            var_28_8 = "FriendsUpdate"
                            var_2c_1 = 0xaf2
                            var_30_1 = "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp"
                            ecx_2 = "Halt"
                            break
                    
                    int32_t var_28_7 = 0xffffffff
                    result = sub_469930(eax_5)
            else
                uint32_t var_28_3 = edi_2
                result = sub_469930(ebx)
            
            edi_2 += 1
            
            if (edi_2 s>= eax_3)
                return result
    else
    label_421272:
        var_28_8 = "GetClient"
        var_2c_1 = 0x74
        var_30_1 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_2 = "gClient"
    
    sub_44e4d0(result, &data_5559b1, ecx_2, var_30_1, var_2c_1, var_28_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
