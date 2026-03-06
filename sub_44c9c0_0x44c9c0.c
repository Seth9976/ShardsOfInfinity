// 函数名称: sub_44c9c0
// 虚拟地址: 0x44c9c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_44c9c0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t i = *arg1
    int32_t i = *arg1
    int32_t esi = 0
    
    while (i != 0)
        if (i == arg2)
            i.b = 1
            return i
        
        i = arg1[esi + 1]
        esi += 1
    
    i.b = 0
    return i
}
