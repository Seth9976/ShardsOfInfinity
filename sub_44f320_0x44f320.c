// 函数名称: sub_44f320
// 虚拟地址: 0x44f320
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __thiscallsub_44f320(int32_t* arg1, char* arg2, void* arg3)
{
    // 第一条实际指令: char** result = arg1
    char** result = arg1
    
    if (arg2 != 0)
        *result = &data_5559b1
        sub_44f690(arg1, arg2, arg3)
        return result
    
    sub_44e4d0(arg2, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x9a, "XString::XString")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
