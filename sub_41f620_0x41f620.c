// 函数名称: sub_41f620
// 虚拟地址: 0x41f620
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_41f620(uint32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t edi = arg1
    sub_472550(edi, sub_41f0e0)
    uint32_t ebx = 4
    uint32_t eax_3 = *(data_65ac38 + 0xb20)
    
    if (eax_3 s< 4)
        ebx = eax_3
    
    int32_t eax_4
    eax_4.b = ebx s< 4
    int32_t eax_5 = eax_4 + ebx
    sub_469bf0(eax_5, &data_5bb71c, edi, eax_5, 0xffffffff)
    void* result = sub_42aaa0(*(data_65ac38 + 0xb24))
    uint32_t esi = 0
    void* result_1 = result
    char const* const var_c0_3
    int32_t var_bc_2
    char const* const var_b8_5
    void var_98
    char* ecx_14
    
    if (ebx s> 0)
        result = &var_98
        int32_t ebx_1 = 0
        void* result_2 = &var_98
        
        while (true)
            result = sub_41b7f0(result, edi, "tbl_profiles", esi)
            void* result_4 = result
            
            if (ebx_1 s>= 0)
                result = data_65ac38
                
                if (esi s< *(result + 0xb20))
                    void* result_5 = result
                    result += ebx_1
                    void* result_3 = result
                    
                    if (result_5 != neg.d(ebx_1))
                        sub_469cf0(result, &data_5bb730, result_4, result, 0xffffffff)
                        result = sub_441db0(*(result_3 + 8))
                        
                        if (result_4 == 0)
                            var_b8_5 = "DataArray<struct UI2>::DataArrayGet"
                            var_bc_2 = 0x6c
                            var_c0_3 = "c:\ax2017\engine\dataarray.h"
                            ecx_14 = "id != DATAID_NULL"
                            goto label_41f848
                        
                        uint32_t ecx_8 = zx.d(result_4.w)
                        
                        if (ecx_8 u< data_5c99a4)
                            void* ecx_10 = ecx_8 * 0x1008 + data_5c99a0
                            
                            if (*(ecx_10 + 0x1004) == result_4)
                                sub_469800(result, result, ecx_10, 0x3f800000, 0xffffffff)
                                
                                if (result_3 == result_1)
                                    int32_t var_b8_2 = 0xffffffff
                                    sub_469930(result_4)
                                
                                esi += 1
                                edi = arg1
                                result = result_2 + 0x24
                                ebx_1 += 0x2c8
                                result_2 = result
                                
                                if (esi s>= ebx)
                                    break
                                
                                continue
                        
                        var_b8_5 = "DataArray<struct UI2>::DataArrayGet"
                        var_bc_2 = 0x6d
                        var_c0_3 = "c:\ax2017\engine\dataarray.h"
                        ecx_14 = "DataArrayTryToGet(id) != NULL"
                        goto label_41f848
            
            var_b8_5 = "GetProfileBySlot"
            var_bc_2 = 0x1f0
            var_c0_3 = "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp"
            ecx_14 = "retval"
            goto label_41f848
    
    if (ebx s>= 4)
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return result
    
    int32_t eax_9 = sub_41b7f0(&var_98 + ebx * 0x24, edi, "tbl_profiles", ebx)
    result = sub_47a240(ebx)
    
    if (result == eax_9)
        if (eax_9 != 0)
            int32_t var_b8_6 = 0xffffffff
            result = sub_469930(eax_9)
        
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return result
    
    var_b8_5 = "UI2Selector::LookupForce"
    var_bc_2 = 0x157
    var_c0_3 = "c:\ax2017\engine\ui2.h"
    ecx_14 = "UI2GetHandle(arg_root, arg_name, arg_idx) == retval"
    label_41f848:
    sub_44e4d0(result, &data_5559b1, ecx_14, var_c0_3, var_bc_2, var_b8_5)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
