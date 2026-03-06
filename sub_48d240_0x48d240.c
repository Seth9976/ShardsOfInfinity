// 函数名称: sub_48d240
// 虚拟地址: 0x48d240
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_48d240(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5432e0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_48d180(arg1)
    char* eax_3 = arg1[8]
    int32_t* esi = data_cdf454
    char* const ecx = &data_5559b1
    
    if (eax_3 != 0)
        ecx = eax_3
    
    int32_t eax_4 = sub_4950a0(ecx, 0)
    int32_t* edi = nullptr
    int32_t ecx_2 = esi[1] & eax_4
    int32_t eax_5 = *esi
    int32_t* esi_1 = *(eax_5 + (ecx_2 << 2))
    int32_t* eax_6 = eax_5 + (ecx_2 << 2)
    int32_t* var_18 = eax_6
    
    if (esi_1 != 0)
        char* ebx_2 = arg1[8]
        
        while (true)
            char* eax_7 = *esi_1
            char* const ecx_3 = &data_5559b1
            
            if (eax_7 != 0)
                ecx_3 = eax_7
            
            char* const eax_8 = &data_5559b1
            
            if (ebx_2 != 0)
                eax_8 = ebx_2
            
            while (true)
                char edx_1 = *eax_8
                char temp2_1 = *ecx_3
                bool c_1 = edx_1 u< temp2_1
                
                if (edx_1 == temp2_1)
                    if (edx_1 == 0)
                        eax_6 = nullptr
                        break
                    
                    edx_1 = eax_8[1]
                    char temp3_1 = ecx_3[1]
                    c_1 = edx_1 u< temp3_1
                    
                    if (edx_1 == temp3_1)
                        eax_8 = &eax_8[2]
                        ecx_3 = &ecx_3[2]
                        
                        if (edx_1 != 0)
                            continue
                        
                        eax_6 = nullptr
                        break
                
                eax_6 = sbb.d(eax_8, eax_8, c_1) | 1
                break
            
            if (eax_6 == 0)
                int32_t eax_10 = esi_1[2]
                
                if (edi != 0)
                    edi[2] = eax_10
                else
                    *var_18 = eax_10
                
                int32_t var_8_1 = 0
                
                if (data_cdf414 != 0)
                    char* eax_11 = *esi_1
                    
                    if (eax_11 != 0 && *eax_11 != 0)
                        char* eax_12 = sub_44f000(esi_1)
                        int32_t temp4_1 = *(eax_12 + 4)
                        *(eax_12 + 4) -= 1
                        
                        if (temp4_1 == 1)
                            sub_45d050(eax_12, *(eax_12 + 0xc) + 0x10)
                            *esi_1 = &data_5559b1
                
                int32_t var_8_2 = 0xffffffff
                sub_45d050(esi_1, 0xc)
                void* edi_1 = data_cdf454
                esi[2] -= 1
                int32_t* i_2 = *(edi_1 + 0x14)
                int32_t* i_1 = *(edi_1 + 0x10)
                
                if (i_1 != 0)
                    int32_t* i
                    
                    do
                        i = *i_1
                        void* edx_4 = &i_1[1]
                        i_2 = i_1
                        i_1 = i
                        
                        if (arg1 u>= edx_4)
                            i_2 = &i_2[1 + i_2 * 9]
                            
                            if (arg1 u< i_2)
                                int32_t eax_17
                                int32_t edx_5
                                edx_5:eax_17 = sx.q(arg1 - edx_4)
                                i_2 = divs.dp.d(edx_5:eax_17, 0x24)
                                
                                if (mods.dp.d(edx_5:eax_17, 0x24) == 0)
                                    *(edi_1 + 0x18) -= 1
                                    int32_t var_8_3 = 1
                                    
                                    if (data_cdf414 != 0)
                                        char* eax_18 = arg1[8]
                                        
                                        if (eax_18 != 0 && *eax_18 != 0)
                                            char* eax_19 = sub_44f000(&arg1[8])
                                            int32_t temp5_1 = *(eax_19 + 4)
                                            *(eax_19 + 4) -= 1
                                            
                                            if (temp5_1 == 1)
                                                sub_45d050(eax_19, *(eax_19 + 0xc) + 0x10)
                                                arg1[8] = &data_5559b1
                                    
                                    int32_t var_8_4 = 2
                                    
                                    if (data_cdf414 != 0)
                                        char* eax_20 = arg1[3]
                                        
                                        if (eax_20 != 0 && *eax_20 != 0)
                                            char* eax_21 = sub_44f000(&arg1[3])
                                            int32_t temp6_1 = *(eax_21 + 4)
                                            *(eax_21 + 4) -= 1
                                            
                                            if (temp6_1 == 1)
                                                sub_45d050(eax_21, *(eax_21 + 0xc) + 0x10)
                                                arg1[3] = &data_5559b1
                                    
                                    int32_t result = *(edi_1 + 0xc)
                                    *arg1 = result
                                    *(edi_1 + 0xc) = arg1
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return result
                    while (i != 0)
                
                sub_44e4d0(i_2, &data_5559b1, "IsPointerFromAllocator(pItem)", 
                    "c:\ax2017\engine\xalloc.h", 0x10c, "XTypedAllocator<struct XAsset>::Free")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            edi = esi_1
            esi_1 = esi_1[2]
            
            if (esi_1 == 0)
                break
    
    sub_44e4d0(eax_6, &data_5559b1, "Halt", "c:\ax2017\engine\xmap.h", 0xd9, 
        "XMap<class XString,struct XAsset *>::RemoveAt")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
