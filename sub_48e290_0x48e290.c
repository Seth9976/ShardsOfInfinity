// 函数名称: sub_48e290
// 虚拟地址: 0x48e290
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_48e290(void* arg1)
{
    // 第一条实际指令: void* result = _strrchr(arg1, 0x2e)
    void* result = _strrchr(arg1, 0x2e)
    
    if (result != 0 && __stricmp(result, ".xpack") == 0)
        result.b = 1
        return result
    
    result.b = 0
    return result
}
