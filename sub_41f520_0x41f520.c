// 函数名称: sub_41f520
// 虚拟地址: 0x41f520
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_41f520()
{
    // 第一条实际指令: int32_t i = data_5bb710
    int32_t i = data_5bb710
    int32_t var_c_1
    int32_t eax
    char const* const ecx
    
    if (i s>= 0)
        eax = *(data_65ac38 + 0xb20)
        
        if (i s>= eax)
            char const* const __saved_edi_1 = "DeleteProfileBySlot"
            var_c_1 = 0x285
            ecx = "slot < gGameSettings.profileSettings->numProfiles"
        else if (eax != 1)
            void* eax_2 = sub_42aa50(i)
            void* edx_1 = data_65ac38
            eax = *(edx_1 + 0xb24)
            
            if (eax != *(eax_2 + 0x23c))
                if (i s< *(edx_1 + 0xb20) - 1)
                    void* edi_1 = i * 0x2c8
                    
                    do
                        void* ecx_3 = edi_1 + edx_1
                        sub_42ae00(ecx_3, ecx_3 + 0x2c8)
                        edx_1 = data_65ac38
                        edi_1 += 0x2c8
                        i += 1
                    while (i s< *(edx_1 + 0xb20) - 1)
                
                *(edx_1 + 0xb20) -= 1
                return sub_42a740(data_65ac38) __tailcall
            
            char const* const __saved_edi_3 = "DeleteProfileBySlot"
            var_c_1 = 0x287
            ecx = "gGameSettings.profileSettings->activeProfileIndex != GetProfileBySlot(slot).profileIndex"
        else
            char const* const __saved_edi_2 = "DeleteProfileBySlot"
            var_c_1 = 0x286
            ecx = "gGameSettings.profileSettings->numProfiles != 1"
    else
        char const* const __saved_edi = "DeleteProfileBySlot"
        var_c_1 = 0x284
        ecx = "slot >= 0"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", var_c_1, 
        "DeleteProfileBySlot")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
