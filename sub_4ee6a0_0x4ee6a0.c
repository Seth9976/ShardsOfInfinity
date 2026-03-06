// 函数名称: sub_4ee6a0
// 虚拟地址: 0x4ee6a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4ee6a0(int32_t arg1 @ esi, float arg2 @ xmm2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_54633b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    void* ecx
    uint32_t (** edx)[0x4]
    ecx, edx = __alloca_probe(0x8090)
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_24 = eax_2
    int32_t var_2c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    uint32_t (** edi)[0x4] = edx
    uint32_t (** var_807c)[0x4] = edi
    int32_t var_8088 = 0
    int32_t var_8084 = 0
    int32_t var_8080 = 0
    int32_t var_14_1 = 0
    int32_t eax_4 = *(ecx + 4)
    int32_t eax_5 = eax_4 << 4
    uint32_t (* eax_6)[0x4] = sub_45cff0(eax_5)
    int32_t esi_1 = *(ecx + 4)
    void* var_8068 = nullptr
    int32_t var_8084_1 = 0
    int32_t var_8080_1 = eax_4
    uint32_t (* eax_8)[0x4] = sub_45cff0(esi_1 * 0x18)
    void* ecx_4 = ecx
    int32_t edx_1 = 0
    edi[2] = esi_1
    void* esi_2 = nullptr
    *edi = eax_8
    edi[1] = 0
    int32_t eax_9 = *(ecx_4 + 4)
    int32_t var_8060 = 0
    void* var_806c = nullptr
    
    if (eax_9 s> 0)
        void* var_8074_1 = nullptr
        int32_t edi_1 = 0
        
        while (true)
            if (esi_2 s< 0 || edi_1 s>= eax_9)
                sub_44e4d0(eax_9, &data_5559b1, "index >= 0 && index < mSize", 
                    "c:\ax2017\engine\xarray.h", 0xb5, "XArray<struct PackAsset>::operator []")
                
                if (IsDebuggerPresent() != 1)
                    sub_44e680()
                    noreturn
                
                breakpoint
            
            int32_t edx_2 = *ecx_4
            int32_t* ecx_5 = *(esi_2 + edx_2)
            int32_t eax_10 = ecx_5[1]
            
            if (eax_10 == 3)
                if (var_8068 s>= eax_4)
                    sub_44e4d0(var_8068, &data_5559b1, "mSize < mSizeReserved", 
                        "c:\ax2017\engine\xarray.h", 0xa1, "XArray<struct stbrp_rect>::Alloc")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                void* eax_23 = var_8068 + 1
                var_8068 = eax_23
                void* var_8084_3 = eax_23
                int32_t edi_3 = eax_23 * 2
                var_806c = eax_23
                float eax_24
                float edx_7
                eax_24, edx_7 = sub_432570(ecx_5)
                int32_t esi_5 = int.d(sub_453f10(eax_24 + 0.5f))
                float xmm1_4 = 1f / arg2
                int32_t eax_25 = int.d(sub_453f10(edx_7 + 0.5f))
                float xmm0_20 = _mm_cvtepi32_ps(zx.o(esi_5))
                float xmm2_5 = _mm_cvtepi32_ps(zx.o(eax_25)) * xmm1_4
                int16_t esi_6 = (int.d(sub_453f10(xmm0_20 * xmm1_4 + 0.5f))).w
                int16_t eax_26 = (int.d(sub_453f10(xmm2_5 + 0.5f))).w
                (*eax_6)[edi_3 * 2 - 3].w = esi_6 + (arg3 << 1).w
                edx_1 = var_8060
                (*eax_6)[edi_3 * 2 - 4] = edx_1
                *(&(*eax_6)[edi_3 * 2] - 0xa) = eax_26 + (arg3 << 1).w
                edi_1 = edx_1
            else
                if (eax_10 != 0x12)
                    sub_44e4d0(eax_10, &data_5559b1, "Halt", "c:\ax2017\engine\editor\atlasmaker.cpp", 
                        0x475, "AtlasMakerCalcRects")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                if (var_8068 s>= eax_4)
                    sub_44e4d0(var_8068, &data_5559b1, "mSize < mSizeReserved", 
                        "c:\ax2017\engine\xarray.h", 0xa1, "XArray<struct stbrp_rect>::Alloc")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                void* eax_12 = var_8068 + 1
                int32_t* var_30_1 = ecx_5
                var_8068 = eax_12
                var_806c = eax_12
                void* var_8084_2 = eax_12
                void var_80b0
                uint128_t xmm1_1 = *sub_4ee180(&var_80b0, *(esi_2 + edx_2 + 4), ecx_5, &var_80b0, 
                    *(esi_2 + edx_2 + 8), arg4)
                int32_t* eax_16 = ecx
                
                if (edi_1 s>= eax_16[1])
                    sub_44e4d0(eax_16, &data_5559b1, "index >= 0 && index < mSize", 
                        "c:\ax2017\engine\xarray.h", 0xb5, "XArray<struct PackAsset>::operator []")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                int32_t eax_17 = *eax_16
                int32_t xmm0_2 = _mm_bsrli_si128(xmm1_1, 8)
                int32_t xmm0_4 = _mm_bsrli_si128(xmm1_1, 0xc)
                *(eax_17 + esi_2 + 0xc) = xmm1_1
                float xmm1_3 = 1f / arg2
                int32_t ecx_7 = xmm0_4 - _mm_bsrli_si128(xmm1_1, 4)
                float xmm0_6 = _mm_cvtepi32_ps(zx.o(xmm0_2 - xmm1_1))
                float xmm2_2 = _mm_cvtepi32_ps(zx.o(ecx_7)) * xmm1_3
                int16_t esi_3 = (int.d(sub_453f10(xmm0_6 * xmm1_3 + 0.5f))).w
                int16_t eax_21 = (int.d(sub_453f10(xmm2_2 + 0.5f))).w + (arg3 << 1).w
                edx_1 = eax_12 << 4
                *(edx_1 + eax_6 - 0x10) = edi_1
                *(edx_1 + eax_6 - 0xc) = esi_3 + (arg3 << 1).w
                *(edx_1 + eax_6 - 0xa) = eax_21
            
            ecx_4 = ecx
            edi_1 += 1
            esi_2 = var_8074_1 + 0x1c
            var_8060 = edi_1
            var_8074_1 = esi_2
            eax_9 = *(ecx_4 + 4)
            
            if (edi_1 s< eax_9)
                continue
            
            edi = var_807c
            esi_2 = var_806c
            break
    
    int32_t result_1 = 0
    int32_t result
    
    while (true)
        void* var_30_2 = ecx_4
        void var_8028
        void* var_34_2 = &var_8028
        void var_8058
        sub_4ec000(&var_8028, edx_1, &var_8058, ecx_4)
        int32_t eax_29
        eax_29, edx_1 = sub_4ec450(0xffff, eax_6, &var_8058, esi_2)
        ecx_4 = nullptr
        int32_t eax_30 = 0
        void* var_8074_2 = nullptr
        int32_t var_8060_2 = 0
        
        if (esi_2 s> 0)
            uint32_t (* var_8070_1)[0x4] = eax_6
            edx_1 = &(*eax_6)[2]
            int32_t var_805c_1 = edx_1
            
            while (true)
                if (eax_30 s< 0 || eax_30 s>= var_8068)
                    sub_44e4d0(eax_30, &data_5559b1, "index >= 0 && index < mSize", 
                        "c:\ax2017\engine\xarray.h", 0xb5, "XArray<struct stbrp_rect>::operator []")
                    
                    if (IsDebuggerPresent() != 1)
                        sub_44e680()
                        noreturn
                    
                    breakpoint
                
                if (*(edx_1 + 4) == 0)
                    if (ecx_4 s< 0 || ecx_4 s>= var_8068)
                        sub_44e4d0(eax_30, &data_5559b1, "index >= 0 && index < mSize", 
                            "c:\ax2017\engine\xarray.h", 0xb5, "XArray<struct stbrp_rect>::operator []")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    ecx_4 += 1
                    var_8074_2 = ecx_4
                    *var_8070_1 = *(edx_1 - 8)
                    var_8070_1 = &var_8070_1[1]
                else
                    int32_t eax_31 = edi[1]
                    
                    if (eax_31 s>= edi[2])
                        sub_44e4d0(eax_31, &data_5559b1, "mSize < mSizeReserved", 
                            "c:\ax2017\engine\xarray.h", 0xa1, "XArray<struct PackLoc>::Alloc")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    edi[1] = eax_31 + 1
                    uint32_t (* esi_11)[0x4] = *var_807c
                    int32_t edi_4 = (eax_31 + 1) * 3
                    (*esi_11)[edi_4 * 2 - 6] = *(edx_1 - 8)
                    uint32_t ecx_12 = zx.d(*edx_1)
                    uint32_t edx_11 = zx.d(*(edx_1 + 2))
                    int32_t var_8094_1 = arg3 + edx_11
                    ecx_4 = var_8074_2
                    int32_t var_8090_2 = zx.d(*(var_805c_1 - 4)) - arg3 + ecx_12
                    edx_1 = var_805c_1
                    int32_t var_808c_2 = zx.d(*(var_805c_1 - 2)) - arg3 + edx_11
                    (*esi_11)[edi_4 * 2 - 1] = result_1
                    eax_30 = var_8060_2
                    *(esi_11 + (edi_4 << 3) - 0x14) = (arg3 + ecx_12).o
                
                edi = var_807c
                eax_30 += 1
                edx_1 += 0x10
                var_8060_2 = eax_30
                var_805c_1 = edx_1
                
                if (eax_30 s>= var_806c)
                    break
                
                continue
        
        esi_2 = ecx_4
        result = result_1 + 1
        var_806c = esi_2
        result_1 = result
        
        if (eax_29 != 0)
            break
        
        edi = var_807c
    
    int32_t var_14_2 = 1
    
    if (data_cdf414 != 0 && eax_6 != 0)
        sub_45d050(eax_6, eax_5)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(arg1 ^ &__saved_ebp)
    return result
}
