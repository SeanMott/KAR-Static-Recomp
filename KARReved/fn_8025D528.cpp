//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250340.hpp"
#include "fn_80251F40.hpp"
#include "fn_80250940.hpp"
#include "fn_8024F488.hpp"



void fn_8025D528(PPC::Runtime::GCContext* context)
{
/*8025D528 0025A328*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025D52C 0025A32C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025D530 0025A330*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025D534 0025A334*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025D538 0025A338*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025D53C 0025A33C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025D540 0025A340*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025D544 0025A344*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025D548 0025A348*/ PPC::Runtime::ASM::bl(fn_80250340);
/*8025D54C 0025A34C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025D550 0025A350*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8025D554 0025A354*/ PPC::Runtime::ASM::bl(fn_80251F40);
/*8025D558 0025A358*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025D55C 0025A35C*/ PPC::Runtime::ASM::bl(fn_80250940);
/*8025D560 0025A360*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2EE8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025D564 0025A364*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025D568 0025A368*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2EEC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025D56C 0025A36C*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8025D570 0025A370*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8025D574 0025A374*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8025D578 0025A378*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*8025D57C 0025A37C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025D580 0025A380*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025D584 0025A384*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025D588 0025A388*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025D58C 0025A38C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025D590 0025A390*/ PPC::Runtime::ASM::blr();
}