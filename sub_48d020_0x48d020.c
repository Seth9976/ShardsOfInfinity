// 函数名称: sub_48d020
// 虚拟地址: 0x48d020
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_48d020(void* arg1, char* arg2)
{
    // 第一条实际指令: void* result = arg1
    void* result = arg1
    char* i = *(result + 4)
    
    while (i != 0)
        if (__stricmp(i, arg2) == 0)
            return result
        
        i = *(result + 0xc)
        result += 8
    
    return 0
}
