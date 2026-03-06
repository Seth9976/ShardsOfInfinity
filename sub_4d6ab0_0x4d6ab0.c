// 函数名称: sub_4d6ab0
// 虚拟地址: 0x4d6ab0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_4d6ab0(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: if (arg3 s>= 0x400)
    if (arg3 s>= 0x400)
        sub_44e4d0(arg1, &data_5559b1, "registerIndex < MAX_UNIFORMS", 
            "c:\ax2017\engine\openglgraphics.cpp", 0x363, "GLDupCheck_glUniform4fv")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* edx = arg4
    char* result = data_ce26e8 + 0x28
    int32_t ecx = arg3 << 4
    int32_t esi_1 = arg2 << 4
    char** ecx_1 = &result[ecx]
    int32_t i_1 = esi_1 - 4
    
    if (esi_1 u>= 4)
        int32_t i
        
        do
            result = *ecx_1
            
            if (result != *edx)
                goto label_4d6b06
            
            ecx_1 = &ecx_1[1]
            edx += 4
            i = i_1
            i_1 -= 4
        while (i u>= 4)
    
    if (i_1 != 0xfffffffc)
    label_4d6b06:
        result.b = *ecx_1
        
        if (result.b != *edx)
            (*__glewUniform4fv)(arg3, arg2, arg4)
            return sub_51d5b0(data_ce26e8 + ecx + 0x28, arg4, esi_1)
        
        if (i_1 != 0xfffffffd)
            result.b = *(ecx_1 + 1)
            
            if (result.b != *(edx + 1))
                (*__glewUniform4fv)(arg3, arg2, arg4)
                return sub_51d5b0(data_ce26e8 + ecx + 0x28, arg4, esi_1)
            
            if (i_1 != 0xfffffffe)
                result.b = *(ecx_1 + 2)
                
                if (result.b != *(edx + 2))
                    (*__glewUniform4fv)(arg3, arg2, arg4)
                    return sub_51d5b0(data_ce26e8 + ecx + 0x28, arg4, esi_1)
                
                if (i_1 != 0xffffffff)
                    result.b = *(ecx_1 + 3)
                    
                    if (result.b != *(edx + 3))
                        (*__glewUniform4fv)(arg3, arg2, arg4)
                        return sub_51d5b0(data_ce26e8 + ecx + 0x28, arg4, esi_1)
    
    return result
}
