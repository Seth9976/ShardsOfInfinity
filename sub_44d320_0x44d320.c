// 函数名称: sub_44d320
// 虚拟地址: 0x44d320
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_44d320(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = 0
    int32_t esi = 0
    void* result = arg2 * 0x9c + arg1
    int32_t ecx = *(result + 0x1eec)
    
    if (ecx s> 0)
        result += 0x1eac
        
        do
            if (*result == 2)
                result.b = 1
                return result
            
            esi += 1
            result += 0x14
        while (esi s< ecx)
    
    result.b = 0
    return result
}
