//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80190DE0.hpp"



void fn_801E083C(PPC::Runtime::GCContext* context)
{
/*801E083C 001DD63C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801E0840 001DD640*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E0844 001DD644*/ PPC::Runtime::ASM::xoris(context->r4, context->r4, 0x8000);
/*801E0848 001DD648*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E1CA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E084C 001DD64C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E0850 001DD650*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*801E0854 001DD654*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xb2c);
/*801E0858 001DD658*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E085C 001DD65C*/ PPC::Runtime::ASM::mr(context->r4, context->r5);
/*801E0860 001DD660*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*801E0864 001DD664*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801E0868 001DD668*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801E086C 001DD66C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f1);
/*801E0870 001DD670*/ PPC::Runtime::ASM::bl(fn_80190DE0);
/*801E0874 001DD674*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E0878 001DD678*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E087C 001DD67C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801E0880 001DD680*/ PPC::Runtime::ASM::blr();
}