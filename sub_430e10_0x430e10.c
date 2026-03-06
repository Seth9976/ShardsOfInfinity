// 函数名称: sub_430e10
// 虚拟地址: 0x430e10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_430e10(int32_t arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541d00
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* edi = arg2
    int32_t* var_1c = edi
    void* esi = nullptr
    int32_t edx = 2
    
    do
        int32_t ecx_1
        ecx_1.b = *edi s>= edx - 2
        *(data_65acbc + (esi << 3)) = _mm_cvtepi32_pd(zx.q((ecx_1 << 1) + 0xffffffff))
        int32_t ecx_3
        ecx_3.b = *edi s>= edx - 1
        *(data_65acbc + (esi << 3) + 8) = _mm_cvtepi32_pd(zx.q((ecx_3 << 1) + 0xffffffff))
        int32_t eax_7
        eax_7.b = *edi s>= edx
        *(data_65acbc + (esi << 3) + 0x10) = _mm_cvtepi32_pd(zx.q((eax_7 << 1) + 0xffffffff))
        int32_t ecx_5
        ecx_5.b = *edi s>= edx + 1
        *(data_65acbc + (esi << 3) + 0x18) = _mm_cvtepi32_pd(zx.q((ecx_5 << 1) + 0xffffffff))
        int32_t ecx_7
        ecx_7.b = *edi s>= edx + 2
        *(data_65acbc + (esi << 3) + 0x20) = _mm_cvtepi32_pd(zx.q((ecx_7 << 1) + 0xffffffff))
        int32_t ecx_9
        ecx_9.b = *edi s>= edx + 3
        *(data_65acbc + (esi << 3) + 0x28) = _mm_cvtepi32_pd(zx.q((ecx_9 << 1) + 0xffffffff))
        int32_t ecx_11
        ecx_11.b = *edi s>= edx + 4
        *(data_65acbc + (esi << 3) + 0x30) = _mm_cvtepi32_pd(zx.q((ecx_11 << 1) + 0xffffffff))
        int32_t ecx_13
        ecx_13.b = *edi s>= edx + 5
        *(data_65acbc + (esi << 3) + 0x38) = _mm_cvtepi32_pd(zx.q((ecx_13 << 1) + 0xffffffff))
        int32_t ecx_15
        ecx_15.b = *edi s>= edx + 6
        *(data_65acbc + (esi << 3) + 0x40) = _mm_cvtepi32_pd(zx.q((ecx_15 << 1) + 0xffffffff))
        int32_t ecx_17
        ecx_17.b = *edi s>= edx + 7
        edx += 0xa
        *(data_65acbc + (esi << 3) + 0x48) = _mm_cvtepi32_pd(zx.q((ecx_17 << 1) + 0xffffffff))
        esi += 0xa
    while (edx - 2 s< 0x14)
    
    int32_t eax_25 = edi[0x859]
    int32_t ecx_19 = edi[0x641]
    void* var_18 = esi
    void* i_3 = ecx_19 - eax_25 * 0xa
    void* eax_28 = esi + i_3
    
    if (eax_28 s>= 0x1000)
        sub_44e4d0(eax_28, &data_5559b1, "curInput + end < MAX_INPUTS", 
            "c:\ax2017\jams\shards\code\shardsai.cpp", 0xf8e, "AddInputRangeCards")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* ebx = 5
    
    if (i_3 s> 5)
        eax_28 = i_3 - 5
        
        if (eax_28 s>= 4)
            void* edx_1 = &edi[0x31]
            int32_t i_4 = ((i_3 - 9) u>> 2) + 1
            void* eax_29 = (i_4 << 2) + 5
            int32_t i
            
            do
                edx_1 += 0x80
                int32_t eax_30
                eax_30.b = *(edx_1 - 0xa0) == 4
                *(data_65acbc + (esi << 3)) = _mm_cvtepi32_pd(zx.q((eax_30 << 1) + 0xffffffff))
                int32_t eax_33
                eax_33.b = *(edx_1 - 0x80) == 4
                *(data_65acbc + (esi << 3) + 8) = _mm_cvtepi32_pd(zx.q((eax_33 << 1) + 0xffffffff))
                int32_t eax_36
                eax_36.b = *(edx_1 - 0x60) == 4
                *(data_65acbc + (esi << 3) + 0x10) = _mm_cvtepi32_pd(zx.q((eax_36 << 1) + 0xffffffff))
                int32_t eax_39
                eax_39.b = *(edx_1 - 0x40) == 4
                eax_28 = data_65acbc
                *(eax_28 + (esi << 3) + 0x18) = _mm_cvtepi32_pd(zx.q((eax_39 << 1) + 0xffffffff))
                esi += 4
                i = i_4
                i_4 -= 1
            while (i != 1)
            ebx = eax_29
            var_18 = esi
        
        if (ebx s< i_3)
            void* edx_3 = &edi[1 + ebx * 8]
            i_3 -= ebx
            void* i_1
            
            do
                edx_3 += 0x20
                int32_t eax_43
                eax_43.b = *(edx_3 - 0x20) == 4
                eax_28 = data_65acbc
                *(eax_28 + (esi << 3)) = _mm_cvtepi32_pd(zx.q((eax_43 << 1) + 0xffffffff))
                esi += 1
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
            var_18 = esi
    
    int32_t ebx_3 = arg3
    void* i_6 = i_3
    int32_t (* var_38)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_42fdf0
    int32_t var_3c = edi[0x641]
    void var_44
    void* eax_45
    void* ecx_20
    eax_45, ecx_20 = sub_431f00(eax_28, &var_18, i_3, edi, ebx_3, var_44)
    int32_t (* var_38_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_42fdc0
    int32_t var_3c_1 = edi[0x641]
    int32_t var_48_1 = ebx_3
    int32_t* var_4c_1 = edi
    sub_431f00(eax_45, &var_18, ecx_20, var_4c_1, var_48_1)
    int32_t esi_1 = edi[0x859]
    int32_t ecx_21 = edi[0x798]
    
    if (esi_1 s> 1)
        void* edx_6 = &edi[0x7bf]
        int32_t i_5 = esi_1 - 1
        int32_t i_2
        
        do
            int32_t eax_46 = ecx_21
            edx_6 += 0x9c
            ecx_21 = *(edx_6 - 0x9c)
            
            if (eax_46 s> ecx_21)
                ecx_21 = eax_46
            
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
        ebx_3 = arg3
    
    int32_t result = esi_1 + ebx_3
    int32_t ecx_22 = ebx_3
    int32_t var_20_2 = ecx_22
    
    if (ebx_3 s< result)
        do
            int32_t edi_1 = edi[0x641]
            int32_t temp1_1 = mods.dp.d(sx.q(ecx_22), esi_1)
            int32_t var_34 = ecx_22
            int32_t var_38_2 = var_1c[temp1_1 * 0x27 + 0x798]
            int32_t var_3c_2 = 0x32
            int32_t var_40_1 = 1
            int32_t ecx_23 = sub_4323d0(var_1c, &var_18, ecx_22, var_4c_1, var_48_1)
            int32_t var_38_3 = var_1c[temp1_1 * 0x27 + 0x799]
            int32_t var_3c_3 = 0x1e
            int32_t var_40_2 = 0
            int32_t eax_51
            int32_t ecx_24
            eax_51, ecx_24 = sub_4323d0(var_1c, &var_18, ecx_23)
            void* (* var_34_1)(void* arg1, int32_t arg2, int32_t arg3) = sub_430010
            int32_t (* var_38_4)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_42fe20
            int32_t var_3c_4 = edi_1
            int32_t eax_52
            int32_t ecx_25
            eax_52, ecx_25 = sub_432490(eax_51, &var_18, ecx_24, var_1c, temp1_1)
            void* (* var_34_2)(void* arg1, int32_t arg2, int32_t arg3) = sub_430010
            int32_t (* var_38_5)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_42fe60
            int32_t var_3c_5 = edi_1
            int32_t eax_53
            int32_t ecx_26
            eax_53, ecx_26 = sub_432490(eax_52, &var_18, ecx_25, var_1c, temp1_1)
            void* (* var_34_3)(int32_t arg1, int32_t arg2) = sub_42ff90
            int32_t (* var_38_6)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_42fe90
            int32_t var_3c_6 = edi_1
            edi = var_1c
            var_48_1 = temp1_1
            var_4c_1 = edi
            sub_432490(eax_53, &var_18, ecx_26, var_4c_1, var_48_1)
            ecx_22 = var_20_2 + 1
            esi_1 = edi[0x859]
            result = arg3 + esi_1
            var_20_2 = ecx_22
        while (ecx_22 s< result)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
