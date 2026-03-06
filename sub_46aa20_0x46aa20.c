// 函数名称: sub_46aa20
// 虚拟地址: 0x46aa20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_46aa20(int32_t arg1)
{
    // 第一条实际指令: int32_t esi = data_5cd9f0
    int32_t esi = data_5cd9f0
    void* result = nullptr
    int32_t var_c
    char const* const ecx
    
    if (esi s<= 0)
    label_46aa7f:
        char const* const var_8_2 = "UI2GetByDisplayIndex"
        var_c = 0x1ba3
        ecx = "Halt"
    else
        void* edx_1 = &data_5c99f8
        
        while (true)
            if (*edx_1 == arg1)
                result = *((result << 4) + &data_5c99f0)
                
                if (*(result + 0x788) == 0)
                    if (*(result + 0x754) == 0)
                        return result
                    
                    char const* const var_8_1 = "UI2GetByDisplayIndex"
                    var_c = 0x1b9e
                    ecx = "gUI2Editor.displayEls[i].el->worldIdx == 0"
                else
                    char const* const var_8 = "UI2GetByDisplayIndex"
                    var_c = 0x1b9d
                    ecx = "gUI2Editor.displayEls[i].el->clone == false"
                
                break
            
            result += 1
            edx_1 += 0x10
            
            if (result s>= esi)
                goto label_46aa7f
    
    sub_44e4d0(result, &data_5559b1, ecx, "c:\ax2017\engine\ui2.cpp", var_c, "UI2GetByDisplayIndex")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
