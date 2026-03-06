// 函数名称: sub_4cd890
// 虚拟地址: 0x4cd890
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4cd890(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_2 = arg1
    int32_t ecx = *eax_2
    int32_t* var_18 = eax_2
    int32_t var_30
    char const* const var_2c
    char* ecx_1
    
    if (ecx != 0)
        char const* const var_14 = "Left"
        char const* const var_10_1 = "Center"
        char const* const var_c_1 = "Right"
        int32_t ebx_3 = (ecx - 1) s/ 3
        int32_t esi_1 = 0
        
        while (true)
            char* ecx_3 = (&var_14)[esi_1]
            char* eax_4 = arg2
            
            while (true)
                int32_t edx
                edx.b = *ecx_3
                char temp0_1 = *eax_4
                bool c_1 = edx.b u< temp0_1
                
                if (edx.b == temp0_1)
                    if (edx.b == 0)
                        eax_2 = nullptr
                        break
                    
                    edx.b = ecx_3[1]
                    char temp1_1 = eax_4[1]
                    c_1 = edx.b u< temp1_1
                    
                    if (edx.b == temp1_1)
                        ecx_3 = &ecx_3[2]
                        eax_4 = &eax_4[2]
                        
                        if (edx.b != 0)
                            continue
                        
                        eax_2 = nullptr
                        break
                
                eax_2 = sbb.d(eax_4, eax_4, c_1) | 1
                break
            
            if (eax_2 == 0)
                void* result = (ebx_3 << 1) + 1 + esi_1 + ebx_3
                *var_18 = result
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return result
            
            esi_1 += 1
            
            if (esi_1 s>= 3)
                break
        
        var_2c = "ToHAlign"
        var_30 = 0xf55
        ecx_1 = "Halt"
    else
        var_2c = "GetVAlignment"
        var_30 = 0xf39
        ecx_1 = "textAlignment != TA_NONE"
    
    sub_44e4d0(eax_2, &data_5559b1, ecx_1, "c:\ax2017\engine\windows\editorwindow.cpp", var_30, var_2c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
