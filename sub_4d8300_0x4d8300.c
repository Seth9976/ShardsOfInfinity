// 函数名称: sub_4d8300
// 虚拟地址: 0x4d8300
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_4d8300(char arg1, int32_t arg2, void* arg3, void* arg4)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    arg1 = *(arg3 + 0x13c)
    var_8:3.b = arg1
    void* edx = data_ce26e8
    void* esi = arg3 + 0x14
    void* edi
    void* var_14 = edi
    
    if (arg1 == 0)
        goto label_4d833b
    
    void* eax = *(arg3 + 0xdc)
    int32_t var_1c
    void* var_18
    char* ecx_1
    
    if (eax u> 0x10)
        var_18 = "OpenGLBindOrCreateVAO"
        var_1c = 0x7aa
        ecx_1 = "vertexBufferData->mBufferFormat >= 0 && vertexBufferData->mBufferFormat < VERTEX_FORMAT_COUNT"
    else
        esi = edx + 0x4370 + eax * 0xc0
    label_4d833b:
        void* eax_3 = esi + 4
        
        for (int32_t i = 0; i s< 0x10; )
            if (var_8:3.b == 0 || arg4 == 0)
                if (*eax_3 == arg2 && *(eax_3 + 4) == arg4)
                    void* eax_11 = *(eax_3 - 4)
                    
                    if (*(edx + 0x408c) != eax_11)
                        *(edx + 0x408c) = eax_11
                        var_18 = eax_11
                        (*__glewBindVertexArray)(var_18)
                        eax_11 = data_ce19c4
                        *(eax_11 + 0x14) += 1
                    
                    eax_11.b = 1
                    return eax_11
            else if (*eax_3 == arg2)
                void* eax_4 = *(eax_3 - 4)
                
                if (*(edx + 0x408c) != eax_4)
                    *(edx + 0x408c) = eax_4
                    var_18 = eax_4
                    (*__glewBindVertexArray)(var_18)
                    void* eax_6 = data_ce19c4
                    edx = data_ce26e8
                    *(eax_6 + 0x14) += 1
                
                var_18 = arg4
                var_18 = *sub_4dd530(edx + 0x4240, var_18)
                (*__glewBindBuffer)(0x8893, var_18)
                int32_t eax_9
                eax_9.b = 1
                return eax_9
            
            i += 1
            eax_3 += 0xc
        
        int32_t eax_10 = 0
        
        while (true)
            void** esp_1
            
            if (*esi == 0)
                var_18 = esi
                (*__glewGenVertexArrays)(1, var_18)
                esp_1 = &var_14
                eax = *esi
                
                if (eax == 0)
                    var_18 = "OpenGLBindOrCreateVAO"
                    var_1c = 0x7d1
                    ecx_1 = "entry->mVertexArrayHandle != 0"
                    break
                
                void* ecx_2 = data_ce26e8
                *(esi + 4) = arg2
                *(esi + 8) = arg4
                
                if (*(ecx_2 + 0x408c) != eax)
                    *(ecx_2 + 0x408c) = eax
                    var_18 = eax
                    esp_1 = &var_18
                label_4d845f:
                    (*__glewBindVertexArray)()
                    eax = data_ce19c4
                    *(eax + 0x14) += 1
            else
                eax_10 += 1
                esi += 0xc
                
                if (eax_10 s< 0x10)
                    continue
                else
                    var_18 = "Ran out of VAO slots!"
                    sub_44e260(var_18)
                    eax = data_ce26e8
                    esp_1 = &var_14
                    
                    if (*(eax + 0x408c) != 0)
                        *(eax + 0x408c) = 0
                        var_18 = nullptr
                        esp_1 = &var_18
                        goto label_4d845f
            
            *esp_1
            esp_1[1]
            eax.b = 0
            esp_1[2]
            return eax
    
    sub_44e4d0(eax, &data_5559b1, ecx_1, "c:\ax2017\engine\openglgraphics.cpp", var_1c, var_18)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
