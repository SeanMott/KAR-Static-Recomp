//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022D248.hpp"



void fn_8022E438(PPC::Runtime::GCContext* context)
{
/*8022E438 0022B238*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8022E43C 0022B23C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8022E440 0022B240*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022E444 0022B244*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022E448 0022B248*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8022E44C 0022B24C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8022E450 0022B250*/ PPC::Runtime::ASM::blt(.L_8022E46C);
/*8022E454 0022B254*/ PPC::Runtime::ASM::lis(context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_HighBit);
/*8022E458 0022B258*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B4CF0 @ Get_MemoryOffset_HighBit);
/*8022E45C 0022B25C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_LowBit);
/*8022E460 0022B260*/ PPC::Runtime::ASM::li(context->r4, 0x121);
/*8022E464 0022B264*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804B4CF0 @ Get_MemoryOffset_LowBit);
/*8022E468 0022B268*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8022E46C, 0x8022E46C) //this is a jump label
/*8022E46C 0022B26C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8022E470 0022B270*/ PPC::Runtime::ASM::bl(fn_8022D248);
/*8022E474 0022B274*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022E478 0022B278*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7fc, context->r3));
/*8022E47C 0022B27C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022E480 0022B280*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022E484 0022B284*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8022E488 0022B288*/ PPC::Runtime::ASM::blr();
}