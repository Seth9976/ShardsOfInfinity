// 函数名称: sub_4a1e80
// 虚拟地址: 0x4a1e80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4a1e80(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543c70
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* const var_14 = arg1
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* edi = arg1
    int32_t eax_3 = edi[0x52]
    
    if (eax_3 s<= 0)
        sub_44e4d0(eax_3, &data_5559b1, "emitResults.currentFunctionStackDepth > 0", 
            "c:\ax2017\engine\materialfndef.cpp", 0x36d, "EmitFnPostlude")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    char* const ecx = &data_5559b1
    char* eax_5 = edi[edi[eax_3 + 0x41] * 2 + 1]
    
    if (eax_5 != 0)
        ecx = eax_5
    
    char* const var_24 = ecx
    int32_t var_8_1 = 0
    sub_4a1db0(edi, sub_44f980(&var_14, "float4 %s(float2 arg_uv)\n{\n"))
    int32_t var_8_2 = 1
    
    if (data_cdf414 != 0)
        char* eax_7 = var_14
        
        if (eax_7 != 0 && *eax_7 != 0)
            char* eax_8 = sub_44f000(&var_14)
            int32_t temp0_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    int32_t var_8_3 = 0xffffffff
    sub_44f240(&var_14, "\treturn retval;\n}\n")
    int32_t var_8_4 = 2
    char* const edx_3 = &data_5559b1
    int32_t eax_9 = edi[0x52]
    
    if (eax_9 s<= 0)
        sub_44e4d0(eax_9, &data_5559b1, "emitResults.currentFunctionStackDepth > 0", 
            "c:\ax2017\engine\materialfndef.cpp", 0x35f, "EmitFnEndLine")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    char* const esi = var_14
    
    if (esi != 0)
        edx_3 = esi
    
    sub_44f620(&edi[(edi[eax_9 + 0x41] + 1) * 2], edx_3)
    int32_t var_8_5 = 3
    
    if (data_cdf414 != 0 && esi != 0 && *esi != 0)
        char* eax_12 = sub_44f000(&var_14)
        int32_t temp1_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_45d050(eax_12, *(eax_12 + 0xc) + 0x10)
            var_14 = &data_5559b1
    
    int32_t var_8_6 = 0xffffffff
    int32_t eax_13 = edi[0x52]
    
    if (eax_13 s> 0)
        edi[0x52] = eax_13 - 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_13 - 1
    
    sub_44e4d0(eax_13, &data_5559b1, "emitResults.currentFunctionStackDepth > 0", 
        "c:\ax2017\engine\materialfndef.cpp", 0x352, "EmitFnEnd")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
