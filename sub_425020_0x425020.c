// 函数名称: sub_425020
// 虚拟地址: 0x425020
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_425020(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4 @ esi, void* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541500
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg3
    int32_t ebx
    int32_t var_18 = ebx
    int32_t var_1c = arg4
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_44f240(&var_14, "btnBack")
    char* const ecx_1 = &data_5559b1
    char* eax_3 = var_14
    
    if (eax_3 != 0)
        ecx_1 = eax_3
    
    char* edx = *(arg5 + 4)
    int32_t ecx_3
    
    while (true)
        ebx.b = *ecx_1
        char temp0_1 = *edx
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                ecx_3 = 0
                break
            
            ebx.b = ecx_1[1]
            char temp1_1 = edx[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                ecx_1 = &ecx_1[2]
                edx = &edx[2]
                
                if (ebx.b != 0)
                    continue
                
                ecx_3 = 0
                break
        
        ecx_3 = sbb.d(ecx_1, ecx_1, c_1) | 1
        break
    
    if (ecx_3 == 0 || *(arg5 + 0x18) == 2)
        ebx.b = 1
    else
        ebx.b = 0
    
    int32_t var_8_1 = 0
    
    if (data_cdf414 != 0 && eax_3 != 0 && *eax_3 != 0)
        char* eax_4 = sub_44f000(&var_14)
        int32_t temp2_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_45d050(eax_4, *(eax_4 + 0xc) + 0x10)
            var_14 = &data_5559b1
    
    int32_t var_8_2 = 0xffffffff
    
    if (ebx.b != 0)
        int32_t eax_5
        
        if (data_5bb1e4.d != 0x1e)
            if (data_5bb1f0.d == 0x1e)
                eax_5 = data_5bb1f0:4
                goto label_4250ff
            
            data_5bb240 = 3
        else
            eax_5 = data_5bb1e4:4
        label_4250ff:
            
            if (eax_5 == 0)
                data_5bb240 = 3
            else
                sub_428f80(3)
    
    sub_44f240(&var_14, "btnTutorial")
    char* eax_6 = var_14
    char* const ecx_7 = &data_5559b1
    char* edx_3 = *(arg5 + 4)
    
    if (eax_6 != 0)
        ecx_7 = eax_6
    
    int32_t esi
    
    while (true)
        ebx.b = *ecx_7
        char temp3_1 = *edx_3
        bool c_2 = ebx.b u< temp3_1
        
        if (ebx.b == temp3_1)
            if (ebx.b == 0)
                esi = 0
                break
            
            ebx.b = ecx_7[1]
            char temp4_1 = edx_3[1]
            c_2 = ebx.b u< temp4_1
            
            if (ebx.b == temp4_1)
                ecx_7 = &ecx_7[2]
                edx_3 = &edx_3[2]
                
                if (ebx.b != 0)
                    continue
                
                esi = 0
                break
        
        esi = sbb.d(arg4, arg4, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_cdf414 != 0 && eax_6 != 0 && *eax_6 != 0)
        char* eax_7 = sub_44f000(&var_14)
        int32_t temp5_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
            var_14 = &data_5559b1
    
    int32_t var_8_4 = 0xffffffff
    
    if (esi == 0)
        data_5bb240 = 0x20
        data_65ac0c = esi
    
    sub_44f240(&var_14, "btnRulesItem")
    char* eax_8 = var_14
    char* ecx_11 = &data_5559b1
    char* edx_6 = *(arg5 + 4)
    
    if (eax_8 != 0)
        ecx_11 = eax_8
    
    int32_t esi_2
    
    while (true)
        ebx.b = *ecx_11
        char temp6_1 = *edx_6
        bool c_3 = ebx.b u< temp6_1
        
        if (ebx.b == temp6_1)
            if (ebx.b == 0)
                esi_2 = 0
                break
            
            ebx.b = ecx_11[1]
            char temp7_1 = edx_6[1]
            c_3 = ebx.b u< temp7_1
            
            if (ebx.b == temp7_1)
                ecx_11 = &ecx_11[2]
                edx_6 = &edx_6[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_2 = 0
                break
        
        esi_2 = sbb.d(esi, esi, c_3) | 1
        break
    
    int32_t var_8_5 = 2
    
    if (data_cdf414 != 0 && eax_8 != 0 && *eax_8 != 0)
        eax_8 = sub_44f000(&var_14)
        int32_t temp10_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp10_1 == 1)
            eax_8 = sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
            var_14 = &data_5559b1
    
    int32_t var_8_6 = 0xffffffff
    
    if (esi_2 == 0)
        int32_t eax_10 = *(arg5 + 8) * 5
        int32_t ecx_14 = *((eax_10 << 2) + &data_557eb4)
        
        if (ecx_14 != esi_2)
            if (ecx_14 - esi_2 == 1)
                int32_t eax_11 = *((eax_10 << 2) + &data_557ebc)
                data_5bb240 = eax_11
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_11
            
            sub_44e4d0(eax_10, &data_5559b1, "Halt", 
                "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x108c, "RulesClick")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        eax_8 = ShellExecuteA(nullptr, "open", (&data_557eb8)[eax_10], nullptr, nullptr, SW_SHOWNORMAL)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_8
}
