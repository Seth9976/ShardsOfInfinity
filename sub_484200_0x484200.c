// 函数名称: sub_484200
// 虚拟地址: 0x484200
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_484200() __noreturn
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, "Halt", "c:\ax2017\engine\defbin.cpp", 0x52e, 
        "DefBinWriteZipPackFile")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
