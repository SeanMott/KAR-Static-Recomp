//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_giveEnemyDamage(PPC::Runtime::GCContext* context)
{
/*8020B680 00208480*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8020B684 00208484*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8020B688 00208488*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E2460 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020B68C 0020848C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x994, context->r3));
/*8020B690 00208490*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8020B694 00208494*/ PPC::Runtime::ASM::xoris(context->r0, context->r4, 0x8000);
/*8020B698 00208498*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8020B69C 0020849C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8020B6A0 002084A0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*8020B6A4 002084A4*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f1);
/*8020B6A8 002084A8*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*8020B6AC 002084AC*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8020B6B0 002084B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020B6B4 002084B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x994, context->r3));
/*8020B6B8 002084B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x994, context->r3));
/*8020B6BC 002084BC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x270f);
/*8020B6C0 002084C0*/ PPC::Runtime::ASM::ble(.L_8020B6CC);
/*8020B6C4 002084C4*/ PPC::Runtime::ASM::li(context->r0, 0x270f);
/*8020B6C8 002084C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x994, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8020B6CC, 0x8020B6CC) //this is a jump label
/*8020B6CC 002084CC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x998, context->r3));
/*8020B6D0 002084D0*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8020B6D4 002084D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8020B6D8 002084D8*/ PPC::Runtime::ASM::xoris(context->r0, context->r4, 0x8000);
/*8020B6DC 002084DC*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E2460 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020B6E0 002084E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020B6E4 002084E4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8020B6E8 002084E8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*8020B6EC 002084EC*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f1);
/*8020B6F0 002084F0*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*8020B6F4 002084F4*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8020B6F8 002084F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8020B6FC 002084FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x998, context->r3));
/*8020B700 00208500*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x998, context->r3));
/*8020B704 00208504*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x270f);
/*8020B708 00208508*/ PPC::Runtime::ASM::ble(.L_8020B714);
/*8020B70C 0020850C*/ PPC::Runtime::ASM::li(context->r0, 0x270f);
/*8020B710 00208510*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x998, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8020B714, 0x8020B714) //this is a jump label
/*8020B714 00208514*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8020B718 00208518*/ PPC::Runtime::ASM::blr();
}