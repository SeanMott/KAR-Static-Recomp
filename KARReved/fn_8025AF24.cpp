//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250340.hpp"
#include "fn_8024F488.hpp"



void fn_8025AF24(PPC::Runtime::GCContext* context)
{
/*8025AF24 00257D24*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025AF28 00257D28*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025AF2C 00257D2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025AF30 00257D30*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025AF34 00257D34*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8025AF38 00257D38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025AF3C 00257D3C*/ PPC::Runtime::ASM::bl(fn_80250340);
/*8025AF40 00257D40*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2E78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025AF44 00257D44*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025AF48 00257D48*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2E7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025AF4C 00257D4C*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8025AF50 00257D50*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8025AF54 00257D54*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8025AF58 00257D58*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*8025AF5C 00257D5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025AF60 00257D60*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025AF64 00257D64*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025AF68 00257D68*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025AF6C 00257D6C*/ PPC::Runtime::ASM::blr();
}