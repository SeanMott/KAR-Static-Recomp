//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FC398.hpp"
#include "fn_8021A0E0.hpp"



void fn_80211FD4(PPC::Runtime::GCContext* context)
{
/*80211FD4 0020EDD4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80211FD8 0020EDD8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80211FDC 0020EDDC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2550 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80211FE0 0020EDE0*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*80211FE4 0020EDE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80211FE8 0020EDE8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80211FEC 0020EDEC*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80211FF0 0020EDF0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2554 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80211FF4 0020EDF4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80211FF8 0020EDF8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80211FFC 0020EDFC*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*80212000 0020EE00*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80212004 0020EE04*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80212008 0020EE08*/ PPC::Runtime::ASM::beq(.L_80212014);
/*8021200C 0020EE0C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80212010 0020EE10*/ PPC::Runtime::ASM::bl(fn_8021A0E0);
RUNTIME_PPC_JUMP_LABEL(.L_80212014, 0x80212014) //this is a jump label
/*80212014 0020EE14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80212018 0020EE18*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021201C 0020EE1C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80212020 0020EE20*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80212024 0020EE24*/ PPC::Runtime::ASM::blr();
}