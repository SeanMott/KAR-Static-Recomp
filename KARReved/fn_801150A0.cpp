//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80055ACC.hpp"
#include "fn_800550BC.hpp"



void fn_801150A0(PPC::Runtime::GCContext* context)
{
/*801150A0 00111EA0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*801150A4 00111EA4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801150A8 00111EA8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801150AC 00111EAC*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801150B0 00111EB0*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801150B4 00111EB4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801150B8 00111EB8*/ PPC::Runtime::ASM::xoris(context->r4, context->r4, 0x8000);
/*801150BC 00111EBC*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*801150C0 00111EC0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801150C4 00111EC4*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*801150C8 00111EC8*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805DFB50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801150CC 00111ECC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801150D0 00111ED0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801150D4 00111ED4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801150D8 00111ED8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f1);
/*801150DC 00111EDC*/ PPC::Runtime::ASM::bl(fn_80055ACC);
/*801150E0 00111EE0*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801150E4 00111EE4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801150E8 00111EE8*/ PPC::Runtime::ASM::li(context->r4, 0x400);
/*801150EC 00111EEC*/ PPC::Runtime::ASM::bl(fn_800550BC);
/*801150F0 00111EF0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801150F4 00111EF4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*801150F8 00111EF8*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801150FC 00111EFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80115100 00111F00*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80115104 00111F04*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80115108 00111F08*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8011510C 00111F0C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80115110 00111F10*/ PPC::Runtime::ASM::blr();
}