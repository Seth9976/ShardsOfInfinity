// 函数名称: sub_436a90
// 虚拟地址: 0x436a90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_436a90(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* edx = arg1[4]
    int32_t* edx = arg1[4]
    
    if (edx s>= arg1[3])
        int32_t eax
        eax.b = 0
        return eax
    
    int32_t eax_2 = *(edx + *arg1)
    *arg2 = eax_2
    arg1[4] += 4
    int32_t* edx_1 = arg1[4]
    
    if (edx_1 s< arg1[3])
        eax_2 = *(edx_1 + *arg1)
        arg2[1] = eax_2
        arg1[4] += 4
        int32_t* edx_2 = arg1[4]
        
        if (edx_2 s< arg1[3])
            int32_t i = 0
            eax_2 = *(edx_2 + *arg1)
            arg2[0xa] = eax_2
            int32_t* edx_4 = arg1[4] + 4
            arg1[4] = edx_4
            
            if (arg2[0xa] s> 0)
                void* edi_1 = &arg2[2]
                
                do
                    if (edx_4 s>= arg1[3])
                        goto label_436b30
                    
                    i += 1
                    eax_2 = *(edx_4 + *arg1)
                    *edi_1 = eax_2
                    edi_1 += 4
                    edx_4 = arg1[4] + 4
                    arg1[4] = edx_4
                while (i s< arg2[0xa])
            
            if (edx_4 s< arg1[3])
                arg2[0xb] = *(edx_4 + *arg1)
                int32_t eax_7
                eax_7.b = 1
                arg1[4] += 4
                return eax_7
    
    label_436b30:
    sub_44e4d0(eax_2, &data_5559b1, "Halt", "c:\ax2017\jams\shared\tgggame\code\gamesave.cpp", 0x24, 
        "LogReadInt")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
