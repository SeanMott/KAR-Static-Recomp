//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8034D044(PPC::Runtime::GCContext* context)
{
/*8034D044 00349E44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8034D048 00349E48*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8034D04C 00349E4C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8034D050 00349E50*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8034D054 00349E54*/ PPC::Runtime::ASM::mr(context->r3, context->r0);
/*8034D058 00349E58*/ PPC::Runtime::ASM::mtctr(context->r5);
/*8034D05C 00349E5C*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*8034D060 00349E60*/ PPC::Runtime::ASM::ble(.L_8034D09C);
RUNTIME_PPC_JUMP_LABEL(.L_8034D064, 0x8034D064) //this is a jump label
/*8034D064 00349E64*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x0);
/*8034D068 00349E68*/ PPC::Runtime::ASM::beq(.L_8034D080);
/*8034D06C 00349E6C*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r4);
/*8034D070 00349E70*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r5));
/*8034D074 00349E74*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8034D078 00349E78*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*8034D07C 00349E7C*/ PPC::Runtime::ASM::bgt(.L_8034D09C);
RUNTIME_PPC_JUMP_LABEL(.L_8034D080, 0x8034D080) //this is a jump label
/*8034D080 00349E80*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8034D084 00349E84*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*8034D088 00349E88*/ PPC::Runtime::ASM::bgt(.L_8034D09C);
/*8034D08C 00349E8C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x8);
/*8034D090 00349E90*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x8);
/*8034D094 00349E94*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*8034D098 00349E98*/ PPC::Runtime::ASM::bdnz(.L_8034D064);
RUNTIME_PPC_JUMP_LABEL(.L_8034D09C, 0x8034D09C) //this is a jump label
/*8034D09C 00349E9C*/ PPC::Runtime::ASM::subi(context->r3, context->r6, 0x1);
/*8034D0A0 00349EA0*/ PPC::Runtime::ASM::blr();
}