// 函数名称: sub_4cab30
// 虚拟地址: 0x4cab30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_4cab30(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_14_2
    int32_t var_14_2
    char* ecx_2
    
    if (arg1 u> 0xff)
        char const* const var_10_3 = "ToolDataMoveItem"
        var_14_2 = 0x95c
        ecx_2 = "sourceIndex >= 0 && sourceIndex < MAX_EMITTERS"
    else
        if (arg2 u<= 0xff)
            int32_t edi = *((arg1 << 3) + &data_ce1cd4)
            int32_t ebx = *((arg1 << 3) + &data_ce1cd8)
            
            if (arg1 s< arg2)
                sub_51dd40((arg1 << 3) + &data_ce1cd4, (arg1 << 3) + &data_ce1cdc, (arg2 - arg1) << 3)
            else if (arg1 s> arg2)
                sub_51dd40((arg2 << 3) + &data_ce1cdc, (arg2 << 3) + &data_ce1cd4, (arg1 - arg2) << 3)
            
            *((arg2 << 3) + &data_ce1cd4) = edi
            *((arg2 << 3) + &data_ce1cd8) = ebx
            return 
        
        char const* const var_10_2 = "ToolDataMoveItem"
        var_14_2 = 0x95d
        ecx_2 = "destIndex >= 0 && destIndex < MAX_EMITTERS"
    
    char* eax
    sub_44e4d0(eax, &data_5559b1, ecx_2, "c:\ax2017\engine\windows\editorwindow.cpp", var_14_2, 
        "ToolDataMoveItem")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
