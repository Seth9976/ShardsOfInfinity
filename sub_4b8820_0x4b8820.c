// 函数名称: sub_4b8820
// 虚拟地址: 0x4b8820
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4b8820(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edi = *arg1
    int32_t edi = *arg1
    int32_t esi = 0
    int32_t* result
    
    if (edi s> 0)
        result = arg1[1]
        
        do
            if (*result == arg2)
                result.b = 1
                return result
            
            esi += 1
            result = &result[2]
        while (esi s< edi)
    
    result.b = 0
    return result
}
