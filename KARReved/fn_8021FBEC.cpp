//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018C4E8.hpp"
#include "fn_80222F5C.hpp"
#include "fn_80220578.hpp"



void fn_8021FBEC(PPC::Runtime::GCContext* context)
{
/*8021FBEC 0021C9EC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8021FBF0 0021C9F0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021FBF4 0021C9F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021FBF8 0021C9F8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021FBFC 0021C9FC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8021FC00 0021CA00*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x164, context->r31));
/*8021FC04 0021CA04*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*8021FC08 0021CA08*/ PPC::Runtime::ASM::beq(.L_8021FC18);
/*8021FC0C 0021CA0C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021FC10 0021CA10*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8021FC14 0021CA14*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8021FC18, 0x8021FC18) //this is a jump label
/*8021FC18 0021CA18*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r31));
/*8021FC1C 0021CA1C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2818 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021FC20 0021CA20*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8021FC24 0021CA24*/ PPC::Runtime::ASM::bge(.L_8021FC34);
/*8021FC28 0021CA28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8021FC2C 0021CA2C*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8021FC30 0021CA30*/ PPC::Runtime::ASM::b(.L_8021FC5C);
RUNTIME_PPC_JUMP_LABEL(.L_8021FC34, 0x8021FC34) //this is a jump label
/*8021FC34 0021CA34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r31));
/*8021FC38 0021CA38*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8021FC3C 0021CA3C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r31));
/*8021FC40 0021CA40*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8021FC44 0021CA44*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r31));
/*8021FC48 0021CA48*/ PPC::Runtime::ASM::bl(fn_8018C4E8);
/*8021FC4C 0021CA4C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021FC50 0021CA50*/ PPC::Runtime::ASM::bl(fn_80222F5C);
/*8021FC54 0021CA54*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021FC58 0021CA58*/ PPC::Runtime::ASM::bl(fn_80220578);
RUNTIME_PPC_JUMP_LABEL(.L_8021FC5C, 0x8021FC5C) //this is a jump label
/*8021FC5C 0021CA5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021FC60 0021CA60*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021FC64 0021CA64*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021FC68 0021CA68*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8021FC6C 0021CA6C*/ PPC::Runtime::ASM::blr();
}