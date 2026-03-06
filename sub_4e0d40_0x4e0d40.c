// 函数名称: sub_4e0d40
// 虚拟地址: 0x4e0d40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_4e0d40(void* arg1, char* arg2)
{
    // 第一条实际指令: void* var_4 = arg1
    void* var_4 = arg1
    char* result
    
    if (*(arg1 + 4) == 3)
        result = sub_4e0be0(arg1)
    
    if ((*(arg1 + 4) != 3 || result.b != 0) && *(arg1 + 4) == 4
            && __strnicmp(arg2, *(arg1 + 0xc), *(arg1 + 0x10)) == 0 && sub_4e0be0(arg1).b != 0)
        result.b = 1
        return result
    
    result.b = 0
    return result
}
