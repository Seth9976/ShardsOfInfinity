// 函数名称: sub_4caa40
// 虚拟地址: 0x4caa40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4caa40(int32_t arg1)
{
    // 第一条实际指令: if (arg1 u<= 0xff)
    if (arg1 u<= 0xff)
        if (0xff - arg1 s> 0)
            sub_51dd40((arg1 << 3) + &data_ce1cdc, (arg1 << 3) + &data_ce1cd4, (0xff - arg1) << 3)
        
        *((arg1 << 3) + &data_ce1cd8) = 0
        *((arg1 << 3) + &data_ce1cd4) = arg1 + 0x64
        return arg1 + 0x64
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, "emitterIndex >= 0 && emitterIndex < MAX_EMITTERS", 
        "c:\ax2017\engine\windows\editorwindow.cpp", 0x946, "ToolDataAddItem")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
