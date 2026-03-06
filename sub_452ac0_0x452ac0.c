// 函数名称: sub_452ac0
// 虚拟地址: 0x452ac0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_452ac0()
{
    // 第一条实际指令: int32_t eax_8 = data_5c7798
    int32_t eax_8 = data_5c7798
    
    if (eax_8 u>= 0x270)
        int32_t ecx
        
        if (eax_8 == 0x271)
            sub_452a70(ecx, 0x1571)
        int32_t i
        
        for (i = 0; i s< 0xe3; i += 1)
            int32_t edx_4 =
                ((*((i << 2) + &data_5c6ddc) ^ (&data_5c6dd8)[i]) & 0x7fffffff) ^ (&data_5c6dd8)[i]
            (&data_5c6dd8)[i] =
                edx_4 u>> 1 ^ *(((edx_4 & 1) << 2) + &data_583330) ^ *((i << 2) + &data_5c740c)
        
        if (i s< 0x26f)
            void* i_1 = &(&data_5c6dd8)[i]
            int32_t eax = *i_1
            
            do
                void* i_2 = i_1 + 4
                int32_t ecx_6 = ((*(i_1 + 4) ^ eax) & 0x7fffffff) ^ eax
                *i_1 = *(((ecx_6 & 1) << 2) + &data_583330) ^ *(i_2 - 0x390) ^ ecx_6 u>> 1
                i_1 = i_2
                eax = *i_2
            while (i_1 s< &data_5c7794)
        
        int32_t ecx_10 = (data_5c6dd8 ^ data_5c7794) & 0x7fffffff
        data_5c7798 = 0
        int32_t ecx_11 = ecx_10 ^ data_5c7794
        eax_8 = 0
        data_5c7794 = ecx_11 u>> 1 ^ *(((ecx_11 & 1) << 2) + &data_583330) ^ data_5c7408
    
    int32_t ecx_15 = (&data_5c6dd8)[eax_8]
    data_5c7798 = eax_8 + 1
    int32_t ecx_16 = ecx_15 ^ ecx_15 u>> 0xb
    int32_t ecx_17 = ecx_16 ^ (ecx_16 & 0xff3a58ad) << 7
    int32_t ecx_18 = ecx_17 ^ (ecx_17 & 0xffffdf8c) << 0xf
    return ecx_18 u>> 0x12 ^ ecx_18
}
