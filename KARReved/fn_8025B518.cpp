//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80254CD8.hpp"
#include "fn_8025017C.hpp"
#include "fn_8025017C.hpp"
#include "fn_8025017C.hpp"
#include "fn_8024F488.hpp"



void fn_8025B518(PPC::Runtime::GCContext* context)
{
/*8025B518 00258318*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025B51C 0025831C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025B520 00258320*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025B524 00258324*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025B528 00258328*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025B52C 0025832C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025B530 00258330*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025B534 00258334*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025B538 00258338*/ PPC::Runtime::ASM::bl(fn_80254CD8);
/*8025B53C 0025833C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025B540 00258340*/ PPC::Runtime::ASM::bl(fn_8025017C);
/*8025B544 00258344*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r31));
/*8025B548 00258348*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025B54C 0025834C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8025B550 00258350*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r31));
/*8025B554 00258354*/ PPC::Runtime::ASM::bl(fn_8025017C);
/*8025B558 00258358*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1cc, context->r31));
/*8025B55C 0025835C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025B560 00258360*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8025B564 00258364*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r31));
/*8025B568 00258368*/ PPC::Runtime::ASM::bl(fn_8025017C);
/*8025B56C 0025836C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r31));
/*8025B570 00258370*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025B574 00258374*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2E8C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025B578 00258378*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8025B57C 0025837C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8025B580 00258380*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2E88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025B584 00258384*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8025B588 00258388*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8025B58C 0025838C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r31));
/*8025B590 00258390*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*8025B594 00258394*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025B598 00258398*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025B59C 0025839C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025B5A0 002583A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025B5A4 002583A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025B5A8 002583A8*/ PPC::Runtime::ASM::blr();
}