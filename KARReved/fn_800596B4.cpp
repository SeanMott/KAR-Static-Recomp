//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005915C.hpp"
#include "fn_8005884C.hpp"
#include "fn_8005884C.hpp"
#include "fn_80059364.hpp"



void fn_800596B4(PPC::Runtime::GCContext* context)
{
/*800596B4 000564B4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800596B8 000564B8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800596BC 000564BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800596C0 000564C0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800596C4 000564C4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800596C8 000564C8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800596CC 000564CC*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800596D0 000564D0*/ PPC::Runtime::ASM::bl(fn_8005915C);
/*800596D4 000564D4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1f);
/*800596D8 000564D8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800596DC 000564DC*/ PPC::Runtime::ASM::clrrwi(context->r4, context->r0, 5);
/*800596E0 000564E0*/ PPC::Runtime::ASM::bl(fn_8005884C);
/*800596E4 000564E4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800596E8 000564E8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800596EC 000564EC*/ PPC::Runtime::ASM::li(context->r4, 0x44);
/*800596F0 000564F0*/ PPC::Runtime::ASM::bl(fn_8005884C);
/*800596F4 000564F4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*800596F8 000564F8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800596FC 000564FC*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80059700 00056500*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80059704 00056504*/ PPC::Runtime::ASM::bl(fn_80059364);
/*80059708 00056508*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8005970C 0005650C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80059710 00056510*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80059714 00056514*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80059718 00056518*/ PPC::Runtime::ASM::bl(fn_HSD_ArchiveParse);
/*8005971C 0005651C*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*80059720 00056520*/ PPC::Runtime::ASM::bne(.L_80059748);
/*80059724 00056524*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_203 @ Get_MemoryOffset_HighBit);
/*80059728 00056528*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_203 @ Get_MemoryOffset_LowBit);
/*8005972C 0005652C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80059730 00056530*/ PPC::Runtime::ASM::bl(OSReport);
/*80059734 00056534*/ PPC::Runtime::ASM::lis(context->r3, String_ "lbarchive." Get_MemoryOffset_HighBit);
/*80059738 00056538*/ PPC::Runtime::ASM::li(context->r4, 0x5e);
/*8005973C 0005653C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "lbarchive." Get_MemoryOffset_LowBit);
/*80059740 00056540*/ PPC::Runtime::ASM::li(context->r5, lbl_805D5270 @ Get_MemoryOffset_SDA21);
/*80059744 00056544*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80059748, 0x80059748) //this is a jump label
/*80059748 00056548*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8005974C 0005654C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80059750 00056550*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*80059754 00056554*/ PPC::Runtime::ASM::bl(fn_8041E434);
/* 80059758 00056558  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*8005975C 0005655C*/ PPC::Runtime::ASM::beq(.L_80059770);
/*80059760 00056560*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80059764 00056564*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*80059768 00056568*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8005976C 0005656C*/ PPC::Runtime::ASM::bl(fn_8041E46C);
RUNTIME_PPC_JUMP_LABEL(.L_80059770, 0x80059770) //this is a jump label
/*80059770 00056570*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80059774 00056574*/ PPC::Runtime::ASM::bne(.L_80059748);
/*80059778 00056578*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8005977C 0005657C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80059780 00056580*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80059784 00056584*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80059788 00056588*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8005978C 0005658C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80059790 00056590*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80059794 00056594*/ PPC::Runtime::ASM::blr();
}