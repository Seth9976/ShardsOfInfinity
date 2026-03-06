// 函数名称: sub_44eea0
// 虚拟地址: 0x44eea0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

HWND __fastcallsub_44eea0(int32_t arg1)
{
    // 第一条实际指令: HWND result
    HWND result
    
    if ((0x8000 & GetKeyState(arg1).w) != 0 && data_65ae04->__offset(0x18).b != 0)
        result = GetFocus()
        
        if (result == data_ce1790 || result == 0)
            result.b = 1
            return result
    
    result.b = 0
    return result
}
