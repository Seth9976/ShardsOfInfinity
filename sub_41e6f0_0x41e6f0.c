// 函数名称: sub_41e6f0
// 虚拟地址: 0x41e6f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_41e6f0()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (data_5bb700 == 1)
        sub_44f510(sub_42aaa0(*(data_65ac38 + 0xb24)) + 4, &data_5bb704)
        void* eax_3 = data_5bb704
        void* ecx_3 = &data_5559b1
        
        if (eax_3 != 0)
            ecx_3 = eax_3
        
        sub_41a860(ecx_3)
        void* ecx_4 = data_65ac38
        data_5bb700 = 2
        char* eax_4 = sub_42a740(ecx_4)
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return eax_4
    
    if (data_5bb70c != 1)
        sub_44e4d0(eax_1, &data_5559b1, "Halt", "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 
            0x804, "GameProfileAccountOK")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* eax_5 = data_5bb708
    void* ecx_7 = &data_5559b1
    
    if (eax_5 != 0)
        ecx_7 = eax_5
    
    void var_14
    _strncpy(&var_14, ecx_7, 9)
    void* eax_6 = data_65aabc
    char var_c = 0
    
    if (eax_6 == 0)
        sub_44e4d0(eax_6, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (*(eax_6 + 0x18) == 3)
        eax_6 = *(eax_6 + 0x14)
        void* ecx_8 = data_65acf4
        
        if (eax_6 != 0)
            uint32_t edx_1 = zx.d(eax_6.w)
            
            if (edx_1 u< *(ecx_8 + 4))
                void* esi_2 = edx_1 * 0x4c + *ecx_8
                
                if (*(esi_2 + 0x48) == eax_6)
                    int32_t var_1c_1 = 0xf42a7
                    sub_450c90(eax_6, 9, esi_2 + 0x3c)
                    eax_6 = sub_450a70(&var_14, 9, esi_2 + 0x3c, &var_14)
    
    data_5bb70c = 2
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_6
}
