//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250340.hpp"
#include "fn_80251F40.hpp"
#include "fn_80250940.hpp"
#include "fn_8024F488.hpp"



void fn_80258D6C(PPC::Runtime::GCContext* context)
{
/*80258D6C 00255B6C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80258D70 00255B70*/ PPC::Runtime::ASM::mflr(context->r0);
/*80258D74 00255B74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80258D78 00255B78*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80258D7C 00255B7C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80258D80 00255B80*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80258D84 00255B84*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80258D88 00255B88*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80258D8C 00255B8C*/ PPC::Runtime::ASM::bl(fn_80250340);
/*80258D90 00255B90*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80258D94 00255B94*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80258D98 00255B98*/ PPC::Runtime::ASM::bl(fn_80251F40);
/*80258D9C 00255B9C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80258DA0 00255BA0*/ PPC::Runtime::ASM::bl(fn_80250940);
/*80258DA4 00255BA4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2E18 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80258DA8 00255BA8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80258DAC 00255BAC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2E1C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80258DB0 00255BB0*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*80258DB4 00255BB4*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80258DB8 00255BB8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80258DBC 00255BBC*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*80258DC0 00255BC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80258DC4 00255BC4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80258DC8 00255BC8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80258DCC 00255BCC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80258DD0 00255BD0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80258DD4 00255BD4*/ PPC::Runtime::ASM::blr();
}