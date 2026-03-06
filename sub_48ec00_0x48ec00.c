// 函数名称: sub_48ec00
// 虚拟地址: 0x48ec00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_48ec00(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5434e8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_64 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int32_t performanceCount_1 = performanceCount
    int32_t* result_1
    int32_t* result_2 = result_1
    char* var_24
    int32_t* var_68_1 = &var_24
    int32_t** eax_5 = sub_42ce10(&result_1, arg3, 3)
    int32_t var_8_1 = 0
    int32_t* edi_1 = *var_24
    int32_t ecx_3 = edi_1[3] * arg4 + arg5
    
    if (ecx_3 s>= edi_1[0xd])
        sub_44e4d0(eax_5, &data_5559b1, "imageIndex < pTextureData->imageCount", 
            "c:\ax2017\engine\texture.cpp", 0x13d, "TextureLoad")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* eax_7 = edi_1[0xf] + (ecx_3 << 3)
    char ecx_4 = arg5.b
    uint32_t eax_9 = *edi_1 u>> ecx_4
    
    if (eax_9 u< 1)
        eax_9 = 1
    
    uint32_t eax_11 = edi_1[1] u>> ecx_4
    int32_t* ecx_5 = data_ce19b4
    int32_t var_14 = 1
    
    if (eax_11 u< 1)
        eax_11 = 1
    
    int32_t* ebx_1 = arg3
    int32_t var_1c
    char* eax_13 = (*(*ecx_5 + 0x18))(ebx_1, arg2, arg5, arg4, &var_1c, &var_14)
    char* esi_1 = eax_13
    
    if (esi_1 == 0)
        sub_44e4d0(eax_13, &data_5559b1, "pBits", "c:\ax2017\engine\texture.cpp", 0x148, "TextureLoad")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    char* eax_15 = *(var_24 + 0xc)
    var_24 = eax_15
    
    if (eax_15 != 0 && *eax_15 != 0)
        if (var_14 != 1)
            sub_44e4d0(eax_15, &data_5559b1, "divisor == 1", "c:\ax2017\engine\texture.cpp", 0x14e, 
                "TextureLoad")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        void* eax_16 = sub_4dd7f0(eax_15, edi_1[1], *edi_1, edi_1[5])
        sub_51d5b0(esi_1, *(var_24 + 0xc), eax_16)
    else if (edi_1[4] != 8)
        int32_t eax_26 = edi_1[5]
        
        if (eax_26 s< 0xd || (eax_26 s> 0x12 && eax_26 != 0x15))
            int32_t ecx_19 = var_1c
            
            if (ecx_19 == 0)
                sub_44e4d0(eax_26, &data_5559b1, "destPitch != 0", "c:\ax2017\engine\texture.cpp", 
                    0x185, "TextureLoad")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            char* var_54 = esi_1
            uint32_t var_50_1 = eax_9
            int32_t var_48_1 = ecx_19
            uint32_t var_4c_1 = eax_11
            int32_t var_44_1 = eax_26
            int32_t* eax_28 = sub_45cd70(*eax_7)
            uint32_t (* edi_2)[0x4] = eax_28
            int32_t* eax_29
            int32_t ecx_22
            eax_29, ecx_22 = sub_48d990(eax_28, edi_2, ebx_1, nullptr, *eax_7, eax_7[1])
            int32_t var_74_3 = var_14
            
            if (sub_4dee20(eax_29, &var_54, ecx_22, edi_2, *eax_7) == 0)
                char* eax_31 = ebx_1[8]
                char* const ecx_23 = &data_5559b1
                
                if (eax_31 != 0)
                    ecx_23 = eax_31
                
                char* const var_68_10 = ecx_23
                sub_44e260("Failed to read texture %s")
            
            if (edi_2 != 0)
                _aligned_free_base(edi_2)
        else
            if (var_14 != 1)
                sub_44e4d0(eax_26, &data_5559b1, "divisor == 1", "c:\ax2017\engine\texture.cpp", 0x180, 
                    "TextureLoad")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            sub_48d990(eax_7, esi_1, ebx_1, nullptr, *eax_7, eax_7[1])
    else
        if (var_14 != 1)
            sub_44e4d0(eax_15, &data_5559b1, "divisor == 1", "c:\ax2017\engine\texture.cpp", 0x154, 
                "TextureLoad")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (var_1c == 0)
            sub_44e4d0(eax_15, &data_5559b1, "destPitch != 0", "c:\ax2017\engine\texture.cpp", 0x155, 
                "TextureLoad")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        void* eax_18 = sub_4dd730(eax_9, edi_1[5])
        
        if (var_1c != eax_18)
            int32_t* eax_20 = nullptr
            var_24 = nullptr
            int32_t i_1 = 0
            
            if (edi_1[1] s> 0)
                int32_t i
                
                do
                    sub_48d990(eax_20, esi_1, arg3, eax_20, eax_18, eax_7[1])
                    i = i_1 + 1
                    esi_1 = &esi_1[var_1c]
                    eax_20 = var_24 + eax_18
                    var_24 = eax_20
                    i_1 = i
                while (i s< edi_1[1])
            
            ebx_1 = arg3
        else
            void* ecx_8 = *eax_7
            
            if (eax_18 * eax_11 != ecx_8)
                sub_44e4d0(eax_7, &data_5559b1, "mipHeight * sourcePitch == pImage->imageSize", 
                    "c:\ax2017\engine\texture.cpp", 0x15b, "TextureLoad")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            ebx_1 = arg3
            sub_48d990(eax_7, esi_1, ebx_1, nullptr, ecx_8, eax_7[1])
    
    if (sub_45ccc0(&performanceCount_1) s> 0x64)
        char* eax_23 = ebx_1[8]
        char* const esi_2 = &data_5559b1
        
        if (eax_23 != 0)
            esi_2 = eax_23
        
        uint32_t var_68_6 = sub_45ccc0(&performanceCount_1)
        char* const var_6c_4 = esi_2
        sub_44e260("slow loading texture %s %d ms")
    
    (*(*data_ce19b4 + 0x1c))(ebx_1, arg2, arg5, arg4)
    int32_t* result = result_1
    
    if (result != 0)
        result[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
