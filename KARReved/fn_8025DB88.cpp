//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250340.hpp"
#include "fn_8024F488.hpp"



void fn_8025DB88(PPC::Runtime::GCContext* context)
{
/*8025DB88 0025A988*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025DB8C 0025A98C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025DB90 0025A990*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025DB94 0025A994*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025DB98 0025A998*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8025DB9C 0025A99C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025DBA0 0025A9A0*/ PPC::Runtime::ASM::bl(fn_80250340);
/*8025DBA4 0025A9A4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2EF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025DBA8 0025A9A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025DBAC 0025A9AC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2EFC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025DBB0 0025A9B0*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8025DBB4 0025A9B4*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8025DBB8 0025A9B8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8025DBBC 0025A9BC*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*8025DBC0 0025A9C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025DBC4 0025A9C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025DBC8 0025A9C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025DBCC 0025A9CC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025DBD0 0025A9D0*/ PPC::Runtime::ASM::blr();
}