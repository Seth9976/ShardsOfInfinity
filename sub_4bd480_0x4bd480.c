// 函数名称: sub_4bd480
// 虚拟地址: 0x4bd480
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_4bd480(void* arg1)
{
    // 第一条实际指令: char* edx = *(arg1 + 4)
    char* edx = *(arg1 + 4)
    uint32_t i
    
    for (i = sx.d(*edx) - 9; i u<= 0x17; i = sx.d(*edx) - 9)
        i = zx.d(lookup_table_4bd4e0[i])
        void* eax_1
        bool cond:0_1
        
        switch (jump_table_4bd4d0[i])
            case 0x4bd49e
                edx = &edx[1]
            case 0x4bd4a1
                cond:0_1 = edx[1] != 0xa
                eax_1 = &edx[1]
            label_4bd4b1:
                
                if (not(cond:0_1))
                    *(arg1 + 4) = eax_1
                    edx = eax_1
                
                edx = &edx[1]
                *(arg1 + 0xc) += 1
                *(arg1 + 8) = edx
            case 0x4bd4aa
                cond:0_1 = edx[1] != 0xd
                eax_1 = &edx[1]
                goto label_4bd4b1
            case 0x4bd4cd
                break
        
        *(arg1 + 4) = edx
    
    return i
}
