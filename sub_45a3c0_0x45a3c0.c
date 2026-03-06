// 函数名称: sub_45a3c0
// 虚拟地址: 0x45a3c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_45a3c0()
{
    // 第一条实际指令: void* result = data_cdf3e4
    void* result = data_cdf3e4
    
    if (result != 0)
        int32_t ecx_1 = data_cdf3e0
        int32_t edx_1
        
        if (ecx_1 s>= 0)
            edx_1 = data_7db388
            result += ecx_1
        
        int32_t var_c
        char* ecx_4
        
        if (ecx_1 s< 0 || result s> edx_1)
            char const* const var_8_1 = "RenderDrawInstancedMeshes"
            var_c = 0x920
            ecx_4 = "sortIndex >= 0 && sortIndex + gDraw3DData.instancedMeshCount <= gDraw3DData.renderItemCount"
        label_45a43f:
            sub_44e4d0(result, &data_5559b1, ecx_4, "c:\ax2017\engine\draw3d.cpp", var_c, 
                "RenderDrawInstancedMeshes")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        result = *((ecx_1 << 2) + &data_cdb3d8)
        
        if (result s< 0 || result s> edx_1)
            char const* const var_8 = "RenderDrawInstancedMeshes"
            var_c = 0x923
            ecx_4 = "firstItemIndex >= 0 && firstItemIndex <= gDraw3DData.renderItemCount"
            goto label_45a43f
        
        result = sub_454980(sub_454070(result * 0x180 + 0x65b388))
        data_cdf3e4 = 0
    
    return result
}
