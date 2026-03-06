// 函数名称: sub_4eb7a0
// 虚拟地址: 0x4eb7a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_4eb7a0(int32_t arg1, PSTR arg2, char* arg3, int32_t arg4 @ edi, int32_t arg5, int32_t* arg6, void** arg7, int32_t* arg8, char arg9)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_54625c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t ebx
    int32_t var_24c = ebx
    int32_t esi
    int32_t var_250 = esi
    struct D3D_SHADER_MACRO defines
    defines.Definition = arg4
    defines.Name = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* pSrcData = arg3
    __alloca_probe_16((arg6[2] << 3) + 0x18)
    int32_t ebx_1 = 2
    struct D3D_SHADER_MACRO* pDefines = &defines
    defines.Name = "HAVE_DX11"
    defines.Definition = &data_5842b4
    char const* const var_250_1 = "HAVE_RIFT"
    void* const var_24c_1 = &data_5842b4
    int32_t* i = *arg6
    
    while (i != 0)
        int32_t* i_2 = i
        char* const ecx = &data_5559b1
        i = i[2]
        char* eax_7 = *i_2
        
        if (eax_7 != 0)
            ecx = eax_7
        
        (&defines)[ebx_1].Name = ecx
        char* const ecx_1 = &data_5559b1
        char* eax_8 = i_2[1]
        
        if (eax_8 != 0)
            ecx_1 = eax_8
        
        var_254
        *(&var_254 + (ebx_1 << 3)) = ecx_1
        ebx_1 += 1
    
    __builtin_memset(&(&defines)[ebx_1], 0, 8)
    struct ID3DBlob* ppErrorMsgs
    char const* const pTarget
    
    if (arg5 != 1)
        if (arg5 != 0)
            ppErrorMsgs = "Dx11CompileShader"
            sub_44e4d0(arg5, &data_5559b1, "Halt", "c:\ax2017\engine\windows\windowsdx11.cpp", 0x9f6, 
                ppErrorMsgs)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        pTarget = "vs_4_0"
    else
        pTarget = "ps_4_0"
    
    void** const include = &data_59bb7c
    struct ID3DBlob ppCode
    struct ID3DBlob ppErrorMsgs_5
    struct ID3DBlob pSrcData_1
    HRESULT esi_2
    
    if (arg9 == 0)
        char* pSrcData_3 = pSrcData
        pSrcData_1 = "memory_shader"
        int32_t eax_9
        
        do
            eax_9.b = *pSrcData_3
            pSrcData_3 = &pSrcData_3[1]
        while (eax_9.b != 0)
        ppErrorMsgs = &ppErrorMsgs_5
        esi_2 = D3DCompile(pSrcData, pSrcData_3 - &pSrcData_3[1], "memory_shader", &defines, &include, 
            arg2, pTarget, 0x1000, 0, &ppCode, ppErrorMsgs)
    else
        struct ID3DBlob* ppErrorMsgs_6
        ppErrorMsgs = sub_4a8d30(&ppErrorMsgs_6, pSrcData)
        int32_t var_8_1 = 0
        struct ID3DBlob* ppErrorMsgs_1 = ppErrorMsgs_6
        ppErrorMsgs = ppErrorMsgs_1
        
        if (ppErrorMsgs_1 != 0 && ppErrorMsgs_1->vtable.b != 0)
            char* eax_10 = sub_44f000(&ppErrorMsgs)
            *(eax_10 + 4) += 1
        
        char* const pSrcData_6
        sub_4a9d10(&pSrcData_6)
        var_8_1.b = 1
        char* pSrcData_5 = pSrcData_6
        pSrcData_1 = pSrcData_5
        
        if (pSrcData_5 != 0 && *pSrcData_5 != 0)
            char* eax_11 = sub_44f000(&pSrcData_1)
            *(eax_11 + 4) += 1
        
        var_8_1.b = 2
        int32_t* ecx_7 = data_ce1794
        ppErrorMsgs = &pSrcData_1
        sub_44f510(ecx_7, ppErrorMsgs)
        var_8_1.b = 3
        int32_t* eax_12
        
        if (data_cdf414 != 0 && pSrcData_5 != 0 && *pSrcData_5 != 0)
            eax_12 = sub_44f000(&pSrcData_1)
            int32_t temp0_1 = eax_12[1]
            eax_12[1] -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_12, eax_12[3] + 0x10)
        
        char* pSrcData_2 = pSrcData
        var_8_1.b = 1
        pSrcData_1 = pSrcData
        
        do
            eax_12.b = *pSrcData_2
            pSrcData_2 = &pSrcData_2[1]
        while (eax_12.b != 0)
        
        ppErrorMsgs = pSrcData_2 - &pSrcData_2[1]
        int16_t fileName[0x104]
        _mbstowcs(&fileName, pSrcData, ppErrorMsgs)
        void* ecx_11 = &pSrcData[1]
        char i_1
        
        do
            i_1 = *pSrcData
            pSrcData = &pSrcData[1]
        while (i_1 != 0)
        
        if ((pSrcData - ecx_11) * 2 u>= 0x208)
            ___report_rangecheckfailure()
            noreturn
        
        fileName[pSrcData - ecx_11] = 0
        ppErrorMsgs = &ppErrorMsgs_5
        esi_2 = D3DCompileFromFile(&fileName, pDefines, &include, arg2, pTarget, 0x1000, 0, &ppCode, 
            ppErrorMsgs)
        sub_44f240(&pDefines, &data_5559b1)
        var_8_1.b = 4
        int32_t* ecx_13 = data_ce1794
        ppErrorMsgs = &pDefines
        sub_44f510(ecx_13, ppErrorMsgs)
        var_8_1.b = 5
        
        if (data_cdf414 != 0)
            struct D3D_SHADER_MACRO* pDefines_1 = pDefines
            
            if (pDefines_1 != 0 && pDefines_1->Name.b != 0)
                char* eax_15 = sub_44f000(&pDefines)
                int32_t temp1_1 = *(eax_15 + 4)
                *(eax_15 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
        
        var_8_1.b = 6
        
        if (data_cdf414 != 0)
            char* pSrcData_7 = pSrcData_6
            
            if (pSrcData_7 != 0 && *pSrcData_7 != 0)
                char* eax_16 = sub_44f000(&pSrcData_6)
                int32_t temp2_1 = *(eax_16 + 4)
                *(eax_16 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_45d050(eax_16, *(eax_16 + 0xc) + 0x10)
                    pSrcData_6 = &data_5559b1
        
        int32_t var_8_2 = 7
        
        if (data_cdf414 != 0)
            struct ID3DBlob* ppErrorMsgs_7 = ppErrorMsgs_6
            
            if (ppErrorMsgs_7 != 0 && ppErrorMsgs_7->vtable.b != 0)
                char* eax_17 = sub_44f000(&ppErrorMsgs_6)
                int32_t temp3_1 = *(eax_17 + 4)
                *(eax_17 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_45d050(eax_17, *(eax_17 + 0xc) + 0x10)
                    ppErrorMsgs_6 = &data_5559b1
        
        int32_t var_8_3 = 0xffffffff
    
    char* result
    
    if (esi_2 s>= 0)
        struct ID3DBlob ppErrorMsgs_4 = ppErrorMsgs_5
        
        if (ppErrorMsgs_4 != 0)
            int32_t eax_20 = *ppErrorMsgs_4
            ppErrorMsgs = ppErrorMsgs_4
            (*(eax_20 + 8))(ppErrorMsgs)
        
        struct ID3DBlob eax_21 = ppCode
        ppErrorMsgs = eax_21
        char* eax_22 = (*(*eax_21 + 0xc))(ppErrorMsgs)
        struct ID3DBlob ecx_26 = ppCode
        ppErrorMsgs = ecx_26
        struct ID3DBlob* ppErrorMsgs_3 = (*(*ecx_26 + 0x10))(ppErrorMsgs)
        *arg8 = ppErrorMsgs_3
        char* eax_24 = sub_45cd70(ppErrorMsgs_3)
        ppErrorMsgs = ppErrorMsgs_3
        *arg7 = eax_24
        sub_51d5b0(eax_24, eax_22, ppErrorMsgs)
        result.b = 1
    else
        struct ID3DBlob ppErrorMsgs_2 = ppErrorMsgs_5
        ppErrorMsgs = ppErrorMsgs_2
        ppErrorMsgs = (*(*ppErrorMsgs_2 + 0xc))(ppErrorMsgs)
        struct ID3DBlob pSrcData_4 = pSrcData_1
        sub_44e260("Dx11 compile error on %s:\n%s\n")
        result.b = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
