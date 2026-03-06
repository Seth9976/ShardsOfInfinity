// 函数名称: sub_42ea60
// 虚拟地址: 0x42ea60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_42ea60(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    int32_t i_1 = *(arg1 + 0x2164)
    int32_t esi = 0
    
    if (i_1 s> 0)
        void* eax_1 = arg1 + 0x1e64
        int32_t i
        
        do
            int32_t ecx = *(eax_1 - 4)
            
            if (ecx s< 0x1e && esi s< 1)
                esi = 1
            
            if (ecx s< 0xf && esi s< 2)
                esi = 2
            
            if (*eax_1 s> 0xa && esi s< 1)
                esi = 1
            
            if (ecx s< 0x14 && esi s< 2)
                esi = 2
            
            eax_1 += 0x9c
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t eax_3 = arg2 << 4
    
    if (*(eax_3 + 0x57dbb8) == arg2)
        int32_t result = esi + (arg2 << 2)
        *((result << 2) + &data_57dbbc)
        return result
    
    sub_44e4d0(eax_3, &data_5559b1, "values[card].card == card", 
        "c:\ax2017\jams\shards\code\shardsai.cpp", 0x6e6, "CardValue")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
