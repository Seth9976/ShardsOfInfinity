// 函数名称: sub_45d6c0
// 虚拟地址: 0x45d6c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __fastcallsub_45d6c0(char** arg1, int32_t* arg2)
{
    // 第一条实际指令: char** var_8 = arg1
    char** var_8 = arg1
    char* eax = *arg2
    void* ecx = arg2[1]
    char** var_8_1 = arg1
    
    if (eax != 0)
        *arg1 = &data_5559b1
        sub_44f690(arg1, eax, ecx)
        return arg1
    
    sub_44e4d0(eax, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x9a, "XString::XString")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
