//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802894BC.hpp"



void fn_8037E42C(PPC::Runtime::GCContext* context)
{
/*8037E42C 0037B22C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8037E430 0037B230*/ PPC::Runtime::ASM::mflr(context->r0);
/*8037E434 0037B234*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8037E438 0037B238*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8037E43C 0037B23C*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*8037E440 0037B240*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8037E444 0037B244*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*8037E448 0037B248*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037E44C 0037B24C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8037E450 0037B250*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*8037E454 0037B254*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8037E458 0037B258*/ PPC::Runtime::ASM::beq(.L_8037E470);
/*8037E45C 0037B25C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjRemoveAnimAll);
/*8037E460 0037B260*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*8037E464 0037B264*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8037E468 0037B268*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*8037E46C 0037B26C*/ PPC::Runtime::ASM::bl(fn_802894BC);
RUNTIME_PPC_JUMP_LABEL(.L_8037E470, 0x8037E470) //this is a jump label
/*8037E470 0037B270*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8037E474 0037B274*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8037E478 0037B278*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8037E47C 0037B27C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037E480 0037B280*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8037E484 0037B284*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8037E488 0037B288*/ PPC::Runtime::ASM::blr();
}