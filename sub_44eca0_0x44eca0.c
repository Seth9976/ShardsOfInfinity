// 函数名称: sub_44eca0
// 虚拟地址: 0x44eca0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL __fastcallsub_44eca0(int32_t arg1)
{
    // 第一条实际指令: void var_10
    void var_10
    BOOL result = sub_44edc0(&var_10)
    
    if (result.b == 0)
        return result
    
    if (arg1 u> 6)
        sub_44e4d0(result, &data_5559b1, "Halt", "c:\ax2017\engine\xplatformpc.cpp", 0x176, 
            "XSetCursor")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    switch (arg1)
        case 0
            return SetCursor(nullptr)
        case 1
            return SetCursor(LoadCursorA(nullptr, 0x7f00))
        case 2
            return SetCursor(LoadCursorA(nullptr, 0x7f89))
        case 3
            return SetCursor(LoadCursorA(nullptr, 0x7f84))
        case 4
            return SetCursor(LoadCursorA(nullptr, 0x7f85))
        case 5
            return SetCursor(LoadCursorA(nullptr, 0x7f82))
        case 6
            return SetCursor(LoadCursorA(nullptr, 0x7f83))
}
