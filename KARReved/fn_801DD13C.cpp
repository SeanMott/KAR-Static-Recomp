//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005F034.hpp"



void fn_801DD13C(PPC::Runtime::GCContext* context)
{
/*801DD13C 001D9F3C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801DD140 001D9F40*/ PPC::Runtime::ASM::mflr(context->r0);
/*801DD144 001D9F44*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1C50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801DD148 001D9F48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801DD14C 001D9F4C*/ PPC::Runtime::ASM::mr(context->r0, context->r5);
/*801DD150 001D9F50*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*801DD154 001D9F54*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x844, context->r3));
/*801DD158 001D9F58*/ PPC::Runtime::ASM::mr(context->r3, context->r0);
/*801DD15C 001D9F5C*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*801DD160 001D9F60*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801DD164 001D9F64*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801DD168 001D9F68*/ PPC::Runtime::ASM::bl(fn_8005F034);
/*801DD16C 001D9F6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801DD170 001D9F70*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801DD174 001D9F74*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801DD178 001D9F78*/ PPC::Runtime::ASM::blr();
}