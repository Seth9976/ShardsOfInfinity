// 函数名称: sub_420940
// 虚拟地址: 0x420940
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_420940()
{
    // 第一条实际指令: void* eax_3 = data_5bb2c0
    void* eax_3 = data_5bb2c0
    char* const edi = &data_5559b1
    void* esi = &data_5559b1
    
    if (eax_3 != 0)
        esi = eax_3
    
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
            
            if (result u>= 3)
                void* eax = data_5bb2c0
                
                if (eax != 0)
                    edi = eax
                
                sub_41a920(edi)
                sub_45e9a0(&data_5bb270:4)
                int64_t xmm0_1 = data_5bb264.q
                data_5bb278 = data_5bb26c
                void* eax_2 = data_5bb27c
                data_5bb26c = eax_2
                result = eax_2 + 1
                data_5bb270 = xmm0_1
                data_5bb268 = 0
                data_5bb264 = 0
                data_5bb27c = result
                data_5bb260 = 0
    
    return result
}
