//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250340.hpp"
#include "fn_80251F40.hpp"
#include "fn_80250940.hpp"
#include "fn_8024F488.hpp"



void fn_8025E310(PPC::Runtime::GCContext* context)
{
/*8025E310 0025B110*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025E314 0025B114*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025E318 0025B118*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025E31C 0025B11C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025E320 0025B120*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025E324 0025B124*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025E328 0025B128*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025E32C 0025B12C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025E330 0025B130*/ PPC::Runtime::ASM::bl(fn_80250340);
/*8025E334 0025B134*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025E338 0025B138*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8025E33C 0025B13C*/ PPC::Runtime::ASM::bl(fn_80251F40);
/*8025E340 0025B140*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025E344 0025B144*/ PPC::Runtime::ASM::bl(fn_80250940);
/*8025E348 0025B148*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2F10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025E34C 0025B14C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025E350 0025B150*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2F14 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025E354 0025B154*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8025E358 0025B158*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8025E35C 0025B15C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8025E360 0025B160*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*8025E364 0025B164*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025E368 0025B168*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025E36C 0025B16C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025E370 0025B170*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025E374 0025B174*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025E378 0025B178*/ PPC::Runtime::ASM::blr();
}