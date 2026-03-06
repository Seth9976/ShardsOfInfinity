// 函数名称: sub_4e0460
// 虚拟地址: 0x4e0460
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_4e0460(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: char* esi = arg2
    char* esi = arg2
    char i
    
    do
        i = *esi
        esi = &esi[1]
    while (i != 0)
    int32_t var_c = *arg1
    void* esi_1 = esi - &esi[1]
    uint32_t result = _fwrite(arg2, 1, esi_1)
    
    if (result == esi_1)
        return result
    
    sub_44e4d0(result, &data_5559b1, "resultCount == len", "c:\ax2017\engine\xmlwriter.cpp", 0x29, 
        "sXmlEmit")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
