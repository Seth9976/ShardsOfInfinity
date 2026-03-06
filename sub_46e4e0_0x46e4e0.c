// 函数名称: sub_46e4e0
// 虚拟地址: 0x46e4e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_46e4e0(int32_t arg1)
{
    // 第一条实际指令: int32_t esi = data_5cd9f0
    int32_t esi = data_5cd9f0
    int32_t result = 0
    int32_t var_c
    char const* const ecx
    
    if (esi s<= 0)
    label_46e521:
        char const* const var_8_1 = "GetDisplayItemIndex"
        var_c = 0x2154
        ecx = "Halt"
    else
        void* edx_1 = &data_5c99f0
        
        while (true)
            if (*edx_1 == arg1)
                result = *((result << 4) + &data_5c99f8)
                
                if (result != 0xffffffff)
                    return result
                
                char const* const var_8 = "GetDisplayItemIndex"
                var_c = 0x214f
                ecx = "gUI2Editor.displayEls[i].displayIndex != -1"
                break
            
            result += 1
            edx_1 += 0x10
            
            if (result s>= esi)
                goto label_46e521
    
    sub_44e4d0(result, &data_5559b1, ecx, "c:\ax2017\engine\ui2.cpp", var_c, "GetDisplayItemIndex")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
