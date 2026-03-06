// 函数名称: sub_479350
// 虚拟地址: 0x479350
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_479350(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t eax_1 = *(*(arg1 + 0x63c) * 0x208 + arg1 + 0x1a0)
    int32_t eax_1 = *(*(arg1 + 0x63c) * 0x208 + arg1 + 0x1a0)
    
    if (eax_1 != 0)
        float xmm0_2
        
        if (eax_1 != 1)
            if (eax_1 != 3)
                if (eax_1 == 2)
                    *(arg1 + 0x664) = *arg2 f+ *(arg1 + 0x664)
                    sub_479260(arg1)
                    return sub_4660e0(arg1) __tailcall
                
                sub_44e4d0(eax_1, &data_5559b1, "Halt", "c:\ax2017\engine\ui2.cpp", 0x3416, 
                    "UI2ApplyScrollDelta")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            xmm0_2 = arg2[1] f+ *(arg1 + 0x668)
        else
            xmm0_2 = *(arg1 + 0x668) f- arg2[1]
        
        *(arg1 + 0x668) = xmm0_2
    
    sub_479260(arg1)
    return sub_4660e0(arg1) __tailcall
}
