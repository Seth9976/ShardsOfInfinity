// 函数名称: sub_4144c0
// 虚拟地址: 0x4144c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4144c0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t xmm0_1 = *arg1
    int32_t xmm0_1 = *arg1
    int32_t xmm3 = arg1[2]
    int32_t result
    
    if (not(xmm3 f< xmm0_1))
        int32_t xmm4_1 = arg1[1]
        int32_t xmm2_1 = arg1[3]
        
        if (not(xmm2_1 f< xmm4_1))
            int32_t xmm1 = *arg2
            
            if (not(xmm1 f< xmm0_1))
                int32_t xmm0 = arg2[1]
                
                if (not(xmm0 f< xmm4_1) && not(xmm3 f< xmm1) && not(xmm2_1 f< xmm0))
                    result.b = 1
                    return result
            
            result.b = 0
            return result
    
    sub_44e4d0(result, &data_5559b1, "RectIsNormalized(r)", "c:\ax2017\engine\rect.cpp", 0xa4, 
        "RectContains")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
