// 函数名称: sub_4fb1e0
// 虚拟地址: 0x4fb1e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4fb1e0(char* arg1)
{
    // 第一条实际指令: char* var_8 = arg1
    char* var_8 = arg1
    
    if (arg1.b != 0)
        sub_4c68c0(arg1)
    
    int32_t i = data_d63ba8
    char* eax_1
    
    if (i != 0x80)
        eax_1 = data_d63bac
    else
        int32_t* esi_1 = data_ce47ac
        
        if ((esi_1[2].b & 1) == 0)
            esi_1[3]
            sub_48b5b0(*esi_1)
            *esi_1 = 0
        
        char** ecx_1 = esi_1[1]
        
        if (ecx_1 != 0)
            sub_491590(ecx_1)
            esi_1[1] = 0
        
        _aligned_free_base(esi_1)
        sub_51dd40(0xce37a8, 0xce47b0, 0x7f3f8)
        i = data_d63ba8 - 1
        eax_1 = data_d63bac - 1
        data_d63ba8 = i
        data_d63bac = eax_1
    
    int32_t var_1c
    char const* const var_18_3
    char* ecx_5
    
    if (i s< eax_1)
        void* ebx_2 = &(&data_ce47ac)[i * 0x402]
        
        do
            int32_t* esi_2 = *ebx_2
            
            if (esi_2[1] != 0)
                var_18_3 = "FabCreateUndoCheckpoint"
                var_1c = 0x902
                ecx_5 = "gFab.undoStack[i].def->pParseTree == NULL"
                goto label_4fb373
            
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
            ebx_2 += 0x1008
        while (i s< data_d63bac)
        
        i = data_d63ba8
    
    sub_51d5b0(i * 0x1008 + 0xce37a8, &data_ce27a4, 0x1004)
    void* ebx_3 = data_e47020
    int32_t* esi_3 = *data_ce27a0
    int128_t* eax_5 = sub_45cd70(0x10)
    *eax_5 = zx.o(0)
    *eax_5 = sub_48bb00(*esi_3, ebx_3)
    eax_1 = i * 0x1008 + 0xce37a8
    *(eax_5 + 0xc) = ebx_3
    *(eax_1 + 0x1004) = eax_5
    
    if (*(eax_5 + 4) == 0)
        int32_t result = data_d63ba8 + 1
        data_d63ba8 = result
        data_d63bac = result
        return result
    
    var_18_3 = "FabSaveUndoState"
    var_1c = 0x8e8
    ecx_5 = "s.def->pParseTree == NULL"
    label_4fb373:
    sub_44e4d0(eax_1, &data_5559b1, ecx_5, "c:\ax2017\engine\editor\fabeditor.cpp", var_1c, var_18_3)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
