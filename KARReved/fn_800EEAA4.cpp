//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800D066C.hpp"



void fn_800EEAA4(PPC::Runtime::GCContext* context)
{
/*800EEAA4 000EB8A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*800EEAA8 000EB8A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800EEAAC 000EB8AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800EEAB0 000EB8B0*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800EEAB4 000EB8B4*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*800EEAB8 000EB8B8*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800EEABC 000EB8BC*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*800EEAC0 000EB8C0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800EEAC4 000EB8C4*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*800EEAC8 000EB8C8*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*800EEACC 000EB8CC*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*800EEAD0 000EB8D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800EEAD4 000EB8D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*800EEAD8 000EB8D8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800EEADC 000EB8DC*/ PPC::Runtime::ASM::beq(.L_800EEAE8);
/*800EEAE0 000EB8E0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800EEAE4 000EB8E4*/ PPC::Runtime::ASM::b(.L_800EEAEC);
RUNTIME_PPC_JUMP_LABEL(.L_800EEAE8, 0x800EEAE8) //this is a jump label
/*800EEAE8 000EB8E8*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800EEAEC, 0x800EEAEC) //this is a jump label
/*800EEAEC 000EB8EC*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*800EEAF0 000EB8F0*/ PPC::Runtime::ASM::lfs(context->f30, STRUCT_FLOAT_COUNT_1805DF790 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EEAF4 000EB8F4*/ PPC::Runtime::ASM::li(context->r29, -0x1);
/*800EEAF8 000EB8F8*/ PPC::Runtime::ASM::bne(.L_800EEB10);
/*800EEAFC 000EB8FC*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_970 @ Get_MemoryOffset_HighBit);
/*800EEB00 000EB900*/ PPC::Runtime::ASM::li(context->r4, 0x59);
/*800EEB04 000EB904*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_970 @ Get_MemoryOffset_LowBit);
/*800EEB08 000EB908*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6188 @ Get_MemoryOffset_SDA21);
/*800EEB0C 000EB90C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800EEB10, 0x800EEB10) //this is a jump label
/*800EEB10 000EB910*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805DF794 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EEB14 000EB914*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*800EEB18 000EB918*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*800EEB1C 000EB91C*/ PPC::Runtime::ASM::b(.L_800EEB5C);
RUNTIME_PPC_JUMP_LABEL(.L_800EEB20, 0x800EEB20) //this is a jump label
/*800EEB20 000EB920*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70c, context->r26));
/*800EEB24 000EB924*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*800EEB28 000EB928*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r30);
/*800EEB2C 000EB92C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*800EEB30 000EB930*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*800EEB34 000EB934*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*800EEB38 000EB938*/ PPC::Runtime::ASM::bl(fn_800D066C);
/*800EEB3C 000EB93C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f31, context->f1);
/*800EEB40 000EB940*/ PPC::Runtime::ASM::beq(.L_800EEB54);
/*800EEB44 000EB944*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f30);
/*800EEB48 000EB948*/ PPC::Runtime::ASM::bge(.L_800EEB54);
/*800EEB4C 000EB94C*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*800EEB50 000EB950*/ PPC::Runtime::ASM::mr(context->r29, context->r28);
RUNTIME_PPC_JUMP_LABEL(.L_800EEB54, 0x800EEB54) //this is a jump label
/*800EEB54 000EB954*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0xc);
/*800EEB58 000EB958*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800EEB5C, 0x800EEB5C) //this is a jump label
/*800EEB5C 000EB95C*/ PPC::Runtime::ASM::cmpw(context->r28, context->r31);
/*800EEB60 000EB960*/ PPC::Runtime::ASM::blt(.L_800EEB20);
/*800EEB64 000EB964*/ PPC::Runtime::ASM::cmpwi(context->r29, -0x1);
/*800EEB68 000EB968*/ PPC::Runtime::ASM::bne(.L_800EEB70);
/*800EEB6C 000EB96C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800EEB70, 0x800EEB70) //this is a jump label
/*800EEB70 000EB970*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800EEB74 000EB974*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*800EEB78 000EB978*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800EEB7C 000EB97C*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*800EEB80 000EB980*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800EEB84 000EB984*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800EEB88 000EB988*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*800EEB8C 000EB98C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800EEB90 000EB990*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800EEB94 000EB994*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*800EEB98 000EB998*/ PPC::Runtime::ASM::blr();
}