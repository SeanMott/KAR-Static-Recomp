//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80207DEC.hpp"
#include "fn_801FD6B0.hpp"
#include "fn_801FED40.hpp"
#include "fn_80209CE4.hpp"
#include "fn_801FC398.hpp"



void fn_80216F9C(PPC::Runtime::GCContext* context)
{
/*80216F9C 00213D9C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80216FA0 00213DA0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80216FA4 00213DA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80216FA8 00213DA8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80216FAC 00213DAC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80216FB0 00213DB0*/ PPC::Runtime::ASM::bl(fn_80207DEC);
/*80216FB4 00213DB4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0a, context->r31));
/*80216FB8 00213DB8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80216FBC 00213DBC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*80216FC0 00213DC0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80216FC4 00213DC4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0a, context->r31));
/*80216FC8 00213DC8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x87c, context->r31));
/*80216FCC 00213DCC*/ PPC::Runtime::ASM::bl(fn_801FD6B0);
/*80216FD0 00213DD0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80216FD4 00213DD4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80216FD8 00213DD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r31));
/*80216FDC 00213DDC*/ PPC::Runtime::ASM::bl(fn_801FED40);
/*80216FE0 00213DE0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80216FE4 00213DE4*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*80216FE8 00213DE8*/ PPC::Runtime::ASM::bl(fn_80209CE4);
/*80216FEC 00213DEC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2638 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80216FF0 00213DF0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80216FF4 00213DF4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E263C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80216FF8 00213DF8*/ PPC::Runtime::ASM::li(context->r4, 0xe);
/*80216FFC 00213DFC*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80217000 00213E00*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80217004 00213E04*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*80217008 00213E08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021700C 00213E0C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80217010 00213E10*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80217014 00213E14*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80217018 00213E18*/ PPC::Runtime::ASM::blr();
}