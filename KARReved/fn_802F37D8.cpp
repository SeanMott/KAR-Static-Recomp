//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802E28C4.hpp"



void fn_802F37D8(PPC::Runtime::GCContext* context)
{
/*802F37D8 002F05D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802F37DC 002F05DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802F37E0 002F05E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802F37E4 002F05E4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802F37E8 002F05E8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802F37EC 002F05EC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802F37F0 002F05F0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*802F37F4 002F05F4*/ PPC::Runtime::ASM::bl(fn_802E28C4);
/*802F37F8 002F05F8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*802F37FC 002F05FC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D8F7C @ Get_MemoryOffset_HighBit);
/*802F3800 002F0600*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804D8F7C @ Get_MemoryOffset_LowBit);
/*802F3804 002F0604*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4a8, context->r5));
/*802F3808 002F0608*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*802F380C 002F060C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*802F3810 002F0610*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x44);
/*802F3814 002F0614*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802F3818 002F0618*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x524, context->r5));
/*802F381C 002F061C*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 802F3820 002F0620  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*802F3824 002F0624*/ PPC::Runtime::ASM::bne(.L_802F3838);
/*802F3828 002F0628*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802F382C 002F062C*/ PPC::Runtime::ASM::li(context->r4, 0x495);
/*802F3830 002F0630*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802F3834 002F0634*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802F3838, 0x802F3838) //this is a jump label
/*802F3838 002F0638*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802F383C 002F063C*/ PPC::Runtime::ASM::bne(.L_802F3850);
/*802F3840 002F0640*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802F3844 002F0644*/ PPC::Runtime::ASM::li(context->r4, 0x496);
/*802F3848 002F0648*/ PPC::Runtime::ASM::li(context->r5, String_ "mt" 3 @ Get_MemoryOffset_SDA21);
/*802F384C 002F064C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802F3850, 0x802F3850) //this is a jump label
/*802F3850 002F0650*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802F3854 002F0654*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x44);
/*802F3858 002F0658*/ PPC::Runtime::ASM::bl(fn_PSMTXCopy);
/*802F385C 002F065C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*802F3860 002F0660*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*802F3864 002F0664*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x380);
/*802F3868 002F0668*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*802F386C 002F066C*/ PPC::Runtime::ASM::beq(.L_802F38B0);
/*802F3870 002F0670*/ PPC::Runtime::ASM::bne(.L_802F3884);
/*802F3874 002F0674*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802F3878 002F0678*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*802F387C 002F067C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802F3880 002F0680*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802F3884, 0x802F3884) //this is a jump label
/*802F3884 002F0684*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*802F3888 002F0688*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802F388C 002F068C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*802F3890 002F0690*/ PPC::Runtime::ASM::bne(.L_802F38A0);
/*802F3894 002F0694*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*802F3898 002F0698*/ PPC::Runtime::ASM::beq(.L_802F38A0);
/*802F389C 002F069C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802F38A0, 0x802F38A0) //this is a jump label
/* 802F38A0 002F06A0  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802F38A4 002F06A4*/ PPC::Runtime::ASM::bne(.L_802F38B0);
/*802F38A8 002F06A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802F38AC 002F06AC*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_802F38B0, 0x802F38B0) //this is a jump label
/*802F38B0 002F06B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*802F38B4 002F06B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*802F38B8 002F06B8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x13);
/*802F38BC 002F06BC*/ PPC::Runtime::ASM::bge(.L_802F38D4);
/*802F38C0 002F06C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x524, context->r3));
/*802F38C4 002F06C4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802F38C8 002F06C8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*802F38CC 002F06CC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802F38D0 002F06D0*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802F38D4, 0x802F38D4) //this is a jump label
/*802F38D4 002F06D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802F38D8 002F06D8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802F38DC 002F06DC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802F38E0 002F06E0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802F38E4 002F06E4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802F38E8 002F06E8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802F38EC 002F06EC*/ PPC::Runtime::ASM::blr();
}