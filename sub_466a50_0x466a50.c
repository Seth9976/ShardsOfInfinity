// 函数名称: sub_466a50
// 虚拟地址: 0x466a50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_466a50(int32_t arg1, int32_t arg2, uint32_t arg3, float arg4 @ xmm3, char* arg5, int32_t arg6, float arg7, void* arg8, int32_t arg9, int32_t arg10)
{
    // 第一条实际指令: uint32_t esi = arg3
    uint32_t esi = arg3
    int32_t edi = 0
    *(esi + 0x754) = arg6
    *(esi + 0x784) = arg2
    int32_t var_10
    
    if (*(esi + 0x774) s> 0)
        int32_t eax_1 = 0
        var_10 = 0
        
        while (true)
            char const* const var_2c_4
            int32_t var_28_2
            char const* const var_24_2
            char* ecx_23
            
            if (edi s< 0 || edi s>= *(esi + 0x774))
                var_24_2 = "XArray<struct UI2StateEffect>::operator []"
                var_28_2 = 0xb5
                var_2c_4 = "c:\ax2017\engine\xarray.h"
                ecx_23 = "index >= 0 && index < mSize"
            else
                int32_t* ebx_2 = *(esi + 0x770) + eax_1
                int32_t eax_2 = *ebx_2
                
                if (eax_2 == 0)
                    arg3 = sub_469e00(esi, ebx_2[3])
                label_466ae1:
                    float xmm0_2 = ebx_2[4] f- arg7
                    ebx_2[4] = xmm0_2
                    int32_t eax_9
                    
                    if (0f < xmm0_2)
                        eax_9 = var_10
                    label_466b40:
                        edi += 1
                        eax_1 = eax_9 + 0x18
                        var_10 = eax_1
                        
                        if (edi s>= *(esi + 0x774))
                            break
                        
                        continue
                    else
                        eax_1 = *(esi + 0x774)
                        
                        if (edi s< eax_1)
                            if (eax_1 - edi - 1 s> 0)
                                char* ecx_2 = var_10 + *(esi + 0x770)
                                arg3 = sub_51dd40(ecx_2, &ecx_2[0x18], (eax_1 - edi - 1) * 0x18)
                                eax_1 = *(esi + 0x774)
                            
                            edi -= 1
                            *(esi + 0x774) = eax_1 - 1
                            eax_9 = var_10 - 0x18
                            goto label_466b40
                        
                        var_24_2 = "XArray<struct UI2StateEffect>::RemoveAt"
                        var_28_2 = 0xdc
                    var_2c_4 = "c:\ax2017\engine\xarray.h"
                    ecx_23 = "index >= 0 && index < mSize"
                else
                    eax_1 = eax_2 - 1
                    
                    if (eax_2 == 1)
                        arg3 = esi
                        sub_469800(eax_1, ebx_2[5], arg3, 0x3f800000, 0xfffffc18)
                        goto label_466ae1
                    
                    var_24_2 = "UIStateEffectsUpdate"
                    var_28_2 = 0x37dd
                    var_2c_4 = "c:\ax2017\engine\ui2.cpp"
                    ecx_23 = "Halt"
            
            sub_44e4d0(eax_1, &data_5559b1, ecx_23, var_2c_4, var_28_2, var_24_2)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    *(esi + 0x780) = 0
    int32_t edi_1
    
    if (*(esi + 0x75c) != 0)
        int32_t edx_5
        
        if (arg9 != 0)
            struct _EXCEPTION_REGISTRATION_RECORD** eax_13 = sub_47b6d0(esi + 0x764)
            
            if (*(esi + 0x76c) == 0)
                eax_13 = sub_45cff0(0x3000)
                *(esi + 0x764) = eax_13
                *(esi + 0x768) = 0
                *(esi + 0x76c) = 0x200
            
            sub_464110(sub_464110(eax_13, arg8, esi + 0x764, arg9), *(esi + 0x758), esi + 0x764, 
                *(esi + 0x75c))
            *(esi + 0x77c) = *(esi + 0x764)
            edx_5 = *(esi + 0x768)
        else
            *(esi + 0x77c) = *(esi + 0x758)
            edx_5 = *(esi + 0x75c)
        
        *(esi + 0x780) = edx_5
        int32_t eax_16
        eax_16, arg3 = sub_465fe0(*(esi + 0x77c), edx_5)
        edi_1 = eax_16
    else
        edi_1 = arg10
        *(esi + 0x77c) = arg8
        *(esi + 0x780) = arg9
    
    uint32_t var_28_3 = arg3
    char var_2c_2 = (*(esi + 0x780)).b
    char var_12 = 0
    char eax_18 = sub_461b10(&var_12, edi_1, esi, *(esi + 0x77c), var_2c_2, arg7, &var_12)
    
    if (eax_18 != 0)
        int32_t* eax_19
        eax_19.b = sub_45d570(*(esi + 0x77c), *(esi + 0x780)) != 0
        *(esi + 9) = eax_19.b
    
    int32_t i_4 = 0x54
    char* ecx_8 = arg5
    int32_t i
    
    do
        char eax_20 = *ecx_8
        ecx_8 = &ecx_8[1]
        edi_1 = edi_1 u>> 8 ^ *(((zx.d(eax_20) ^ zx.d(edi_1.b)) << 2) + &data_5720f8)
        i = i_4
        i_4 -= 1
    while (i != 1)
    int32_t arg_c
    int32_t* ecx_9 = &arg_c
    int32_t i_5 = 4
    int32_t i_1
    
    do
        char eax_23 = *ecx_9
        ecx_9 += 1
        edi_1 = edi_1 u>> 8 ^ *(((zx.d(eax_23) ^ zx.d(edi_1.b)) << 2) + &data_5720f8)
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)
    int32_t arg_10
    int32_t* ecx_10 = &arg_10
    int32_t i_6 = 4
    int32_t i_2
    
    do
        char eax_26 = *ecx_10
        ecx_10 += 1
        edi_1 = edi_1 u>> 8 ^ *(((zx.d(eax_26) ^ zx.d(edi_1.b)) << 2) + &data_5720f8)
        i_2 = i_6
        i_6 -= 1
    while (i_2 != 1)
    uint32_t eax_28
    eax_28.b = edi_1 != *(esi + 0x650)
    *(esi + 0x650) = edi_1
    eax_28.b |= eax_18
    eax_28.b |= var_12
    int32_t* var_24_7 = ecx_10
    var_10.b = eax_28.b
    uint32_t eax_29 = zx.d(*(esi + 9))
    sub_4658d0(eax_29, arg5, esi, arg4, arg_c, arg_10, eax_29.b)
    int32_t eax_30 = *(esi + 0x69c)
    
    if (eax_30 == 8)
        sub_466640(esi, arg7)
        eax_30 = *(esi + 0x69c)
    
    if (eax_30 == 9)
        sub_4662f0(esi, arg7)
        eax_30 = *(esi + 0x69c)
    
    if (eax_30 == 7)
        eax_30 = *(esi + 0x63c) * 0x208
        int32_t edi_5 = *(eax_30 + esi + 0xfc)
        int32_t* ecx_14 = *(eax_30 + esi + 0xf8)
        
        if (edi_5 != 0)
            void* ebx_5 = sub_4b6d20(*(esi + 0x690))
            
            if (ebx_5 == 0)
                char** eax_32 = sub_4b6020(ecx_14)
                ebx_5 = eax_32
                sub_4ba8f0(eax_32, edi_5, ebx_5, 0)
            
            int32_t* ecx_18 = *(ebx_5 + 0x2c)
            
            if (ecx_18 != 0)
                sub_4ba5b0(ecx_18)
            
            int32_t* i_3 = *(ebx_5 + 0x38)
            
            while (i_3 != 0)
                int32_t* i_7 = i_3
                i_3 = i_3[4]
                sub_4b5fc0(ebx_5, i_7)
            
            sub_4660e0(esi)
            eax_30 = *(ebx_5 + 0x68)
            *(esi + 0x690) = eax_30
    
    void* ecx_21 = *(esi + 0x680)
    
    if (ecx_21 != 0)
        eax_30 = sub_49a150(ecx_21, arg7)
    
    sub_465640(eax_30, *(esi + 0x77c), esi, arg7, *(esi + 0x780), var_10.b)
    int32_t result = *(esi + 0x654)
    
    if (result s> 0)
        result -= 1
        *(esi + 0x654) = result
    
    return result
}
