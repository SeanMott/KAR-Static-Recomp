//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_stGetCurrentStageKind_EnemyposId(PPC::Runtime::GCContext* context)
{
/*80262364 0025F164*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80262368 0025F168*/ PPC::Runtime::ASM::mflr(context->r0);
/*8026236C 0025F16C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80262370 0025F170*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80262374 0025F174*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80262378 0025F178*/ PPC::Runtime::ASM::lwz(context->r31, STRUCT_BYTE4_COUNT_1INT @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026237C 0025F17C*/ PPC::Runtime::ASM::cmpwi(context->r31, -0x1);
/*80262380 0025F180*/ PPC::Runtime::ASM::ble(.L_80262390);
/*80262384 0025F184*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x3b);
/*80262388 0025F188*/ PPC::Runtime::ASM::bge(.L_80262390);
/*8026238C 0025F18C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80262390, 0x80262390) //this is a jump label
/*80262390 0025F190*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80262394 0025F194*/ PPC::Runtime::ASM::bne(.L_802623C0);
/*80262398 0025F198*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B7870 @ Get_MemoryOffset_HighBit);
/*8026239C 0025F19C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*802623A0 0025F1A0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804B7870 @ Get_MemoryOffset_LowBit);
/*802623A4 0025F1A4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802623A8 0025F1A8*/ PPC::Runtime::ASM::bl(OSReport);
/*802623AC 0025F1AC*/ PPC::Runtime::ASM::lis(context->r4, String_ "StKind_IsNotLessThen_StKind_Terminate_And_NotLessThen_StKind_Non" Get_MemoryOffset_HighBit);
/*802623B0 0025F1B0*/ PPC::Runtime::ASM::li(context->r3, String_ "stage." Get_MemoryOffset_SDA21);
/*802623B4 0025F1B4*/ PPC::Runtime::ASM::addi(context->r5, context->r4, String_ "StKind_IsNotLessThen_StKind_Terminate_And_NotLessThen_StKind_Non" Get_MemoryOffset_LowBit);
/*802623B8 0025F1B8*/ PPC::Runtime::ASM::li(context->r4, 0x30);
/*802623BC 0025F1BC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802623C0, 0x802623C0) //this is a jump label
/*802623C0 0025F1C0*/ PPC::Runtime::ASM::mulli(context->r3, context->r31, 0x58);
/*802623C4 0025F1C4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1stDataP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802623C8 0025F1C8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*802623CC 0025F1CC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x20);
/*802623D0 0025F1D0*/ PPC::Runtime::ASM::lwzx(context->r3, context->r4, context->r0);
/*802623D4 0025F1D4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802623D8 0025F1D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802623DC 0025F1DC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802623E0 0025F1E0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802623E4 0025F1E4*/ PPC::Runtime::ASM::blr();
}