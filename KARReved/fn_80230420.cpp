//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022D248.hpp"



void fn_80230420(PPC::Runtime::GCContext* context)
{
/*80230420 0022D220*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80230424 0022D224*/ PPC::Runtime::ASM::mflr(context->r0);
/*80230428 0022D228*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8023042C 0022D22C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80230430 0022D230*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80230434 0022D234*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*80230438 0022D238*/ PPC::Runtime::ASM::blt(.L_80230454);
/*8023043C 0022D23C*/ PPC::Runtime::ASM::lis(context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_HighBit);
/*80230440 0022D240*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B4CF0 @ Get_MemoryOffset_HighBit);
/*80230444 0022D244*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_LowBit);
/*80230448 0022D248*/ PPC::Runtime::ASM::li(context->r4, 0x63b);
/*8023044C 0022D24C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804B4CF0 @ Get_MemoryOffset_LowBit);
/*80230450 0022D250*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80230454, 0x80230454) //this is a jump label
/*80230454 0022D254*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80230458 0022D258*/ PPC::Runtime::ASM::bl(fn_8022D248);
/*8023045C 0022D25C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80230460 0022D260*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x834, context->r3));
/*80230464 0022D264*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80230468 0022D268*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8023046C 0022D26C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80230470 0022D270*/ PPC::Runtime::ASM::blr();
}