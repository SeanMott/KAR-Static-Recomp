//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8007D580.hpp"
#include "memcpy.hpp"



void fn_800811CC(PPC::Runtime::GCContext* context)
{
/*800811CC 0007DFCC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800811D0 0007DFD0*/ PPC::Runtime::ASM::mflr(context->r0);
/*800811D4 0007DFD4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800811D8 0007DFD8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800811DC 0007DFDC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800811E0 0007DFE0*/ PPC::Runtime::ASM::bl(fn_8007D580);
/*800811E4 0007DFE4*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800811E8 0007DFE8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800811EC 0007DFEC*/ PPC::Runtime::ASM::li(context->r5, 0x68);
/*800811F0 0007DFF0*/ PPC::Runtime::ASM::bl(memcpy);
/*800811F4 0007DFF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800811F8 0007DFF8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800811FC 0007DFFC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80081200 0007E000*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80081204 0007E004*/ PPC::Runtime::ASM::blr();
}