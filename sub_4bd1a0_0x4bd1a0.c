// 函数名称: sub_4bd1a0
// 虚拟地址: 0x4bd1a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4bd1a0(int32_t arg1)
{
    // 第一条实际指令: int32_t result_1 = arg1
    int32_t result_1 = arg1
    arg1.b = data_cdf3e9
    char const* const var_10
    int32_t var_c
    char const* const var_8
    void* result
    char* ecx
    
    if (arg1.b != 0)
        var_8 = "DrawModeSet"
        var_c = 0xd
        var_10 = "c:\ax2017\engine\drawmode.cpp"
    label_4bd263:
        ecx = "!gDraw3DData.submittingRenderItems"
    label_4bd26d:
        sub_44e4d0(result, &data_5559b1, ecx, var_10, var_c, var_8)
        
        if (IsDebuggerPresent() != 1)
            sub_44e680()
            noreturn
        
        breakpoint
    
    result = data_ce1af4
    
    if (result == result_1)
        return result
    
    if (result == 0)
        goto label_4bd21f
    
    void* eax_1 = result - 1
    
    if (result != 1)
        result = eax_1 - 1
        
        if (eax_1 == 1)
            goto label_4bd21f
        
        var_8 = "DrawModeSet"
        var_c = 0x1f
        var_10 = "c:\ax2017\engine\drawmode.cpp"
        ecx = "Halt"
        goto label_4bd26d
    
    result = data_cdf424
    
    if (*(result + 0x1d) == 0)
        var_8 = "SpriteDrawEnd"
        var_c = 0x25d
        var_10 = "c:\ax2017\engine\sprite.cpp"
        ecx = "gpSpriteAppData->spritesDrawing"
        goto label_4bd26d
    
    *(result + 0x1d) = 0
    sub_47c290()
    arg1.b = data_cdf3e9
    label_4bd21f:
    result = result_1
    
    if (result_1 == 0)
        data_ce1af4 = result_1
        return result
    
    void* eax_3 = result - 1
    
    if (result == 1)
        result = sub_47ce10()
        data_ce1af4 = result_1
        return result
    
    result = eax_3 - 1
    
    if (eax_3 != 1)
        var_8 = "DrawModeSet"
        var_c = 0x30
        var_10 = "c:\ax2017\engine\drawmode.cpp"
        ecx = "Halt"
        goto label_4bd26d
    
    if (arg1.b == 0)
        data_ce1af4 = result_1
        return result
    
    var_8 = "Draw3DBegin"
    var_c = 0xb03
    var_10 = "c:\ax2017\engine\draw3d.cpp"
    goto label_4bd263
}
