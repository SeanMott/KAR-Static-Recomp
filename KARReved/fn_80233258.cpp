//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80067554.hpp"



void fn_80233258(PPC::Runtime::GCContext* context)
{
/*80233258 00230058*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8023325C 0023005C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80233260 00230060*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2A80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80233264 00230064*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80233268 00230068*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8023326C 0023006C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80233270 00230070*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80233274 00230074*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*80233278 00230078*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x38);
/*8023327C 0023007C*/ PPC::Runtime::ASM::bl(fn_80067554);
/*80233280 00230080*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r31));
/*80233284 00230084*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*80233288 00230088*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r31));
/*8023328C 0023008C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r31));
/*80233290 00230090*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80233294 00230094*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 24);
/*80233298 00230098*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8023329C 0023009C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802332A0 002300A0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802332A4 002300A4*/ PPC::Runtime::ASM::blr();
}