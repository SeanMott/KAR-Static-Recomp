//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801389D8.hpp"
#include "fn_80138AB0.hpp"



void fn_8016FBF0(PPC::Runtime::GCContext* context)
{
/*8016FBF0 0016C9F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8016FBF4 0016C9F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016FBF8 0016C9F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016FBFC 0016C9FC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016FC00 0016CA00*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8016FC04 0016CA04*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016FC08 0016CA08*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*8016FC0C 0016CA0C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0xbec);
/*8016FC10 0016CA10*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8016FC14 0016CA14*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*8016FC18 0016CA18*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8016FC1C 0016CA1C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8016FC20 0016CA20*/ PPC::Runtime::ASM::beq(.L_8016FC44);
/*8016FC24 0016CA24*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8016FC28 0016CA28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8016FC2C 0016CA2C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8016FC30 0016CA30*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0BA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016FC34 0016CA34*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0BA4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016FC38 0016CA38*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*8016FC3C 0016CA3C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8016FC40 0016CA40*/ PPC::Runtime::ASM::bl(fn_80138AB0);
RUNTIME_PPC_JUMP_LABEL(.L_8016FC44, 0x8016FC44) //this is a jump label
/*8016FC44 0016CA44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016FC48 0016CA48*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016FC4C 0016CA4C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016FC50 0016CA50*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8016FC54 0016CA54*/ PPC::Runtime::ASM::blr();
}