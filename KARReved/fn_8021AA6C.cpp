//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FE764.hpp"
#include "fn_8021BA14.hpp"



void fn_8021AA6C(PPC::Runtime::GCContext* context)
{
/*8021AA6C 0021786C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8021AA70 00217870*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021AA74 00217874*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2700 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021AA78 00217878*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021AA7C 0021787C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021AA80 00217880*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8021AA84 00217884*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x334);
/*8021AA88 00217888*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8021AA8C 0021788C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2f8);
/*8021AA90 00217890*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8021AA94 00217894*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*8021AA98 00217898*/ PPC::Runtime::ASM::bl(fn_801FE764);
/*8021AA9C 0021789C*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*8021AAA0 002178A0*/ PPC::Runtime::ASM::beq(.L_8021AAAC);
/*8021AAA4 002178A4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021AAA8 002178A8*/ PPC::Runtime::ASM::bl(fn_8021BA14);
RUNTIME_PPC_JUMP_LABEL(.L_8021AAAC, 0x8021AAAC) //this is a jump label
/*8021AAAC 002178AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021AAB0 002178B0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021AAB4 002178B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021AAB8 002178B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8021AABC 002178BC*/ PPC::Runtime::ASM::blr();
}