//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_8011582C.hpp"



void fn_80128448(PPC::Runtime::GCContext* context)
{
/*80128448 00125248*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8012844C 0012524C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80128450 00125250*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80128454 00125254*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80128458 00125258*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8012845C 0012525C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80128460 00125260*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb7c, context->r3));
/*80128464 00125264*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80128468 00125268*/ PPC::Runtime::ASM::beq(.L_80128478);
/*8012846C 0012526C*/ PPC::Runtime::ASM::bl(fn_8011582C);
/*80128470 00125270*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80128474 00125274*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb7c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80128478, 0x80128478) //this is a jump label
/*80128478 00125278*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012847C 0012527C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80128480 00125280*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80128484 00125284*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80128488 00125288*/ PPC::Runtime::ASM::blr();
}