//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8014F43C.hpp"
#include "fn_8014F3C8.hpp"



void fn_80133DB4(PPC::Runtime::GCContext* context)
{
/*80133DB4 00130BB4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80133DB8 00130BB8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80133DBC 00130BBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80133DC0 00130BC0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80133DC4 00130BC4*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*80133DC8 00130BC8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80133DCC 00130BCC*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80133DD0 00130BD0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80133DD4 00130BD4*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80133DD8 00130BD8*/ PPC::Runtime::ASM::bl(fn_8014F43C);
/*80133DDC 00130BDC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80133DE0 00130BE0*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80133DE4 00130BE4*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*80133DE8 00130BE8*/ PPC::Runtime::ASM::bl(fn_8014F3C8);
/*80133DEC 00130BEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80133DF0 00130BF0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80133DF4 00130BF4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80133DF8 00130BF8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80133DFC 00130BFC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80133E00 00130C00*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80133E04 00130C04*/ PPC::Runtime::ASM::blr();
}