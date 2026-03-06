// 函数名称: sub_4d2e30
// 虚拟地址: 0x4d2e30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_4d2e30(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_3 = *(arg3 + *arg2)
    int32_t var_c = eax_3
    int32_t ecx
    
    if (arg4 s>= 0)
        eax_3 = arg2[4]
        ecx = *(arg3 + eax_3)
    
    int32_t var_24
    char const* const ecx_1
    
    if (arg4 s< 0 || arg4 s>= ecx)
        char const* const var_20_5 = "DefinitionVariableArrayMoveItem"
        var_24 = 0xb0
        ecx_1 = "currentPosition >= 0 && currentPosition < count"
    else
        eax_3 = arg5
        
        if (eax_3 s< 0 || eax_3 s>= ecx)
            char const* const var_20_4 = "DefinitionVariableArrayMoveItem"
            var_24 = 0xb1
            ecx_1 = "newPosition >= 0 && newPosition < count"
        else
            if (eax_3 != arg4)
                void* eax_4 = sub_48acc0(arg2[6])
                char* esi_2 = eax_4 * arg4 + var_c
                char* edi_3 = eax_4 * arg5 + var_c
                __alloca_probe_16(eax_4)
                int32_t __saved_edi
                sub_51d5b0(&__saved_edi, esi_2, eax_4)
                char* var_28_1
                char* var_24_2
                void* var_20_2
                
                if (esi_2 u<= edi_3)
                    var_20_2 = edi_3 - esi_2
                    var_24_2 = esi_2 + eax_4
                    var_28_1 = esi_2
                else
                    var_20_2 = esi_2 - edi_3
                    var_24_2 = edi_3
                    var_28_1 = edi_3 + eax_4
                
                sub_51d5b0(var_28_1, var_24_2, var_20_2)
                char* result = sub_51d5b0(edi_3, &__saved_edi, eax_4)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return result
            
            char const* const var_20 = "DefinitionVariableArrayMoveItem"
            var_24 = 0xb2
            ecx_1 = "newPosition != currentPosition"
    
    sub_44e4d0(eax_3, &data_5559b1, ecx_1, "c:\ax2017\engine\defeditor.cpp", var_24, 
        "DefinitionVariableArrayMoveItem")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
