//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138BA4.hpp"
#include "fn_80138AB0.hpp"



void fn_8017003C(PPC::Runtime::GCContext* context)
{
/*8017003C 0016CE3C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80170040 0016CE40*/ PPC::Runtime::ASM::mflr(context->r0);
/*80170044 0016CE44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80170048 0016CE48*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8017004C 0016CE4C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80170050 0016CE50*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80170054 0016CE54*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*80170058 0016CE58*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8017005C 0016CE5C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80170060 0016CE60*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc04, context->r3));
/*80170064 0016CE64*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80170068 0016CE68*/ PPC::Runtime::ASM::beq(.L_80170084);
/*8017006C 0016CE6C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80170070 0016CE70*/ PPC::Runtime::ASM::li(context->r4, 0x13);
/*80170074 0016CE74*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0BA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80170078 0016CE78*/ PPC::Runtime::ASM::bl(fn_80138BA4);
/*8017007C 0016CE7C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80170080 0016CE80*/ PPC::Runtime::ASM::bl(fn_80138AB0);
RUNTIME_PPC_JUMP_LABEL(.L_80170084, 0x80170084) //this is a jump label
/*80170084 0016CE84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80170088 0016CE88*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8017008C 0016CE8C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80170090 0016CE90*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80170094 0016CE94*/ PPC::Runtime::ASM::blr();
}