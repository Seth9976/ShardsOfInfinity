// 函数名称: sub_4b5750
// 虚拟地址: 0x4b5750
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_4b5750(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* eax_1 = *arg2
    int32_t* eax_1 = *arg2
    
    if (eax_1 == 0)
        int32_t var_8_1 = arg1
        return sub_44e260("Missing import data on '%s'")
    
    int32_t edx_1 = *eax_1
    int32_t ecx_1 = 0
    
    if (edx_1 s<= 0)
        return eax_1
    
    int32_t* eax_3 = eax_1[1] + 0x28
    BOOL eax_4
    
    while (true)
        int32_t var_c
        char* ecx_2
        
        if (eax_3[-1] != 0)
            char const* const var_8_3 = "StructureLoad"
            var_c = 0x1b6
            ecx_2 = "pSubMesh->subMeshData.vertexBufferHandle == 0"
        else if (*eax_3 != 0)
            char const* const var_8_2 = "StructureLoad"
            var_c = 0x1b7
            ecx_2 = "pSubMesh->subMeshData.indexBufferHandle == 0"
        else
            ecx_1 += 1
            eax_3 = &eax_3[0x49]
            
            if (ecx_1 s>= edx_1)
                return eax_3
            
            continue
        
        sub_44e4d0(eax_3, &data_5559b1, ecx_2, "c:\ax2017\engine\structure.cpp", var_c, "StructureLoad")
        eax_4 = IsDebuggerPresent()
        break
    
    if (eax_4 != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
