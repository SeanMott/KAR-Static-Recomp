//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803D9B10.hpp"



void fn_8048842C(PPC::Runtime::GCContext* context)
{
/*8048842C 0048522C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80488430 00485230*/ PPC::Runtime::ASM::mflr(context->r0);
/*80488434 00485234*/ PPC::Runtime::ASM::lis(context->r3, SKIP_ADDRESS_1 @ Get_MemoryOffset_HighBit);
/*80488438 00485238*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8048843C 0048523C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, SKIP_ADDRESS_1 @ Get_MemoryOffset_LowBit);
/*80488440 00485240*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r3));
/*80488444 00485244*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80488448 00485248*/ PPC::Runtime::ASM::bne(.L_80488458);
/*8048844C 0048524C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x110);
/*80488450 00485250*/ PPC::Runtime::ASM::bl(fn_803D9B10);
/*80488454 00485254*/ PPC::Runtime::ASM::b(.L_8048845C);
RUNTIME_PPC_JUMP_LABEL(.L_80488458, 0x80488458) //this is a jump label
/*80488458 00485258*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8048845C, 0x8048845C) //this is a jump label
/*8048845C 0048525C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80488460 00485260*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80488464 00485264*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80488468 00485268*/ PPC::Runtime::ASM::blr();
}