// 函数名称: sub_431290
// 虚拟地址: 0x431290
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_431290(int32_t* arg1)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    int32_t result
    
    do
        result = *arg1
        int32_t* j = *(result + (i << 2))
        
        if (j != 0)
            do
                int32_t* j_1 = j
                j = j[2]
                sub_45d050(j_1, 0xc)
            while (j != 0)
            
            result = *arg1
        
        *(result + (i << 2)) = 0
        i += 1
    while (i u<= arg1[1])
    
    arg1[2] = 0
    return result
}
