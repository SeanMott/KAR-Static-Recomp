//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8034AC50(PPC::Runtime::GCContext* context)
{
/*8034AC50 00347A50*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8034AC54 00347A54*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8034AC58 00347A58*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x1);
/*8034AC5C 00347A5C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*8034AC60 00347A60*/ PPC::Runtime::ASM::bne(.L_8034AC74);
/*8034AC64 00347A64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*8034AC68 00347A68*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x1);
/*8034AC6C 00347A6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*8034AC70 00347A70*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8034AC74, 0x8034AC74) //this is a jump label
/*8034AC74 00347A74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*8034AC78 00347A78*/ PPC::Runtime::ASM::clrrwi(context->r0, context->r0, 1);
/*8034AC7C 00347A7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*8034AC80 00347A80*/ PPC::Runtime::ASM::blr();
}