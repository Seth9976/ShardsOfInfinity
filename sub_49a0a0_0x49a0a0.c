// 函数名称: sub_49a0a0
// 虚拟地址: 0x49a0a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_49a0a0(float* arg1)
{
    // 第一条实际指令: void* eax = data_cdf428
    void* eax = data_cdf428
    
    if (eax == 0)
        sub_44e4d0(eax, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* result = *(eax + 0x10)
    result[9] += 1
    float xmm0 = arg1[0xbe]
    int32_t* ecx = arg1[0xb9]
    
    if (xmm0 <= 0f)
        int32_t eax_1 = sub_4459f0(*ecx)
        uint32_t edi_2 = arg1[0xb7] i* 0x134 + *eax_1
        result = sub_499870(arg1, edi_2)
        
        if (result.b == 0)
            result.b = 0
            return result
        
        if (sub_496840(result, arg1, arg1, edi_2).b == 0)
            result.b = 0
            return result
    else
        arg1[0xbe] = xmm0 f- ecx[0x16]
    
    result.b = 1
    return result
}
