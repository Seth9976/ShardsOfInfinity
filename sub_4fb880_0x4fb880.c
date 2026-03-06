// 函数名称: sub_4fb880
// 虚拟地址: 0x4fb880
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4fb880(char* arg1)
{
    // 第一条实际指令: char* var_8 = arg1
    char* var_8 = arg1
    
    if (arg1.b != 0)
        sub_4c68c0(arg1)
    
    int32_t i = data_df8474
    char* eax_1
    
    if (i != 0x80)
        eax_1 = data_df8478
    else
        int32_t* esi_1 = data_d78c80
        
        if ((esi_1[2].b & 1) == 0)
            esi_1[3]
            sub_48b5b0(*esi_1)
            *esi_1 = 0
        
        char** ecx_1 = esi_1[1]
        
        if (ecx_1 != 0)
            sub_491590(ecx_1)
            esi_1[1] = 0
        
        _aligned_free_base(esi_1)
        sub_51dd40(0xd77c74, 0xd78c84, 0x7f7f0)
        i = data_df8474 - 1
        eax_1 = data_df8478 - 1
        data_df8474 = i
        data_df8478 = eax_1
    
    int32_t var_1c
    char const* const var_18_3
    char* ecx_5
    
    if (i s< eax_1)
        void* ebx_2 = &(&data_d78c80)[i * 0x404]
        
        do
            int32_t* esi_2 = *ebx_2
            
            if (esi_2[1] != 0)
                var_18_3 = "CreateUndoCheckpoint"
                var_1c = 0xf2
                ecx_5 = "gUI.undoStack[i].def->pParseTree == NULL"
                goto label_4fba13
            
            if ((esi_2[2].b & 1) == 0)
                esi_2[3]
                sub_48b5b0(*esi_2)
                char** ecx_3 = esi_2[1]
                *esi_2 = 0
                
                if (ecx_3 != 0)
                    sub_491590(ecx_3)
                    esi_2[1] = 0
            
            eax_1 = _aligned_free_base(esi_2)
            i += 1
            ebx_2 += 0x1010
        while (i s< data_df8478)
        
        i = data_df8474
    
    sub_51d5b0(i * 0x1010 + 0xd77c74, &data_d76c68, 0x100c)
    void* ebx_3 = data_e46f4c
    int32_t* esi_3 = *data_d76c60
    int128_t* eax_5 = sub_45cd70(0x10)
    *eax_5 = zx.o(0)
    *eax_5 = sub_48bb00(*esi_3, ebx_3)
    eax_1 = i * 0x1010 + 0xd77c74
    *(eax_5 + 0xc) = ebx_3
    *(eax_1 + 0x100c) = eax_5
    
    if (*(eax_5 + 4) == 0)
        int32_t result = data_df8474 + 1
        data_df8474 = result
        data_df8478 = result
        return result
    
    var_18_3 = "SaveUndoState"
    var_1c = 0xd8
    ecx_5 = "s.def->pParseTree == NULL"
    label_4fba13:
    sub_44e4d0(eax_1, &data_5559b1, ecx_5, "c:\ax2017\engine\editor\uieditor.cpp", var_1c, var_18_3)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
