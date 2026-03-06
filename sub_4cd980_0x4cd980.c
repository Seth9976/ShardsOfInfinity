// 函数名称: sub_4cd980
// 虚拟地址: 0x4cd980
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4cd980(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = *arg1
    int32_t var_30
    char const* const var_2c
    char* ecx
    
    if (eax_2 != 0)
        void* const var_14 = &data_586130
        int32_t eax_4
        int32_t edx
        edx:eax_4 = sx.q(eax_2 - 1)
        char const* const var_10_1 = "Middle"
        int32_t esi_1 = 0
        char const* const var_c_1 = "Bottom"
        
        while (true)
            void* ecx_1 = (&var_14)[esi_1]
            char* eax_6 = arg2
            
            while (true)
                int32_t edx_1
                edx_1.b = *ecx_1
                char temp2_1 = *eax_6
                bool c_1 = edx_1.b u< temp2_1
                
                if (edx_1.b == temp2_1)
                    if (edx_1.b == 0)
                        eax_2 = 0
                        break
                    
                    edx_1.b = *(ecx_1 + 1)
                    char temp3_1 = eax_6[1]
                    c_1 = edx_1.b u< temp3_1
                    
                    if (edx_1.b == temp3_1)
                        ecx_1 += 2
                        eax_6 = &eax_6[2]
                        
                        if (edx_1.b != 0)
                            continue
                        
                        eax_2 = 0
                        break
                
                eax_2 = sbb.d(eax_6, eax_6, c_1) | 1
                break
            
            if (eax_2 == 0)
                int32_t result = mods.dp.d(edx:eax_4, 3) + (esi_1 << 1) + 1 + esi_1
                *arg1 = result
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return result
            
            esi_1 += 1
            
            if (esi_1 s>= 3)
                break
        
        var_2c = "ToVAlign"
        var_30 = 0xf65
        ecx = "Halt"
    else
        var_2c = "GetHAlignment"
        var_30 = 0xf3f
        ecx = "textAlignment != TA_NONE"
    
    sub_44e4d0(eax_2, &data_5559b1, ecx, "c:\ax2017\engine\windows\editorwindow.cpp", var_30, var_2c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
