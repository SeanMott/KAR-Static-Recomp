//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8027A08C.hpp"
#include "fn_Rider_ActionStateChange.hpp"
#include "fn_80231020.hpp"



void fn_801C0314(PPC::Runtime::GCContext* context)
{
/*801C0314 001BD114*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C0318 001BD118*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C031C 001BD11C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C0320 001BD120*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C0324 001BD124*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C0328 001BD128*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801C032C 001BD12C*/ PPC::Runtime::ASM::bl(fn_8027A08C);
/*801C0330 001BD130*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E18C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801C0334 001BD134*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C0338 001BD138*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E18C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801C033C 001BD13C*/ PPC::Runtime::ASM::li(context->r4, 0x32);
/*801C0340 001BD140*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801C0344 001BD144*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801C0348 001BD148*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801C034C 001BD14C*/ PPC::Runtime::ASM::bl(fn_Rider_ActionStateChange);
/*801C0350 001BD150*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x823, context->r31));
/*801C0354 001BD154*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801C0358 001BD158*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 3, 28, 28);
/*801C035C 001BD15C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x823, context->r31));
/*801C0360 001BD160*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*801C0364 001BD164*/ PPC::Runtime::ASM::bl(fn_80231020);
/*801C0368 001BD168*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C036C 001BD16C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C0370 001BD170*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C0374 001BD174*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C0378 001BD178*/ PPC::Runtime::ASM::blr();
}