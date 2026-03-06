// 函数名称: sub_4b1380
// 虚拟地址: 0x4b1380
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_4b1380(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx = *arg1
    int32_t ecx = *arg1
    
    if (ecx != 0)
        uint32_t edx = zx.d(ecx.w)
        uint32_t eax
        int32_t ebx_1
        
        if (edx u< data_654ebc)
            ebx_1 = data_654eb8
            eax = edx * 0x438
        
        if (edx u>= data_654ebc || *(eax + ebx_1 + 0x434) != ecx)
            sub_44e4d0(eax, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UIState>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (*(edx * 0x438 + ebx_1 + 4) != arg2)
            sub_486c10(ecx)
            *arg1 = sub_4869c0(arg2)
    else if (arg2 != 0)
        *arg1 = sub_4869c0(arg2)
}
