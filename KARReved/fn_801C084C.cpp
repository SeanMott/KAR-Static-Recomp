//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C7B2C.hpp"
#include "fn_801C092C.hpp"



void fn_801C084C(PPC::Runtime::GCContext* context)
{
/*801C084C 001BD64C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C0850 001BD650*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C0854 001BD654*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C0858 001BD658*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C085C 001BD65C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C0860 001BD660*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r3));
/*801C0864 001BD664*/ PPC::Runtime::ASM::bl(fn_801C7B2C);
/*801C0868 001BD668*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C086C 001BD66C*/ PPC::Runtime::ASM::bne(.L_801C0878);
/*801C0870 001BD670*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C0874 001BD674*/ PPC::Runtime::ASM::bl(fn_801C092C);
RUNTIME_PPC_JUMP_LABEL(.L_801C0878, 0x801C0878) //this is a jump label
/*801C0878 001BD678*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C087C 001BD67C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C0880 001BD680*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C0884 001BD684*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C0888 001BD688*/ PPC::Runtime::ASM::blr();
}