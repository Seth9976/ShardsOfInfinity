// 函数名称: sub_44ebe0
// 虚拟地址: 0x44ebe0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_44ebe0()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (data_5b2e40 != 0)
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return "xsave\"
    
    if (data_e47690 == 0)
        uint8_t pszPath[0x104]
        HRESULT eax_2
        int32_t ecx_1
        int32_t edx_1
        eax_2, ecx_1, edx_1 = SHGetFolderPathA(nullptr, 0x801a, nullptr, 0, &pszPath)
        
        if (eax_2 s< 0)
            sub_44e4d0(eax_2, &data_5559b1, "Halt", "c:\ax2017\engine\xplatformpc.cpp", 0x13c, 
                "XGetSaveGameFolder")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t var_110_2 = *(data_65ae00 + 8)
        uint8_t (* var_114_1)[0x104] = &pszPath
        sub_412bd0(&pszPath, edx_1, ecx_1, &data_e47690, "%s\TempleGates\%s\")
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return &data_e47690
}
