// 函数名称: sub_420c60
// 虚拟地址: 0x420c60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_420c60(void* arg1)
{
    // 第一条实际指令: sub_44f510(&data_5bb2c0, arg1 + 8)
    sub_44f510(&data_5bb2c0, arg1 + 8)
    void* eax_1 = data_5bb2c0
    void* esi = &data_5559b1
    
    if (eax_1 != 0)
        esi = eax_1
    
    char* result = sub_48c4a0(esi, U"@.")
    
    if (result != 0 && result != esi)
        result = sub_48c4a0(result, &data_556c38)
        
        if (result != 0)
            char i
            
            do
                i = *result
                result = &result[1]
            while (i != 0)
            
            result -= &result[1]
            
            if (result u>= 3 && *(arg1 + 0x10) != i)
                return sub_420940() __tailcall
    
    return result
}
